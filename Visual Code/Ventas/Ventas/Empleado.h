#pragma once
#include "Persona.h"
#include <iostream>
#include <string>
#include "ConexionDB.h"
#include <mysql.h>

using namespace std;


class Empleado : Persona {

private: string fecha_inicio_labores, fecha_ingreso, genero;
	   int DPI, NIT, id_empleado, id_puesto;


public:
	Empleado() {
	}
	Empleado(int empleado, int pi, int NIT, string nom, string ape, string dir, string fn, int puesto, int tel, string gen, string fnl, string fi) :
		Persona(nom, ape, dir, fn, tel) {
		DPI = pi;
		NIT = NIT;
		fecha_inicio_labores = fnl; 
		fecha_ingreso = fi;
		id_empleado = empleado;
		genero = gen;
		id_puesto = puesto;
	}
	void setDPI(int pi) {
		DPI = pi;
	}
	void setNIT(int NIT) {
		NIT = Nit;
	}
	void setnombre(string nom) {
		nombre = nom;
	}
	void setapellido(string ape) {
		apellido = ape;
	}
	void setdireccion(string dir) {
		direccion = dir;
	}
	void setfechanacimiento(string fn) {
		fecha_nacimiento = fn;
	}
	void settelefono(int tel) {
		telefono = tel;
	}
	void setfechainiciolabores(string fnl) {
		fecha_inicio_labores = fnl;
	}
	void setfechaingreso(string fi) {
		fecha_ingreso = fi;
	}
	void setgenero(string gen) {
		genero = gen;
	}
	void setidpuesto(int puesto) {
		id_puesto = puesto;
	}
	void setidempleado(int empleado) {
		id_empleado = empleado;
	}

	int getDPI() { return DPI; }
	int getNIT() { return NIT; }
	string getnombre() { return nombre; }
	string getapellido() { return apellido; }
	string getdireccion() { return direccion; }
	string getfechanacimiento() { return fecha_nacimiento; }
	int gettelefono() { return telefono; }
	string getfechainiciolabores() { return fecha_inicio_labores; }
	string getfechaingreso() { return fecha_ingreso; }
	string getgenero() { return genero; }
	int getidpuesto() { return id_puesto; }
	int getid_empleado() { return id_empleado; }

	void crear_empleado() {
		int q_estado;
		ConexionBD cn = ConexionBD();
		MYSQL_ROW fila;
		MYSQL_RES* resultados;
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string t = to_string(telefono);
			string d = to_string(DPI);
			string p = to_string(id_puesto);
			string insert = "INSERT INTO empleados (NOMBRES, APELLIDOS, DIRECCION, TELEFONO, DPI,GENERO , FECHA_NACIMIENTO, ID_PUESTO, FECHA_INICIO_LABORES, FECHA_INGRESO)VALUES('"+nombre+"','"+apellido+"','"+direccion+ "','"+t+"','"+d+"','"+genero+"','"+fecha_nacimiento+"','"+p+"','"+fecha_inicio_labores+"','"+fecha_ingreso+"');";
			const char* i = insert.c_str();
			q_estado = mysql_query(cn.getConectar(), i);
			if (!q_estado) {
				cout << "Ingreso Exitoso..." << endl;
			}
			else {
				cout << "Error al ingresar..." << endl;
			}
		}
		else {
			cout << "---- Error de Conexion ----" << endl;
		}
		cn.cerrar_conexion();
	}
	void leer_empleado() {
		int q_estado; 
		ConexionBD cn = ConexionBD();
		MYSQL_ROW fila;
		MYSQL_RES* resultados;
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string consulta = "select t.ID_EMPLEADO, t.NOMBRES, t.APELLIDOS, t.DIRECCION, t.telefono, t.dpi, t.genero, t.FECHA_NACIMIENTO, c.PUESTO, t. FECHA_INICIO_LABORES, t.FECHA_INGRESO  from empleados t inner join puestos c on c.ID_PUESTO = t.ID_PUESTO order by ID_EMPLEADO ASC; ";
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getConectar(), c);
			if (!q_estado) {
				resultados = mysql_store_result(cn.getConectar());
				cout << " -------------Estudiantes--------------" << endl;
				cout << "" << "|" << "ID_EMPLEADO" << "|" << "NOMBRES" << "   |   " << "APELLIDOS" << "   |" << "DIRECCION" << "  |    " << "TELEFONO" << "  |     " << " DPI " << "      |  " << "GENERO" << "  |     " << "FECHA DE NACIMIENTO" << "       |  " << " ID_PUESTO " << "  |  " << "FECHA_INICIO_LABORES" << "|" << "FECHA_INGRESO" << endl;
				while (fila = mysql_fetch_row(resultados)) { 
					cout << fila[0] << "          |" << fila[1] << "        |" << fila[2] << "       |   " << fila[3] << "   |   " << fila[4] << "  |   " << fila[5] << "   | " << fila[6] << "   |          " << fila[7] << "        |  " << fila[8] << "           |" << fila[9] << "        |" << fila[10] << endl;
				}

			}
			else {
				cout << "Error al mostrar los datos" << endl;
			}
		}
		else {
			cout << "---- Error de Conexion ----" << endl;
		}
		cn.cerrar_conexion();

	}
	void actualizar_empleado() {

		int q_estado;
		ConexionBD cn = ConexionBD();
		cn.abrir_conexion();
		string t = to_string(telefono);
		string d = to_string(DPI);
		string p = to_string(id_puesto);
		string ii = to_string(id_empleado);
		if (cn.getConectar()) {
			string  actualizar = "update empleados set nombres='"+nombre+"',apellidos='"+apellido+"',direccion='"+direccion+"',telefono='"+t+"', DPI='"+d+"',GENERO='"+genero+"',fecha_nacimiento = '"+fecha_nacimiento+",id_puesto='"+p+"',fecha_inicio_labores='"+fecha_inicio_labores+"',fecha_ingreso='"+fecha_ingreso+"' where id_empleado = "+ii+"";
			const char* i = actualizar.c_str();
			q_estado = mysql_query(cn.getConectar(), i);
			if (!q_estado) {
				cout << "Actualizacion Exitosa ..." << endl;
			}
			else {
				cout << " xxx Error al Ingresar  xxx" << endl;
			}
		}
		else {
			cout << " xxx Error en la Conexion xxxx" << endl;
		}
		cn.cerrar_conexion();
	}

	void borrar_empleado() {
		int q_estado;
		ConexionBD cn = ConexionBD();
		cn.abrir_conexion();
		string p = to_string(id_empleado);
		if (cn.getConectar()) {
			string  borrar =
				"delete from empleados  where ID_EMPLEADO= " + p + "";
			const char* i = borrar.c_str();
			q_estado = mysql_query(cn.getConectar(), i);
			if (!q_estado) {
				cout << "Eliminacion Exitosa ..." << endl;
			}
			else {
				cout << " xxx Error al Ingresar  xxx" << endl;
			}
		}
		else {
			cout << " xxx Error en la Conexion xxxx" << endl;
		}
		cn.cerrar_conexion();
	}
};

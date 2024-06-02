#pragma once
#include "Persona.h"
#include <iostream>
#include <string>
#include "ConexionDB.h"
#include <mysql.h>

using namespace std;

class Clientes : Persona {

private: string nombre, apellido, genero, correo_electronico, fecha_ingreso;
	   int id_cliente, NIT, telefono;

public:
	Clientes() {

	}
	Clientes(int id, string nom, string ape, int NIT, string gen, int tel, string correo, string fi) {
		id_cliente = id;
		nombre = nom;
		apellido = ape;
		NIT = NIT;
		genero = gen;
		telefono = tel;
		correo_electronico = correo;
		fecha_ingreso = fi;
	}
	void setnombre(string nom) {
		nombre = nom;
	}
	void setapellido(string ape) {
		apellido = ape;
	}
	void setNIT(int NIT) {
		NIT = NIT;
	}
	void setgenero(string gen) {
		genero = gen;
	}
	void settelefono(int tel) {
		telefono = tel;
	}
	void setcorreoelectronico(string correo) {
		correo_electronico = correo;
	}
	void setfechaingreso(string fi) {
		fecha_ingreso = fi;
	}
	
	int getidcliente() { return id_cliente; }
	string getnombre() { return nombre; }
	string getapellido() { return apellido; }
	int getNIT() { return NIT; }
	string getgenero() { return genero; }
	int gettelefono() { return telefono; }
	string getcorreoelectronico() { return correo_electronico; }
	string getfechaingreso() { return fecha_ingreso; }

	void crear_cliente() {
		int q_estado;
		ConexionBD cn = ConexionBD();
		MYSQL_ROW fila;
		MYSQL_RES* resultados;
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string t = to_string(telefono);
			string n = to_string(NIT);
			string d = to_string(id_cliente);
			string insert = "INSERT INTO clientes (NOMBRES, APELLIDOS, NIT, GENERO, TELEFONO, CORREO_ELECTRONICO, FECHA_INGRESO)VALUES('"+nombre+"','"+apellido+"','"+n+"','"+genero+"','"+t+"','"+correo_electronico+"','"+fecha_ingreso+"');";
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
	void leer_cliente() {
		int q_estado;
		ConexionBD cn = ConexionBD();
		MYSQL_ROW fila;
		MYSQL_RES* resultados;
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string consulta = "select * from clientes;";
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getConectar(), c);
			if (!q_estado) {
				resultados = mysql_store_result(cn.getConectar());
				cout << " -------------Clientes--------------" << endl;
				cout << "" << "|" << "ID_CLIENTE" << "|" << "NOMBRES" << "   |   " << "APELLIDOS" << "   |     " << "NIT" << "    |    " << "GENERO" << "  |     " << "TELEFONO" << "      |  " << "CORREO_ELECTRONICO" << "|" << "FECHA_INGRESO" << endl;
				while (fila = mysql_fetch_row(resultados)) {
					cout << "|" << fila[0] << "         |" << fila[1] << "      |" << fila[2] << "       |   " << fila[3] << "    |   " << fila[4] << "    |   " << fila[5] << "   | " << fila[6] << "   |          " << fila[7] << endl;
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
	void actualizar_cliente() {

		int q_estado;
		ConexionBD cn = ConexionBD();
		cn.abrir_conexion();
		string t = to_string(telefono);
		string n = to_string(NIT);
		string ii = to_string(id_cliente);
		if (cn.getConectar()) {
			string  actualizar = "update clientes set nombres='"+nombre+"',apellidos='"+apellido+"',NIT='"+n+"', GENERO = '"+genero+"', telefono='"+t+"', CORREO_ELECTRONICO='"+correo_electronico+"',fecha_ingreso='"+fecha_ingreso+"' where id_cliente ="+ii+"";
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

	void borrar_cliente() {
		int q_estado;
		ConexionBD cn = ConexionBD();
		cn.abrir_conexion();
		string d = to_string(id_cliente);
		if (cn.getConectar()) {
			string  borrar =
				"delete from clientes where ID_CLIENTE= " +d+ "";
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

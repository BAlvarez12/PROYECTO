#pragma once
#include <iostream>
#include <string>
#include "ConexionDB.h"
#include <mysql.h>

using namespace std;


class Puesto {

private: string puesto;
	   int id_puesto;



public:
	Puesto() {
	}
	Puesto(string pues, int id) {
		id_puesto = id;
		puesto = pues;
	}
	void setidpuesto(int id) {
		id_puesto = id;

		int q_estado;
		ConexionBD bd = ConexionBD();
		MYSQL_ROW fila;
		MYSQL_RES* resultados;
		bd.abrir_conexion();
		if (bd.getConectar()) {
			string p = to_string(id_puesto);
			string insert = "INSERT INTO puestos (puesto)VALUES('" +puesto+ "');";
			const char* i = insert.c_str();
			q_estado = mysql_query(bd.getConectar(), i);
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
		bd.cerrar_conexion();
	}
	void leer_puesto() {
		int q_estado;
		ConexionBD bd = ConexionBD();
		MYSQL_ROW fila;
		MYSQL_RES* resultados;
		bd.abrir_conexion();
		if (bd.getConectar()) {
			string consulta = "select * from puestos; ";
			const char* c = consulta.c_str();
			q_estado = mysql_query(bd.getConectar(), c);
			if (!q_estado) {
				resultados = mysql_store_result(bd.getConectar());
				cout << " -------------Puestos--------------" << endl;
				cout << "" << "|" << "ID_PUESTO" << "|" << "PUESTO" << endl;
				while (fila = mysql_fetch_row(resultados)) {
					cout <<"|"<< fila[0] << "        |" << fila[1]  << endl;
				}

			}
			else {
				cout << "Error al mostrar los datos" << endl;
			}
		}
		else {
			cout << "---- Error de Conexion ----" << endl;
		}
		bd.cerrar_conexion();

	}
	void actualizar_puesto() {

		int q_estado;
		ConexionBD bd = ConexionBD();
		bd.abrir_conexion();
		string ii = to_string(id_puesto);
		if (bd.getConectar()) {
			string  actualizar = "update puestos set puesto='"+puesto+"' where id_puesto = " +ii+ "";
			const char* i = actualizar.c_str();
			q_estado = mysql_query(bd.getConectar(), i);
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
		bd.cerrar_conexion();
	}

	void borrar_puesto() {
		int q_estado;
		ConexionBD bd = ConexionBD();
		bd.abrir_conexion();
		string p = to_string(id_puesto);
		if (bd.getConectar()) {
			string  borrar =
				"delete from puestos  where ID_PUESTO= "+p+"";
			const char* i = borrar.c_str();
			q_estado = mysql_query(bd.getConectar(), i);
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
		bd.cerrar_conexion();
	}
};

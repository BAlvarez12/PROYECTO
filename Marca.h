#pragma once
#include <iostream>
#include <string>
#include "ConexionDB.h"
#include <mysql.h>

using namespace std;


class Marca {

private: string marca;
	   int id_marca;



public:
	Marca() {
	}
	Marca(string mar, int id) {
		id_marca = id;
		marca = mar;
	}
	void setidmarca(int id) {
		id_marca = id;
	}
	void setmarca(string mar) {
		marca = mar;
	}

	int getidmarca() { return id_marca; }
	string getmarca() { return marca; }

	void crear_marca() {
		int q_estado;
		ConexionBD bd = ConexionBD();
		MYSQL_ROW fila;
		MYSQL_RES* resultados;
		bd.abrir_conexion();
		if (bd.getConectar()) {
			string p = to_string(id_marca);
			string insert = "INSERT INTO marcas (marca)VALUES('"+marca+"');";
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
	void leer_marca() {
		int q_estado;
		ConexionBD bd = ConexionBD();
		MYSQL_ROW fila;
		MYSQL_RES* resultados;
		bd.abrir_conexion();
		if (bd.getConectar()) {
			string consulta = "select * from marcas; ";
			const char* c = consulta.c_str();
			q_estado = mysql_query(bd.getConectar(), c);
			if (!q_estado) {
				resultados = mysql_store_result(bd.getConectar());
				cout << " -------------MARCAS--------------" << endl;
				cout << "" << "|" << "ID_MARCA" << "|" << "MARCA" << endl;
				while (fila = mysql_fetch_row(resultados)) {
					cout << "|" << fila[0] << "        |" << fila[1] << endl;
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
	void actualizar_marca() {

		int q_estado;
		ConexionBD bd = ConexionBD();
		bd.abrir_conexion();
		string ii = to_string(id_marca);
		if (bd.getConectar()) {
			string  actualizar = "update marcas set marca='"+marca+"' where id_marca = " + ii + "";
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

	void borrar_marca() {
		int q_estado;
		ConexionBD bd = ConexionBD();
		bd.abrir_conexion();
		string p = to_string(id_marca);
		if (bd.getConectar()) {
			string  borrar =
				"delete from marcas  where ID_MARCA= " + p + "";
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


#pragma once
#include <iostream>
#include <string>
#include "ConexionDB.h"
#include <mysql.h>

using namespace std;

class Proveedores {

private: string proveedor, direccion;
	   int id_proveedor, NIT, telefono;

public:
	Proveedores () {

	}
	Proveedores (int id, string prov, int N, string dir, int tel) {
		id_proveedor = id;
		proveedor = prov;
		NIT = N;
		direccion = dir;
		telefono = tel;
	}
	void setidproveedor(int id) {
		id_proveedor = id;
	}
	void setproveedor(string prov) {
		proveedor = prov;
	}
	void setNIT(int N) {
		NIT = N;
	}
	void setdireccion(string dir) {
		direccion = dir;
	}
	void settelefono(int tel) {
		telefono = tel;
	}
	void crear_proveedor() {
		int q_estado;
		ConexionBD cn = ConexionBD();
		MYSQL_ROW fila;
		MYSQL_RES* resultados;
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string t = to_string(telefono);
			string n = to_string(NIT);
			string p = to_string(id_proveedor);
			string insert = "INSERT INTO proveedores (PROVEEDOR,NIT,DIRECCION,TELEFONO)VALUES('"+proveedor+"','"+n+"','"+direccion+"','"+t+"');";
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
	void leer_proveedor() {
		int q_estado;
		ConexionBD cn = ConexionBD();
		MYSQL_ROW fila;
		MYSQL_RES* resultados;
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string consulta = "select * from proveedores;";
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getConectar(), c);
			if (!q_estado) {
				resultados = mysql_store_result(cn.getConectar());
				cout << " -------------Proveedores--------------" << endl;
				cout << "" << "|" << "ID_PROVEEDOR" << "|" << "PROVEEDOR" << "   |   " << "NIT" << "   |     " << "DIRECCION" << "    |    " << "TELEFONO" << endl;
				while (fila = mysql_fetch_row(resultados)) {
					cout << "|" << fila[0] << "         |" << fila[1] << "      |" << fila[2] << "       |   " << fila[3] << "    |   " << fila[4] << endl;
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
	void actualizar_proveedor() {

		int q_estado;
		ConexionBD cn = ConexionBD();
		cn.abrir_conexion();
		string t = to_string(telefono);
		string n = to_string(NIT);
		string ii = to_string(id_proveedor);
		if (cn.getConectar()) {
			string  actualizar = "update PROVEEDORES set proveedor='"+proveedor+"',NIT='"+n+"',direccion='"+direccion+"',telefono='"+t+"' where id_cliente="+ii+"";
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

	void borrar_proveedor() {
		int q_estado;
		ConexionBD cn = ConexionBD();
		cn.abrir_conexion();
		string p = to_string(id_proveedor);
		if (cn.getConectar()) {
			string  borrar =
				"delete from proveedores where ID_PROVEEDOR= "+p+"";
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

#pragma once
#include <iostream>
#include <string>
#include "ConexionDB.h"
#include <mysql.h>

using namespace std;

class Productos {

private: string producto, descripcion, fecha_ingreso,imagen;
	   int id_producto, id_marca, precio_costo, precio_venta, existencia;

public : 
	Productos() {

	}
	Productos(int id, string prod, int marca, string des, string ima, int costo, int venta, int exis,string fi) {
		id_producto = id;
		producto = prod;
		id_marca = marca;
		descripcion = des;
		imagen = ima;
		precio_costo = costo;
		precio_venta = venta;
		existencia = exis;
		fecha_ingreso = fi;
	}
	void setidproducto(int id) {
		id_producto = id;
	}
	void setproducto(string prod) {
		producto = prod;
	void setpreciocosto(int costo) {
		precio_costo = costo;
	}
	void setprecioventa(int venta) {
		precio_venta = venta;
	}
	void setexistencia(int exis) {
		existencia = exis;
	}
	void setfechaingreso(string fi) {
		fecha_ingreso = fi;
	}

	int getidproducto() { return id_producto; }
	string getproducto() { return producto; }
	int getidmarca() { return id_marca; }
	string getdescripcion() { return descripcion; }
	string getima() { return imagen; }
	int getpreciocosto() { return precio_costo; }
	int getprecioventa() { return precio_venta; }
	int getexistencia() { return existencia; }
	string getfechaingreso() { return fecha_ingreso; }

	void crear_producto() {
		int q_estado;
		ConexionBD cn = ConexionBD();
		MYSQL_ROW fila;
		MYSQL_RES* resultados;
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string p = to_string(id_producto);
			string m = to_string(id_marca);
			string c = to_string(precio_costo);
			string v = to_string(precio_venta);
			string e = to_string(existencia);
			string insert = "INSERT INTO productos (`PRODUCTO`, `ID_MARCA`, `DESCRIPCION`, `IMAGEN`, `PRECIO_COSTO`, `PRECIO_VENTA`, `EXISTENCIA`, `FECHA_INGRESO`) VALUES ('"+producto+"','"+m+"','"+descripcion+"','"+imagen+"','"+c+"','"+v+"','"+e+"','"+fecha_ingreso+"');";
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
	void leer_producto() {
		int q_estado;
		ConexionBD cn = ConexionBD();
		MYSQL_ROW fila;
		MYSQL_RES* resultados;
		cn.abrir_conexion();
		if (cn.getConectar()) {
			string consulta = "SELECT p.ID_PRODUCTO, p.PRODUCTO,m.MARCA,p.DESCRIPCION,p.IMAGEN,p.PRECIO_COSTO,p.PRECIO_VENTA,p.EXISTENCIA, p.FECHA_INGRESO FROM productos p JOIN marcas m ON p.ID_MARCA = m.ID_MARCA order by  ID_PRODUCTO ASC;";
			const char* c = consulta.c_str();
			q_estado = mysql_query(cn.getConectar(), c);
			if (!q_estado) {
				resultados = mysql_store_result(cn.getConectar());
				cout << " -------------PRODUCTOS--------------" << endl;
				cout << "" << "|" << "ID_PRODUCTO" << "|" << "PRODUCTO" << "   |        " << "MARCA" << "   |                          " << "DESCRIPCION" << "                   |    " << "IMAGEN" << "  |     " << "PRECIO_COSTO" << "      |     " << "PRECIO_VENTA" << "|             " << "EXISTENCIA" << "|            " << "FECHA_INGRESO" << endl;
				while (fila = mysql_fetch_row(resultados)) {
					cout << "|   |" << fila[0] << "|     |" << fila[1] << "|      |" << fila[2] << "|         " << fila[3] << "             |" << fila[4] << "             |" << fila[5] << "|                " << fila[6] << "                 |" << fila[7] << "|              |" << fila[8] << endl;
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
	void actualizar_producto() {

		int q_estado;
		ConexionBD cn = ConexionBD();
		cn.abrir_conexion();
		string ii = to_string(id_producto);
		string m = to_string(id_marca);
		string c = to_string(precio_costo);
		string v = to_string(precio_venta);
		string e = to_string(existencia);
		if (cn.getConectar()) {
			string  actualizar = "update productos set producto='"+producto+"',id_marca='"+m+"',descripcion='"+descripcion+"',imagen='"+imagen+"',precio_costo='"+c+"',precio_venta='"+v+"',existencia='"+e+"'where id_producto ="+ii+"";
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

	void borrar_producto() {
		int q_estado;
		ConexionBD cn = ConexionBD();
		cn.abrir_conexion();
		string d = to_string(id_producto);
		if (cn.getConectar()) {
			string  borrar =
				"delete from productos where ID_PRODUCTO= " +d+ "";
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

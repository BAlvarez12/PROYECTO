#pragma once
#include <iostream>
#include "Empleado.h"
#include "Puesto.h"

using namespace std;

int main() {

	string nombre, apellido, direccion, fecha_nacimiento, fecha_inicio_labores, fecha_ingreso, genero;
	int telefono{}, DPI{}, NIT{}, opcion, id_puesto{}, empleado{};

	Empleado c = Empleado(empleado = 0, DPI = 0, NIT = 0, nombre, apellido, direccion, fecha_nacimiento, id_puesto = 0, telefono = 0, genero, fecha_inicio_labores, fecha_ingreso);

	cout << "Que accion desea realizar" << endl;
	cout << "_____________________________" << endl;
	cout << "1.Empleados" << endl;
	cout << "2.Puestos" << endl;
	cout << "3.Actualizar datos de los estudiantes" << endl;
	cout << "4.Borrar estudiantes" << endl;
	cout << "5. salir" << endl;
	cout << "_______________________" << endl;
	cin >> opcion;


	switch (opcion) {
	case 1: {
		int op;
		cout << "_____Iniciando sistema_______" << endl;
		cout << "1. Leer Empleados" << endl;
		cout << "2. Crear Empleados" << endl;
		cout << "3. Actualizar Empleados" << endl;
		cout << "4. Borrar Empleados" << endl;
		cin >> op;
		cin.ignore();
		if (op == 1) {
			c.leer_empleado();
		}
		else
			if (op == 2) {
				int telefono, DPI, id_puesto;
				cout << " Ingrese los nuevos datos del empleado " << endl;

				cout << "Nombre:";
				getline(cin, nombre);
				cout << "Apellido:";
				getline(cin, apellido);
				cout << "Direccion:";
				getline(cin, direccion);
				cout << "Telefono:";
				cin >> telefono;
				cin.ignore();
				cout << "DPI:";
				cin >> DPI;
				cin.ignore();
				cout << "Genero M / F:";
				getline(cin, genero);
				cout << "Fecha Nacimiento:";
				getline(cin, fecha_nacimiento);
				cout << "Puesto:";
				cin >> id_puesto;
				cin.ignore();
				cout << "Fecha Inicio de Labores:";
				getline(cin, fecha_inicio_labores);
				cout << "Fecha Ingreso:";
				getline(cin, fecha_ingreso);

				Empleado c = Empleado(empleado, DPI, NIT, nombre, apellido, direccion, fecha_nacimiento, id_puesto, telefono, genero, fecha_inicio_labores, fecha_ingreso);

				c.crear_empleado();
				c.leer_empleado();
				return 0;
			}
			else
				if (op == 3) {

					c.leer_empleado();
					cout << "_____Iniciando sistema_______" << endl;
					cout << "Ingrese el ID del Empleado a modificar" << endl;
					cin >> empleado;
					cin.ignore();
					cout << " Ingrese los nuevos Datos" << endl;

					cout << "Nombre: ";
					getline(cin, nombre);
					cout << "Apellido: ";
					getline(cin, apellido);
					cout << "Direccion: ";
					getline(cin, direccion);
					cout << "Telefono: ";
					cin >> telefono;
					cin.ignore();
					cout << "DPI: ";
					cin >> DPI;
					cin.ignore();
					cout << "Genero M / F: ";
					getline(cin, genero);
					cout << "Fecha Nacimiento: ";
					getline(cin, fecha_nacimiento);
					cout << "Puesto: ";
					cin >> id_puesto;
					cin.ignore();
					cout << "Fecha Inicio de Labores: ";
					getline(cin, fecha_inicio_labores);
					cout << "Fecha Ingreso: ";
					getline(cin, fecha_ingreso);

					Empleado c = Empleado(empleado, DPI, NIT, nombre, apellido, direccion, fecha_nacimiento, id_puesto, telefono, genero, fecha_inicio_labores, fecha_ingreso);

					c.actualizar_empleado();
					c.leer_empleado();
				}
				else
					if (op == 4) {
						c.leer_empleado();
						cout << "_____Iniciando sistema_______" << endl;
						cout << "Ingrese el ID del Empleado a Borrar" << endl;
						cin >> empleado;

						Empleado c = Empleado(empleado, DPI, NIT, nombre, apellido, direccion, fecha_nacimiento, id_puesto, telefono, genero, fecha_inicio_labores, fecha_ingreso);
						c.borrar_empleado();
						c.leer_empleado();
					}
	}
	case 2: {
		int opc;
		cout << "_____Iniciando sistema_______" << endl;
		cout << "1. Leer Puestos" << endl;
		cout << "2. Crear Puestos" << endl;
		cout << "3. Actualizar Puestos" << endl;
		cout << "4. Borrar Puestos" << endl;
		cin >> opc;
		cin.ignore();
		if (opc == 1) {
			c.leer_empleado();
		}
	}
		  system("pause");
		  return 0;
	}
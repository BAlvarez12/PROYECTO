#include <iostream>
#include "Empleado.h"

using namespace std;

int main() {

	string nombre, apellido, direccion, fecha_nacimiento, fecha_inicio_labores, fecha_ingreso, genero;
	int telefono{}, DPI{}, NIT{}, id_puesto{}, opcion, codigo;

	Empleado c = Empleado(DPI = 0, NIT = 0, nombre, apellido, direccion, fecha_nacimiento, id_puesto = 0, telefono = 0, genero, fecha_inicio_labores, fecha_ingreso);

	cout << "Que accion desea realizar" << endl;
	cout << "_____________________________" << endl;
	cout << "1.Empleado" << endl;
	cout << "2.Puesto" << endl;
	cout << "3.Actualizar datos de los estudiantes" << endl;
	cout << "4.Borrar estudiantes" << endl;
	cout << "5. salir" << endl;
	cout << "_______________________" << endl;
	cin >> opcion;


	switch (opcion) {
	case 1: {
		int op;
		cout << "_____Iniciando sistema_______" << endl;
		cout << "1. Leer Empleadoss" << endl;
		cout << "2. Crear Empleados" << endl;
		cout << "3. Actualizar Empleados" << endl;
		cout << "4. Borrar empleado" << endl;
		cin >> op;
		if (op == 1) {
			c.leer_empleado();
		}
		else
			if (op == 2) {
				int telefono, DPI, id_puesto;
				cout << " Ingrese los nuevos datos del empleado " << endl;

				cout << "Nombre: ";
				getline(cin, nombre);
				cout << "Apellido: ";
				getline(cin, apellido);
				cout << "Direccion";
				getline(cin, direccion);
				cout << "Telefono";
				cin >> telefono;
			else
				if (op == 3) {
					c.actualizar_empleado();
				}
				else
					if (op == 4) {
						c.borrar_empleado();
					}

	}
	}
	system("pause");
	return 0;
}

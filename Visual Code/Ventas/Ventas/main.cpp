#include <iostream>
#include "Empleado.h"
#include "Puesto.h"
#include "Clientes.h"
#include "Marca.h"
#include "Productos.h"
#include "Proveedores.h"

using namespace std;

int main() {

	string nombre, apellido, direccion, fecha_nacimiento, fecha_inicio_labores, fecha_ingreso, genero, puesto, correo_electronico, marca, producto, descripcion, imagen,proveedor;
	int telefono{}, DPI{}, NIT{}, opcion, id_puesto{}, id_empleado{}, id_cliente{}, id_marca{}, id_producto{}, precio_costo{}, precio_venta{}, existencia{}, id_proveedor{};

	Empleado c = Empleado(id_empleado = 0, DPI = 0, NIT = 0, nombre, apellido, direccion, fecha_nacimiento, id_puesto = 0, telefono = 0, genero, fecha_inicio_labores, fecha_ingreso);

	Puesto p = Puesto(puesto, id_puesto);

	Clientes l = Clientes(id_cliente, nombre, apellido, NIT, genero, telefono, correo_electronico, fecha_ingreso);

	Marca x = Marca(marca, id_marca);

	Productos u = Productos(id_producto=0, producto, id_marca, descripcion, imagen, precio_costo=0, precio_venta=0, existencia=0, fecha_ingreso);

	Proveedores e = Proveedores(id_proveedor, proveedor, NIT, direccion, telefono);

	cout << "Que accion desea realizar" << endl;
	cout << "_____________________________" << endl;
	cout << "1.Empleados" << endl;
	cout << "2.Puestos" << endl;
	cout << "3.Clientes" << endl;
	cout << "4.Marcas" << endl;
	cout << "5.Productos" << endl;
	cout << "6.Proveedores" << endl;
	cout << "_______________________" << endl;
	cin >> opcion;

	switch (opcion) {
	case 1: {  // INICIO DE CASE 1 EMPLEADOS...
		int op;
		cout << "_____Iniciando sistema_______" << endl;
		cout << "1. Leer Empleadoss" << endl;
		cout << "2. Crear Empleados" << endl;
		cout << "3. Actualizar Empleados" << endl;
		cout << "4. Borrar empleado" << endl;
		cin >> op;
		cin.ignore();
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

				Empleado c = Empleado(id_empleado, DPI, NIT, nombre, apellido, direccion, fecha_nacimiento, id_puesto, telefono, genero, fecha_inicio_labores, fecha_ingreso);

				c.crear_empleado();
				c.leer_empleado();
				return 0;
			}
			else
				if (op == 3) {
					int telefono, DPI, id_puesto;
					c.leer_empleado();
					cout << "_____Iniciando sistema_______" << endl;
					cout << "Ingrese el ID del Empleado a modificar" << endl;
					cin >> id_empleado;
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

					Empleado c = Empleado(id_empleado, DPI, NIT, nombre, apellido, direccion, fecha_nacimiento, id_puesto, telefono, genero, fecha_inicio_labores, fecha_ingreso);

					c.actualizar_empleado();
					c.leer_empleado();

				}
				else
					if (op == 4) {
						c.leer_empleado();
						cout << "_____Iniciando sistema_______" << endl;
						cout << "Ingrese el ID del Empleado a Borrar" << endl;
						cin >> id_empleado;

						Empleado c = Empleado(id_empleado, DPI, NIT, nombre, apellido, direccion, fecha_nacimiento, id_puesto, telefono, genero, fecha_inicio_labores, fecha_ingreso);
						c.borrar_empleado();
						c.leer_empleado();
					} // FIN CASE 1 
	}
	case 2: { // INICIO DE CASE 2 PUESTOS
		int opc;
		cout << "_____Iniciando sistema_______" << endl;
		cout << "1. Leer Puestos" << endl;
		cout << "2. Crear Puestos" << endl;
		cout << "3. Actualizar Puestos" << endl;
		cout << "4. Borrar Puestos" << endl;
		cin >> opc;
		cin.ignore();
		if (opc == 1) {
			p.leer_puesto();
		}
		else
			if (opc == 2) {
				cout << "_____Iniciando Sistema_____" << endl;
				cout << "Ingrese el nuevo puesto: ";
				cin >> puesto;
				Puesto p = Puesto(puesto, id_puesto);
				p.crear_puesto();
				p.leer_puesto();
			}
			else
				if (opc == 3) {
					p.leer_puesto();
					cout << "_____Iniciando Sistema_____" << endl;
					cout << "Ingrese el ID de Puesto para Modificar: ";
					cin >> id_puesto;
					cin.ignore();
					cout << "Ingrese el nuevo puesto: ";
					getline(cin, puesto);
					Puesto p = Puesto(puesto, id_puesto);
					p.actualizar_puesto();
					p.leer_puesto();
				}
				else
					if (opc == 4) {
						p.leer_puesto();
						cout << "_____Iniciando Sistema_____" << endl;
						cout << "Ingrese el ID del Puesto a Borrar: ";
						cin >> id_puesto;
						Puesto p = Puesto(puesto, id_puesto);
						p.borrar_puesto();
						p.leer_puesto();

					}// FIN CASE 2
	}
	case 3: { // INICIO DE CASE 3 CLIENTES
		int ops;
		cout << "_____Iniciando sistema_______" << endl;
		cout << "1. Leer Clientes" << endl;
		cout << "2. Crear Clientes" << endl;
		cout << "3. Actualizar Clientes" << endl;
		cout << "4. Borrar Clientes" << endl;
		cin >> ops;
		cin.ignore();

		if (ops == 1) {
			l.leer_cliente();
		}
		else
			if (ops == 2) {
				cout << " Ingrese los datos del Cliente " << endl;

				cout << "Nombre: ";
				getline(cin, nombre);
				cout << "Apellido: ";
				getline(cin, apellido);
				cout << "NIT: ";
				cin >> NIT;
				cin.ignore();
				cout << "Genero M / F: ";
				getline(cin, genero);
				cout << "Telefono: ";
				cin >> telefono;
				cin.ignore();
				cout << "Correo Electronico: ";
				getline(cin, correo_electronico);
				cout << "Fecha Ingreso: ";
				getline(cin, fecha_ingreso);
				Clientes l = Clientes(id_cliente, nombre, apellido, NIT, genero, telefono, correo_electronico, fecha_ingreso);
				l.crear_cliente();
				l.leer_cliente();
			}
			else
				if (ops == 3) {
					l.leer_cliente();
					cout << " Ingrese el ID del Cliente a Modificar: ";
					cin >> id_cliente;
					cin.ignore();
					cout << "Nombre: ";
					getline(cin, nombre);
					cout << "Apellido: ";
					getline(cin, apellido);
					cout << "NIT: ";
					cin >> NIT;
					cin.ignore();
					cout << "Genero M / F: ";
					getline(cin, genero);
					cout << "Telefono: ";
					cin >> telefono;
					cin.ignore();
					cout << "Correo Electronico: ";
					getline(cin, correo_electronico);
					cout << "Fecha Ingreso:";
					getline(cin, fecha_ingreso);
					Clientes l = Clientes(id_cliente, nombre, apellido, NIT, genero, telefono, correo_electronico, fecha_ingreso);
					l.actualizar_cliente();
					l.leer_cliente();

				}
				else
					if (ops == 4) {
						l.leer_cliente();
						cout << "_____Iniciando Sistema_____" << endl;
						cout << "Ingrese el ID del Cliente a Borrar: ";
						cin >> id_cliente;
						Clientes l = Clientes(id_cliente, nombre, apellido, NIT, genero, telefono, correo_electronico, fecha_ingreso);
						l.borrar_cliente();
						l.leer_cliente();
					} // FIN CASE 3
	}
	case 4: { // INICIO CASE 4 MARCAS

		int opa;
		cout << "_____Iniciando sistema_______" << endl;
		cout << "1. Leer Marcas" << endl;
		cout << "2. Crear Marcas" << endl;
		cout << "3. Actualizar Marcas" << endl;
		cout << "4. Borrar Marcas" << endl;
		cin >> opa;
		cin.ignore();
		if (opa == 1) {
			x.leer_marca();
		}
		else
			if (opa == 2) {
				cout << "_____Iniciando Sistema_____" << endl;
				cout << "Ingrese la nueva Marca: ";
				cin >> marca;
				Marca x = Marca(marca, id_marca);
				x.crear_marca();
				x.leer_marca();
			}
			else
				if (opa == 3) {
					x.leer_marca();
					cout << "_____Iniciando Sistema_____" << endl;
					cout << "Ingrese el ID de la Marca para Modificar: ";
					cin >> id_marca;
					cin.ignore();
					cout << "Ingrese la nueva Marca: ";
					getline(cin, marca);
					Marca x = Marca(marca, id_marca);
					x.actualizar_marca();
					x.leer_marca();
				}
				else
					if (opa == 4) {
						x.leer_marca();
						cout << "_____Iniciando Sistema_____" << endl;
						cout << "Ingrese el ID de la Marca a Borrar: ";
						cin >> id_marca;
						Marca x = Marca(marca, id_marca);
						x.borrar_marca();
						x.leer_marca();
					}// FIN CASE 4
	}
	case 5: { // INICIO CASE 5 PRODUCTOS

		int opu;
		cout << "_____Iniciando sistema_______" << endl;
		cout << "1. Leer Productos" << endl;
		cout << "2. Crear Productos" << endl;
		cout << "3. Actualizar Productos" << endl;
		cout << "4. Borrar Productos" << endl;
		cin >> opu;
		cin.ignore();
		if (opu == 1) {
			u.leer_producto();
		}
		else
			if (opu == 2) {
				cout << " Ingrese los datos del Producto" << endl;

				cout << "Producto: ";
				getline(cin, producto);
				x.leer_marca();
				cout << "Marca: ";
				cin >> id_marca;
				cin.ignore();
				cout << "Descripcion: ";
				getline(cin, descripcion);
				cout << "Imagen: ";
				getline(cin, imagen);
				cout << "Precio Costo: ";
				cin >> precio_costo;
				cin.ignore();
				cout << "Precio Venta: ";
				cin >> precio_venta;
				cout << "Existencia: ";
				cin >> existencia;
				cin.ignore();
				cout << "Fecha Ingreso: ";
				getline(cin, fecha_ingreso);

				Productos u = Productos(id_producto, producto, id_marca, descripcion, imagen, precio_costo, precio_venta, existencia, fecha_ingreso);
				u.crear_producto();
				u.leer_producto();
			}
			else
				if (opu == 3) {
					u.leer_producto();
					cout << " Ingrese el ID del Producto a Modificar: ";
					cin >> id_producto;
					cin.ignore();
					cout << "Producto: ";
					getline(cin, producto);
					x.leer_marca();
					cout << "Marca, Ingrese el codigo: ";
					cin >> id_marca;
					cin.ignore();
					cout << "Descripcion: ";
					getline(cin, descripcion);
					cout << "Imagen: ";
					getline(cin, imagen);
					cout << "Precio Costo: ";
					cin >> precio_costo;
					cin.ignore();
					cout << "Precio Venta: ";
					cin >> precio_venta;
					cout << "Existencia: ";
					cin >> existencia;
					cin.ignore();
					cout << "Fecha Ingreso: ";
					getline(cin, fecha_ingreso);

					Productos u = Productos(id_producto, producto, id_marca, descripcion, imagen, precio_costo, precio_venta, existencia, fecha_ingreso);
					u.actualizar_producto();
					u.leer_producto();

				}
				else
					if (opu == 4) {
						u.leer_producto();
						cout << "_____Iniciando Sistema_____" << endl;
						cout << "Ingrese el ID del Producto a Borrar: ";
						cin >> id_producto;
						Productos u = Productos(id_producto, producto, id_marca, descripcion, imagen, precio_costo, precio_venta, existencia, fecha_ingreso);
						u.borrar_producto();
						u.leer_producto();
					}
	}
	case 6: { // INICIO CASE 6 PRODUCTOS

		int ope;
		cout << "_____Iniciando sistema_______" << endl;
		cout << "1. Leer Proveedores" << endl;
		cout << "2. Crear Proveedores" << endl;
		cout << "3. Actualizar Proveedores" << endl;
		cout << "4. Borrar Proveedores" << endl;
		cin >> ope;
		cin.ignore();
		if (ope == 1) {
			e.leer_proveedor();
		}
		else
			if (ope == 2) {
				cout << " Ingrese los datos del Proveedor" << endl;

				cout << "Proveedor: ";
				getline(cin, proveedor);
				cout << "NIT: ";
				cin >> NIT;
				cin.ignore();
				cout << "Direccion: ";
				getline(cin, direccion);
				cout << "telefono: ";
				cin >> telefono;
				Proveedores e = Proveedores(id_proveedor, proveedor, NIT, direccion, telefono);

				e.crear_proveedor();
				e.leer_proveedor();
			}
			else
				if (ope == 3) {
					e.leer_proveedor();

					cout << " Ingrese el ID del Proveedor a Modificar: ";
					cin >> id_proveedor;
					cout << "Proveedor: ";
					getline(cin, proveedor);
					cout << "NIT: ";
					cin >> NIT;
					cin.ignore();
					cout << "Direccion: ";
					getline(cin, direccion);
					cout << "telefono: ";
					cin >> telefono;

					Proveedores e = Proveedores(id_proveedor, proveedor, NIT, direccion, telefono);

					e.actualizar_proveedor();
					e.leer_proveedor();

				}
				else
					if (ope == 4) {
						e.leer_proveedor();
						cout << "_____Iniciando Sistema_____" << endl;
						cout << "Ingrese el ID del Proveedor a Borrar: ";
						cin >> id_proveedor;
						Proveedores e = Proveedores(id_proveedor, proveedor, NIT, direccion, telefono);
						e.borrar_proveedor();
						e.leer_proveedor();
					}
	}
		  system("pause");
		  return 0;
	}
	};

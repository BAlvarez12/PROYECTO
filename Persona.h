#pragma once
#include <iostream>
using namespace std;

class Persona {

protected: string nombre, apellido, direccion, fecha_nacimiento;
		 int telefono;

protected: 
	Persona(){
}
	Persona(string nom, string ape, string dir, string fn, int tel) {
		nombre = nom;
		apellido = ape;
		direccion = dir;
		telefono = tel;

	}

};


#include <iostream>
#include <string>
using namespace std;
#include <fstream>
int main (){
	string nombre,dni,telefono,fecha,correo,direccion;
	char aux;
	ofstream archivo;
	
	archivo.open("Registro de clientes.txt"); // Apertura (creacion)
	cout << "Nombre (X para terminar) :" ;
	cin  >> nombre;
	while ( nombre != "x"){
		// Queda pendiente el Intro anterior ...
		cin.get(aux); // Leemos el Intro
		cout << "DNI: ";
		getline (cin,dni);
		cout << "Telefono: ";
		getline(cin,telefono);
		cout << "Fecha: ";
		getline(cin,fecha);
		cout << "Correo electronico: ";
		getline(cin,correo);
		cout << "Direccion: ";
		getline(cin,direccion);
		// Escribimos los datos en una linea del archivo . . .
		// Con un espacio de separacion entre ellos
		archivo << nombre<<"    "<<dni<<"    "<<telefono<<"    "<<fecha<<"    "<<correo << "    "<<direccion << endl;
		cout << "Nombre (x para terminar) : ";
		cin  >> nombre;
	}
	// Escribamos el centinela fianl . . .
	archivo << "x";
	archivo.close(); // Cierre del archivo
	return 0;	
}
#include "ClienteController.h"

using namespace GestionCinesController;
using namespace System::IO;

ClienteController::ClienteController() {
	this->Existe = Existe;
}

int ClienteController::validarExisteCliente(String^ textBox1, String^ textBox2) {
	array<String^>^ lineas = File::ReadAllLines("Clientes.txt");
	String^ separadores = ";";
	for each (String ^ lineaCliente in lineas) {
		array<String^>^ palabras = lineaCliente->Split(separadores->ToCharArray());
		String^ Nombre = palabras[0];
		String^ contrasenha = palabras[1];
		String^ Apellidos = palabras[2];
		String^ Correo = palabras[3];
		String^ Edad = palabras[4];
		String^ Dni = palabras[5];

		if (textBox1 == Dni && textBox2 == contrasenha) {
			Existe = 1;
		}
		else {
			Existe = 0;

		}
	}
	return Existe;
}

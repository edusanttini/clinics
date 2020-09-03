#include "Paciente.h"

Paciente::Paciente() {
	//Pessoa::getCustomerData();
}

Paciente::Paciente(string injury) {
	this->injuryType = injury;
}

void Paciente::getData() {
	Pessoa::getCustomerData();
	cout << "Digite o tipo de machucado: \n";
	getline(cin, injuryType);
	fflush(stdin);
	//Todo -> Receber atributos restantes referentes ao obj paciente
}

void Paciente::putData() {
	Pessoa::putData();
	cout << "Tipo de comida: " << injuryType<< "\n";
}
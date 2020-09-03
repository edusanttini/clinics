#include "Paciente.h"

Paciente::Paciente() {
	//Pessoa::getCustomerData();
}

Paciente::Paciente(string injury) {
	this->injuryType = injury;
}

void Paciente::makeUserRegistration() {
	cout << "\n\t\t----- Seja bem vindo, paciente -----\n";
	Pessoa::getData();
	cout << "Digite o tipo de machucado: \n";
	getline(cin, injuryType);
	fflush(stdin);
	//Todo -> Receber atributos restantes referentes ao obj paciente
}

void Paciente::printUserData() {
	Pessoa::putData();
	cout << "Tipo de comida: " << injuryType<< "\n";
}

void Paciente::makeAnAppointment() {
	system("cls");
	//Pessoa::getName();
	cout << "\n\t\t----- bem vindo ao sistema de agendamento -----\n\n";
	cout << "Especialidades da Clinics: \n";
	system("pause");

}
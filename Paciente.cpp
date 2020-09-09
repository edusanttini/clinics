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
	cout << "Digite o CPF:" << endl;
    getline(cin, cpf);
	cout << "Digite o sintoma: \n";
	getline(cin, injuryType);
	system("CLS");
	//Todo -> Receber atributos restantes referentes ao obj paciente
}

void Paciente::printUserData() {
    cout << "----------------------------------------" << endl;
    cout << "Dados do Paciente:";
	Pessoa::putData();
	cout << "CPF:" << cpf << endl;
	cout << "Sintoma relatado: " << injuryType << endl << endl;

}

void Paciente::makeAnAppointment() {
	system("cls");
	//Pessoa::getName();
	cout << "\n\t\t----- Bem vindo ao sistema de agendamento -----\n\n";
	cout << "Especialidades da Clinics: \n";
	system("pause");

}

void Paciente::vTest(){
	cout << "\toverRide okay!!!!\n";
}

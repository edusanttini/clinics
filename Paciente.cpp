#include "Paciente.h"

Paciente::Paciente() {
	//Pessoa::getCustomerData();
}

Paciente::Paciente(string injury) {
	this->injuryType = injury;
}

void Paciente::makeUserRegistration() {
	cout << "----- Digite os dados do paciente -----\n";
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

void Paciente::vTest(){
    cout << "----------------------------------------" << endl;
    cout << "Dados do Paciente:";
	cout << "\nNome: " << name << endl;
	cout << "Endereco: " << adress << endl;
    cout << "Cidade: " << city << endl;
    cout << "Estado: " << state << endl;
    cout << "CEP: " << CEP << endl;
    cout << "Telefone: " << phone << endl;
	cout << "CPF:" << cpf << endl;
	cout << "Sintoma relatado: " << injuryType << endl << endl;

}

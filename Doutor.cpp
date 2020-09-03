#include "Doutor.h"

Doutor::Doutor() {

}

void Doutor::getDoctorData() {
	cout << "\n\t\t----- Seja bem vindo, doutor -----\n";
	Pessoa::getData();
	cout << "Digite o crm: \n";
	getline(cin, crm);
}

void Doutor::printDoctorData() {
	Pessoa::putData();
	cout << "Crm: " << crm << "\n";
}

string Doutor::getCrm() {
	return crm;
}
#include "Doutor.h"

Doutor::Doutor() {

    }

void Doutor::getData() {
	cout << "\n\t\t----- Seja bem vindo, doutor -----\n";
	Pessoa::getData();
	cout << "Digite o crm: \n";
	getline(cin, crm);
	cout << "Digite a especialidade: \n";
	getline(cin, specialty);
	system("CLS");
}

void Doutor::putData() {
	cout << "----------------------------------------" << endl;
    cout << "Dados do Medico:";
	Pessoa::putData();
	cout << "Crm: " << crm << "\n";
	cout << "Especialidade:" << specialty << endl << endl;

}


string Doutor::getCrm() {

    return crm;
}

#include "Doutor.h"

Doutor::Doutor() {}

void Doutor::getDoctorData() {
	cout << "----- Digite os dados do Medico -----\n";
	Pessoa::getData();
	cout << "Digite o crm: \n";
	getline(cin, crm);
	system("CLS");
}

void Doutor::vPrintData(int isFullData){
    cout << "----------------------------------------" << endl;
    cout << "Dados do Medico:";
	isFullData == 0 ? Pessoa::putData() : Pessoa::putName();
	cout << "Crm: " << crm << "\n";

}
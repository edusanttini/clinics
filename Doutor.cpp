#include "Doutor.h"

Doutor::Doutor() {

    }

void Doutor::getDoctorData() {
	cout << "----- Digite os dados do Medico -----\n";
	Pessoa::getData();
	cout << "Digite o crm: \n";
	getline(cin, crm);
	cout << "Digite a especialidade: \n";
	getline(cin, specialty);
	system("CLS");
}

/*void Doutor::printDoctorData() {
	cout << "----------------------------------------" << endl;
    cout << "Dados do Medico:";
	Pessoa::putData();
	cout << "Crm: " << crm << "\n";
	cout << "Especialidade:" << specialty << endl << endl;

}*/


string Doutor::getCrm() {

    return crm;
}

void Doutor::vPrintData(){
    cout << "----------------------------------------" << endl;
    cout << "Dados do Medico:";
	cout << "\nNome: " << name << endl;
	cout << "Endereco: " << adress << endl;
    cout << "Cidade: " << city << endl;
    cout << "Estado: " << state << endl;
    cout << "CEP: " << CEP << endl;
    cout << "Telefone: " << phone << endl;
	cout << "Crm: " << crm << "\n";
	cout << "Especialidade:" << specialty << endl << endl;

}

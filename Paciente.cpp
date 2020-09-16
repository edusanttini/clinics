#include "Paciente.h"

Paciente::Paciente() {}

Paciente::Paciente(string injury) {
	this->injuryType = injury;
}

void Paciente::makeUserRegistration() {
	cout << "----- Digite os dados do paciente -----\n";
	Pessoa::getData();
	cout << "Digite o CPF:" << endl;
    getline(cin, cpf);
}

void Paciente::vPrintData(int isFullData){
    cout << "----------------------------------------" << endl;
    cout << "Dados do Paciente:";
	isFullData == 0 ? Pessoa::putData() : Pessoa::putName();
	cout << "CPF:" << cpf << endl;
	cout << "Profissional escolhido: ";
	switch (desiredSpecialty){
	case '1': cout << "Alergista\n";	break;
	case '2': cout << "Dentista\n";		break;
	case '3': cout << "Pediatra\n";		break;
	case '4': cout << "Dermatologista\n"; break;
	default : cout << "Opcao invalida, cadastre novamente o paciente\n"; break;
	}
	cout << "Sintoma relatado: " << injuryType << endl << endl;
}

int Paciente::getDesiredSpecialty() {
	return desiredSpecialty;
}

void Paciente::getPacientPain() {
	system("CLS");
	cout << "\t\t------- Sintomas -------\n";
	cout << "A DocSystem possui doutores especializados nas seguintes areas: \n";
	cout << "\nAlergista\tDentista\tPediatra\tDermatologista\n\n";
	cout << "Digite 1 para marcar com um Alergista\n"
			"Digite 2 para marcar com um Dentista\n"
			"Digite 3 para marcar com um Pediatra\n"
			"Digite 4 para marcar com um Dermatologista\n";
	cin >> desiredSpecialty;
	cin.ignore();
	cout << "Digite o sintoma: \n";
	getline(cin, injuryType);
	system("CLS");
}

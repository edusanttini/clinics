#include "Pessoa.h"
using namespace std;

Pessoa::Pessoa() {

}

void Pessoa::getCustomerData() {
	cout << "Digite o nome do Paciente para cadastro: \n";
	cin.ignore();
	//getchar();
	getline(cin, name);
	
	//ToDo -> *Receber atributos restantes referentes ao objeto pessoa
}

void Pessoa::putData() {
	cout << "\nRestaurante: " << name << "\n";
}
#include "Pessoa.h"
using namespace std;

Pessoa::Pessoa() {

}

void Pessoa::getData() {
	cout << "Digite o nome para cadastro: \n";
	cin.ignore();
	//getchar();
	getline(cin, name);
	
	//ToDo -> *Receber atributos restantes referentes ao objeto pessoa
}

string Pessoa::getName() {
	return name;
}

void Pessoa::vTest(){
	cout << "---------OVERrIDE NOToKAY--------";
};

void Pessoa::putData() {
	cout << "\nNome: " << name << "\n";
}
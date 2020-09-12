#include "Pessoa.h"
using namespace std;

Pessoa::Pessoa() {

}

void Pessoa::getData() {
    cin.ignore();
    cout << "Digite o nome para cadastro: \n";
    fflush(stdin);
	getline(cin, name);
	cout << "Digite o endereco:" << endl;
    getline(cin, adress);
    cout << "Digite a cidade:" << endl;
    getline(cin, city);
    cout << "Digite o estado:" << endl;
    getline(cin, state);
    cout << "Digite o CEP:" << endl;
    getline(cin, CEP);
    cout << "Digite o telefone:" << endl;
    getline(cin, phone);
}

string Pessoa::getName() {
	return name;
}

void Pessoa::vPrintData(){
	//cout << "---------OVERrIDE NOToKAY--------";
};

void Pessoa::putData() {
	cout << "\nNome: " << name << endl;
	cout << "Endereco: " << adress << endl;
    cout << "Cidade: " << city << endl;
    cout << "Estado: " << state << endl;
    cout << "CEP: " << CEP << endl;
    cout << "Telefone: " << phone << endl;
}

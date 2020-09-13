#include "Boleto.h"

Boleto::Boleto(){
	valorTotal = 0;
	consulta = 0;
	exame = 0;
	desconto = 0;
	parcela = 1;
    valorParcial = 0;
}

void Boleto::setPrice(int price) {
    this->consulta = price;
}

void Boleto:: getdata(){
    cout << "------ Bem vinda ao Sistema de Geracao de Boleto ------\n\n";
    cout << "Forneca as informacoes solicitadas\n\n";
    cout << "Foram realizados exames? Se sim, digite o valor: " << endl;
    cin >> exame;
    cout << "Foi dado desconto? Se sim, digite o valor: \n";
	cin >> desconto;
	cout << "Caso deseje parcelar o boleto, escolha o numero de parcelas: " << endl;
	cin >> parcela;
}

void Boleto::putdata(Boleto x) {
    system("CLS");
    system("color 1F");
    cout << "----------- Dados do Boleto -----------\n\n"
        "Consulta com o ";
    switch (consulta) {
    case 150: cout << "Alergista:\t R$150,00\n";	 break;
    case 100: cout << "Dentista:\t R$100,00\n";		 break;
    case 200: cout << "Pediatra:\t R$200,00\n";		 break;
    case 300: cout << "Dermatologista:   R$300,00\n";break;
    default: cout << "Opcao invalida\n";             break;
    }
    cout << "Valor dos exames: \t\t R$" << x.exame << ",00\n";
    cout << "Valor do desconto em % = \t " << x.desconto << endl;
    cout << "Quantidade de parcelas:  \t " << x.parcela << endl;
    if (x.parcela < 2)
        cout << "Valor total do boleto: \t\t R$" << x.valorTotal << "\n\n";
    else
        cout << "Valor por parcela: \t\t R$" << x.valorParcial <<
        "\nValor total: \t\t\t R$" << x.valorTotal << "\n\n";
}

Boleto Boleto::operator + (Boleto x){
	x.valorTotal = x.consulta + x.exame;
    return x;
}

Boleto Boleto::operator - (Boleto x){
	x.valorTotal = x.valorTotal - x.valorTotal*(x.desconto/100);
    return x;
}

Boleto Boleto:: operator / (Boleto X){
	X.valorParcial = X.valorTotal/X.parcela;    
    return X;
}










#include "Boleto.h"

Boleto::Boleto(){

	valortotal = 0;
	consulta = 0;
	exame = 0;
	desconto = 0;
	parcela = 1;


}
void Boleto:: getconsulta(){



    cout << "------ Bem vinda ao Sistema de Geracao de Boleto ------" << endl << endl;
    cout << "Forneca as informacoes solicitadas" << endl << endl;
    cout << "Digite o valor da consulta: " << endl;
    cin >> consulta;

}

void Boleto:: getdata(){

    cout << "Digite o valor total dos exames, caso tenha sido realizado: " << endl;
    cin >> exame;
	cout << "Digite a porcentagem do desconto do valor total, caso o doutor tenha permitido: " << endl;
	cin >> desconto;
	cout << "Caso deseje parcelar o boleto escolha o numero de parcelas:" << endl;
	cin >> parcela;



}


void Boleto::putdata(){

    system("CLS");
    cout << "-----------Dados do Boleto-----------" << endl << endl;
    cout << "Valor da consulta = " << consulta << endl;
}



Boleto Boleto::operator + (Boleto X){

	valortotal = consulta + X.exame;
	cout << "Valor dos exames = " << X.exame << endl;

}

Boleto Boleto::operator - (Boleto X){

	valortotal = valortotal - valortotal*(X.desconto/100);
    cout << "Valor do desconto em % = " << X.desconto << endl;
}

Boleto Boleto:: operator / (Boleto X){
    float temp;
    temp = valortotal;
	valortotal = valortotal/X.parcela;
    cout << "Quantidade de parcelas: " << X.parcela << endl;
    if (X.parcela < 2) cout << "Valor total do boleto: " << temp << endl << endl;
    else cout << "Valor total:" << temp << "\nValor das parcelas do boleto: " << valortotal << endl << endl;


}










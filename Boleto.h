#include <iostream>

using namespace std;

class Boleto {

private:
    float valorTotal;
	float valorParcial;
	int consulta;
	float exame;
	float desconto;
	int parcela;

public:
	Boleto();
	void getdata();
	void putdata(Boleto);
	void setPrice(int);
	Boleto operator + (Boleto);
	Boleto operator - (Boleto);
	Boleto operator / (Boleto);
};

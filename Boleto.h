#include <iostream>

using namespace std;

class Boleto {

	private:

    float valortotal;
	float consulta;
	float exame;
	float desconto;
	int parcela;


	public:

		Boleto();
		void getconsulta();
		void getdata();
		void putdata();


		Boleto operator + (Boleto X);
		Boleto operator - (Boleto X);
		Boleto operator / (Boleto X);






};

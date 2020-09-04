#include "Recepcionista.h"
using namespace std;

class Boleto {
private:
	string boletoId;
	Recepcionista recepcionist = Recepcionista("---- 010101 ----");
public:
	void createBoleto();
};
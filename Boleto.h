#pragma once
#include "Recepcionista.h"
using namespace std;

class Boleto : private Recepcionista{

public:
	Boleto();
	string boletoId;
	Recepcionista recepcionist = Recepcionista("---- 010101 ----");
public:
	void createBoleto();
};

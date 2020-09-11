#pragma once
#include <iostream>
#include <istream>
#include <string>
#include "Pessoa.h"
using namespace std;

class Recepcionista : 
	private Pessoa{
private:
	string workerId;
public:
	Recepcionista();
	Recepcionista(string workerId);
	void setWorkerId();
	string getWorkerId();
};
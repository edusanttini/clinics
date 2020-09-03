#pragma once
#include <iostream>
#include <istream>
#include <string>
#include "Paciente.h"

using namespace std;

class Menu{
private:
	int option;
	Paciente paciente;//ToDo -> declarar os atributos restantes referentes ao obj. menu
public:
	Menu();
	void printMenu();
	void executeMenu();
	bool isInputIncorrect();
	int getOption();
	void test();
};
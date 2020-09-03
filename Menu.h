#pragma once
#include <iostream>
#include <istream>
#include <string>
#include "Paciente.h"
#include "Doutor.h"

using namespace std;

class Menu{
private:
	char option;
	Paciente pacient;//ToDo -> declarar os atributos restantes referentes ao obj. menu
	Doutor doc;
public:
	Menu();
	void printMenu();
	void executeMenu();
	bool isInputIncorrect();
	char getOption();
	void test();
};
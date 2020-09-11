#pragma once
#include <iostream>
#include <istream>
#include <string>
#include "Boleto.h"
#include "Appointment.h"


using namespace std;

class Menu{
public:
	Menu();
	char option;
	Boleto boleto;
	Appointment appointment;
	Pessoa *p;
public:
	void printMenu();
	void executeMenu();
	bool isInputCorrect();
	char getOption();
	void test();
	void printSuccessMessage();
};

void logo();


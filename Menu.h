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
	Boleto boleto, consulta;
	Appointment appointment;
	Pessoa* p[2];
	Doutor doc;
	Paciente pacient;

public:
	void printMenu();
	void executeMenu();
	bool isInputCorrect();
	char getOption();
	void test();
	void logo();
	void printSuccessMessage();
	int getSpecialty();
	void setPriceDueToConsult();	
	void calcExamPrice();
};
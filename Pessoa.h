#pragma once
#include <iostream>
#include <istream>
#include <string>
using namespace std;

class Pessoa {
public:
	string name;
	string adress;
    string city;
    string state;
    string CEP;
    string phone;
public:
	Pessoa();
	void getData();
	void putData();
	string getName();
	virtual void vPrintData() = 0;
};

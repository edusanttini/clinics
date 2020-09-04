#pragma once
#include <iostream>
#include <istream>
#include <string>
using namespace std;

class Pessoa {
public:
	string name;//ToDo -> declarar os atributos restantes referentes ao obj. pessoa
public:
	Pessoa();
	void getData();
	void putData();
	string getName();
	virtual void vTest();
};
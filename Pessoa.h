#pragma once
#include <iostream>
#include <istream>
#include <string>
using namespace std;

class Pessoa {
private:
	string name;//ToDo -> declarar os atributos restantes referentes ao obj. pessoa
protected:
	Pessoa();
	void getData();
	void putData();
	string getName();
};
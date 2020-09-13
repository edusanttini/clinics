#pragma once
#include "Pessoa.h"
class Paciente : public Pessoa {

private:
    string injuryType;
    string cpf;
    char desiredSpecialty;

public:
    Paciente();
    Paciente(string);
    void makeUserRegistration();
    void vPrintData();
    int getDesiredSpecialty();
    void getPacientPain();
};

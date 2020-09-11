#pragma once
#include "Pessoa.h"
class Paciente : protected Pessoa {

private:
    string injuryType;
    string cpf;

public:
    Paciente();
    Paciente(string);
    void makeUserRegistration();
    void printUserData();
    void makeAnAppointment();
    void vTest();
};

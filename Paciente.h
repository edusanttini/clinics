#pragma once
#include "Pessoa.h"
class Paciente : protected Pessoa {

private:
    string injuryType;
    string cpf;

public:
    Paciente();
    Paciente(string);
    void getData();
    void putData();
    void makeAnAppointment();
    void vTest();
};

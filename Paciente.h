#pragma once
#include "Pessoa.h"
class Paciente :
    private Pessoa {
private:
    string injuryType;//ToDo -> Declarar os atributos restantes referentes ao obj. paciente
public:
    Paciente();
    Paciente(string);
    void makeUserRegistration();
    void printUserData();
    void makeAnAppointment();
};
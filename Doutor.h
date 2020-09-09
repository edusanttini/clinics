#pragma once
#include "Pessoa.h"
class Doutor :
    private Pessoa{
private:
    string crm, specialty;
public:
    Doutor();
    void getDoctorData();
    void printDoctorData();
    string getCrm();
};


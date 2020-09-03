#pragma once
#include "Pessoa.h"
class Doutor :
    private Pessoa{
private:
    string crm;
public:
    Doutor();
    void getDoctorData();
    void printDoctorData();
    string getCrm();
};


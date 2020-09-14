#pragma once
#include "Pessoa.h"
class Doutor :
    public Pessoa{
private:
    string crm, specialty;
public:
    Doutor();
    void getDoctorData();
    void vPrintData(int);
};


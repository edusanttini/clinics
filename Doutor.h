#pragma once
#include "Pessoa.h"
class Doutor :
    public Pessoa{
private:
    string crm, specialty;
public:
    Doutor();
    void getDoctorData();
    //void printDoctorData();
    string getCrm();
    void vPrintData(int);
};


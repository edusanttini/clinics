#pragma once
#include "Pessoa.h"
class Doutor :
    protected Pessoa{
private:
    string crm, specialty;
public:
    Doutor();
    void getData();
    void putData();
    string getCrm();
};
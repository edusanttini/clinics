#pragma once
#include <iostream>
#include <istream>
#include <string>
#include "Doutor.h"


class Consulta : public Doutor
{
    private:
        string date;


    public:
        Consulta();
        void getdata();
        void putdata();


};

#pragma once
#include <iostream>
#include <istream>
#include <string>
#include "Paciente.h"
#include "Doutor.h"


class Appointment : public Doutor, public Paciente {
private:
    string date;
    string clock;

public:
    void makeAnAppointment();
    void printAppointment();
};



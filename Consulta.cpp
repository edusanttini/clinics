#include "Consulta.h"

Consulta::Consulta()
{
    //ctor
}

void Consulta::getdata(){

    cout << "Digite a data dd/mm/aaaa para agendar a consulta: \n";
	getline (cin, date);

}
void Consulta::putdata(){

    Doutor::printDoctorData();
    cout << "Data: " << date << endl;

}

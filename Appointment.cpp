#include "Appointment.h"


void Appointment::makeAnAppointment() {
	system("cls");
	//Pessoa::getName();
	cin.ignore();
	cout << "\n\t\t----- Bem vindo ao sistema de agendamento -----\n\n";
	fflush(stdin);
	cout << "Digite a data dd/mm/aaaa para agendar a consulta: \n";
	getline (cin, date);
	cout << "Digite o horario hh:mm para agendar a consulta: \n";
	getline (cin, clock);
	system("cls");
}

void Appointment::printAppointment() {
    cout << "----------------------------------------" << endl;
    cout << "Dados do agendamento: " << endl;
    Doutor::printDoctorData();
    Paciente::printUserData();
    cout << "----------------------------------------" << endl;
    cout << "Data: " << date << endl;
    cout << "Horario: " << clock << endl;
}

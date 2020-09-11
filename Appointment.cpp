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
    cout << "\tDados do agendamento: " << endl;
	cout << "----------------------------------------" << endl;
	cout << "Medico: " << Doutor::getName() << endl;
	cout << "Paciente: " << Paciente::getName() << endl;
    cout << "----------------------------------------\n\n";	
	cout << "Sua consulta esta marcada para o dia " << date;
	cout << " as " << clock << "\n\n";
	cout << "Clinics agradece pela sua escolha!\n";
}
#include "Recepcionista.h"
using namespace std;

Recepcionista::Recepcionista() {
	
}

Recepcionista::Recepcionista(string workId) {
	this->workerId = workId;
}

void Recepcionista::setWorkerId(){
	//FYI: id esta sendo setado no construtor
}

string Recepcionista::getWorkerId(){
	return workerId;
}

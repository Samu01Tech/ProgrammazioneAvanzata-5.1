#include <iostream>
#include "Studente.h"

using namespace std;

Studente::Studente(string _nome, string _cognome, int _matricola, int _esami, int _eta):Persona(_nome, _cognome, _eta),matricola(_matricola){
    esami = _esami;
    cout << "✅ Creato Studente\t" << nome << endl;
};
Studente::~Studente(){
    cout << "❌ Distrutto Studente\t" << nome << endl;
};
void Studente::stampa() const{
    cout << "-----" << endl;
    Persona::stampa();
    cout << "Mat:" << matricola << " Ex:" << esami << endl;
    cout << "-----" << endl;
};
ostream& operator <<(ostream& os,const Studente& p){
    return os << p.nome << " " << p.cognome << " " << p.eta << " Mat:" << p.matricola << " Ex:" << p.esami;
};
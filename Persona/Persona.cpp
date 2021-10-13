#include <iostream>
#include "Persona.h"
using namespace std;

Persona::Persona(string _nome, string _cognome, int _eta){
    nome = _nome;
    cognome = _cognome;
    eta = _eta;
    cout << "✅ Creata Persona\t" << nome << endl;
};
Persona::~Persona(){
    cout << "❌ Distrutta Persona\t" << nome << endl;
};
    
ostream& operator <<(ostream& os,const Persona& p){
    return os << p.nome << " " << p.cognome << " " << p.eta;
};

void Persona::stampa() const{
    cout << nome << " " << cognome << " " << eta << endl;
};
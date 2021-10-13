#ifndef __STUDENTE_H__
#define __STUDENTE_H__
#include <iostream>
#include "../Persona/Persona.h"
using namespace std;

class Studente: public Persona{
    private:
    int matricola, esami;
    public:
    Studente(string _nome, string _cognome, int _matricola, int _esami, int _eta=0);//parametro facoltativo ultimo
    ~Studente();
    void stampa() const;
    friend ostream& operator <<(ostream& os,const Studente& p);
};
ostream& operator <<(ostream& os,const Studente& p);
#endif
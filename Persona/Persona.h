#ifndef __PERSONA_H__
#define __PERSONA_H__
#include <iostream>
#include <string>
using namespace std;

class Persona{
    protected:
    string nome;
    string cognome;
    int eta;
    public:
    Persona(string _nome, string _cognome, int _eta=0);
    ~Persona();
    friend ostream& operator <<(ostream& os,const Persona& p);
    void stampa() const;
};
ostream& operator <<(ostream& os,const Persona& p);
#endif
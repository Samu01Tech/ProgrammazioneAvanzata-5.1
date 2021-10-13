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
    virtual ~Persona();
    friend ostream& operator <<(ostream& os,const Persona& p);
    virtual void stampa() const=0;//con =0 obbligo a reimplementare il metodo se eredito
    //una classe con metodo virtual puro (=0) rende la classe abstract
    virtual ostream& stampaoper(ostream& os) const;
};
ostream& operator <<(ostream& os,const Persona& p);
#endif
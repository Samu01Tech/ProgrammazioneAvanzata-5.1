#include <iostream>
//#include "Persona/Persona.h" //già eredito da studente
#include "Studente/Studente.h"
using namespace std;

int main() {
    // Persona p1("TizioN", "TizioC", 22);
    // cout << p1 << endl;
    // p1.stampa();
    // Studente s1("Mario", "Rossi", 25018, 1, 23);
    // cout << s1 << endl;
    // s1.stampa();
    // Persona* pp = NULL;
    // pp = new Persona("Anna", "Verdi");
    // pp->stampa();
    // cout << *pp << endl;
    // delete pp;
    // Studente* ss = NULL;
    // ss = new Studente("Nome", "Cognome", 25018, 2, 18);
    // ss->stampa();
    // cout << *ss << endl;
    // delete ss;
    int scelta = 1;
    Persona* pp;

    if(scelta==1){
        pp = new Studente("Anna", "Verdi", 25018, 2, 18);
    } else {
        //pp = new Docente("Luca", "Rossi", 2)
    }
    pp->stampa();
    cout << *pp << endl;
    delete pp;
    return 0;
}
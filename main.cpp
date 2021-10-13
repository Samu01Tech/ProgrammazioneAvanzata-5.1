#include <iostream>
//#include "Persona/Persona.h" //già eredito da studente
#include "Studente/Studente.h"
using namespace std;

int main() {
    Persona p1("TizioN", "TizioC", 22);
    cout << p1 << endl;
    p1.stampa();
    Studente s1("Mario", "Rossi", 25018, 1, 23);
    cout << s1 << endl;
    s1.stampa();
    return 0;
}
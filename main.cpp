#include <iostream>
#include "Persona.h"
using namespace std;

int main() {
    Persona p1("TizioN", "TizioC", 22);
    cout << p1 << endl;
    p1.stampa();
    return 0;
}
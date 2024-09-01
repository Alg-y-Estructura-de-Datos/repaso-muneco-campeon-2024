#include <iostream>
using namespace std;

void marcarAsiento(bool *asiento) {
    *asiento = true;
}

int main() {
    int numAsientos = 10; 
    bool asientos[numAsientos] = {false}; 

    cout << "Estado inicial de los asientos:" << endl;
    for (int i = 0; i < numAsientos; i++) {
        cout << "\n Asiento " << i + 1 << ": ";
        if (asientos[i]==false) { cout << "Libre";}
    }

    int numeroAsiento;
    cout << "\n Elija un asiento para reservar del 1 al " << numAsientos << ": ";
    cin >> numeroAsiento;

    if (numeroAsiento < 1 || numeroAsiento > numAsientos) {
        cout << "Número de asiento no válido." << endl;
        return 1;
    }

    numeroAsiento= numeroAsiento-1;

    marcarAsiento(&asientos[numeroAsiento]);

    cout << "Estado final de los asientos:" << endl;
    for (int i = 0; i < numAsientos; ++i) {
        cout << "Asiento " << i + 1 << ":" << endl;
        if (asientos[i]==false) { cout << "Libre" << endl;} else {cout << "Reservado" << endl;}
    }

    return 0;
}

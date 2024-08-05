#include <iostream> 
#include <utility>

using namespace std;

void intercambiarJugos(int Manzana, int Naranja){
    return swap(Manzana, Naranja);
}

int main (){
    int Manzana, Naranja;
    cout << "Ingrese la cantidad de jugo de manzana a servir en el vaso 1: " << endl;
    cin >> Manzana;
    cout << "Ingrese la cantidad de jugo de naranja a servir en el vaso 1: " << endl;
    cin >> Naranja;

    intercambiarJugos(Manzana, Naranja);
    
    cout << "Jugo de manzana: " << Manzana << " litros." << endl;
    cout << "Jugo de naranja: " << Naranja << " litros." << endl;
}
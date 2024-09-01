#include <iostream>
#include <math.h>

using namespace std;

//(asiento[i] ? "Reservado" : "Libre")

int sumarEnteros(int num1, int num2){
    return num1+num2;
}

float calcularAreaCirculo(int num1){
    return M_PI*pow(num1, 2);
}

int potenciaNumero(int num1, int num2){
    return pow(num1, num2);
}



int main(){
    int option, num1, num2;
    cout << "Elija entre sumarEnteros, calcularAreaCirculo o potenciaNumero (1, 2 o 3): " << endl;
    cin >> option;

    switch (option)
    {
    case 1:
        cout << "Ingrese un numero cualquiera: " << endl;
        cin >> num1;
        cout << "Ingrese el numero a el cual lo quieres sumar: " << endl;
        cin >> num2;
        cout << "El resultado es: " << sumarEnteros(num1, num2);
        break;
    case 2: 
        cout << "Ingrese el radio de un circulo cualquiera: " << endl;
        cin >> num1;
        cout << "El resultado es: " <<calcularAreaCirculo(num1);
        break;
    case 3:
        cout << "Ingrese un numero cualquiera: " << endl;
        cin >> num1;
        cout << "Ingrese el numero a el cual lo quieres potenciar: " << endl;
        cin >> num2;
        cout << "El resultado es: " << potenciaNumero(num1, num2);
        break;
    default:
        cout << "La opcion ingresada no es correcta." << endl;
        break;
    }



}
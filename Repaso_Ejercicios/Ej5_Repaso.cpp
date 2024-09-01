#include <iostream>
#include <exception>
using namespace std;

class Calculadora {
private:
    double A;
    double B;
public:
    Calculadora(){};
    Calculadora(double a, double b) : A(a), B(b) {};

    void setA (double a){
        A = a;
    }

    void setB (double b){
        B = b;
    }

    double getA(){
        return A;
    }

    double getB(){
        return B;
    }

    double sumar() {
        return A + B;
    }

    double restar() {
        return A - B;
    }

    double multiplicar() {
        return A * B;
    }

    double dividir() {
        if (B == 0) {
            throw runtime_error("Error: Division por cero no permitida.");
            //Error
        }
        return A / B;
    }
    // gets and sets??
};

int main() {
    double a, b;
    cout << "Ingrese el valor de A: ";
    cin >> a;
    cout << "Ingrese el valor de B: ";
    cin >> b;

    Calculadora calc(a, b);

    try {
        cout << "Suma: " << calc.sumar() << endl;
        cout << "Resta: " << calc.restar() << endl;
        cout << "Multiplicacion: " << calc.multiplicar() << endl;
        cout << "Division: " << calc.dividir() << endl;
    } catch (const runtime_error &e) {
        cout << e.what() << endl;
    }

    return 0;
}
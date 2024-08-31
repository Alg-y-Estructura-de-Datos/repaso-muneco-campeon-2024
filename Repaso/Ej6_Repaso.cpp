#include <iostream>
#include <vector>
#include <string>

using namespace std;

//Const es utilizado para que el dato ingresado no sea modificado

// Funcion para agregar un contacto al vector
void agregarContacto(vector<string> &contactos, const string &nombre, const string &numero) {
    // Junta el nombre y el numero del contacto
    string contacto = nombre + ": " + numero;

    // Agrega el contacto al vector
    contactos.push_back(contacto);
}

// Funcion para mostrar todos los contactos
void mostrarContactos(const vector<string> &contactos) {
    if (contactos.empty()) {
        cout << "La lista de contactos esta vacia." << endl;
        // Vector vacio
    } else {
        cout << "Lista de Contactos:" << endl;

        // Itera todos los elementos llamados "contacto" del vector "contactos"
        for (const auto &contacto : contactos) {
            cout << contacto << endl;
        }
    }
}

int main() {
    const vector<string> contactos;
    int opcion;
    
    do {
        cout << "Menu:" << endl;
        cout << "1. Agregar Contacto" << endl;
        cout << "2. Mostrar Contactos" << endl;
        cout << "3. Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1: {
                string nombre;
                string numero;
                cout << "Ingresa el nombre: ";
                cin >> nombre;
                cout << "Ingresa el numero: ";
                cin >> numero;
                agregarContacto(contactos, nombre, numero);
                break;
            }
            case 2:
                mostrarContactos(contactos);
                break;
            case 3:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida. Por favor, intenta de nuevo." << endl;
        }
    } while(opcion != 3);

    return 0;
}

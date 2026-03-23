#include <iostream>
using namespace std;

int main() {
    float a, b;
    int opcion;

    cout << "Ingrese el primer numero: ";
    cin >> a;

    cout << "Ingrese el segundo numero: ";
    cin >> b;

    cout << "\nMENU\n";
    cout << "1. Sumar\n";
    cout << "2. Restar\n";
    cout << "3. Multiplicar\n";
    cout << "4. Dividir\n";
    cout << "Seleccione una opcion: ";
    cin >> opcion;

    switch(opcion) {
        case 1:
            cout << "Resultado: " << a + b << endl;
            break;
        case 2:
            cout << "Resultado: " << a - b << endl;
            break;
        case 3:
            cout << "Resultado: " << a * b << endl;
            break;
        case 4:
            if (b != 0)
                cout << "Resultado: " << a / b << endl;
            else
                cout << "No se puede dividir para cero." << endl;
            break;
        default:
            cout << "Opcion no valida." << endl;
    }

    return 0;
}

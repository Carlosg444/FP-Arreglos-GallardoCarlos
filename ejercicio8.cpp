#include <iostream>
using namespace std;

int main() {
    long long int numero;
    int digitos[10];

    cout << "Ingrese un numero de 10 cifras: ";
    cin >> numero;

    if (numero < 1000000000 || numero > 9999999999) {
        cout << "El numero no tiene exactamente 10 cifras." << endl;
        return 1;
    }

    for (int i = 9; i >= 0; i--) {
        digitos[i] = numero % 10;
        numero /= 10;
    }

    bool esCapicua = true;
    for (int i = 0; i < 5; i++) {
        if (digitos[i] != digitos[9 - i]) {
            esCapicua = false;
            break;
        }
    }

    if (esCapicua) {
        cout << "El numero es capicua." << endl;
    } else {
        cout << "El numero no es capicua." << endl;
    }

    return 0;
}

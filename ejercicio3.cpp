#include <iostream>
using namespace std;
int main() {
    char cadena[100];
    char letra;
    int contador = 0;
    cout << "Ingrese una cadena: ";
    cin.getline(cadena, 100);
    cout << "Ingrese la letra a contar: ";
    cin >> letra;
    for (int i = 0; cadena[i] != '\0'; i++) {
        if (cadena[i] == letra) {
            contador++;
        }
    }
    cout << "La letra '" << letra << "' aparece " << contador << " veces." << endl;
    return 0;
}

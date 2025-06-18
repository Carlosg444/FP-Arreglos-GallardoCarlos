#include <iostream>
#include <cstring>
using namespace std;
void convertirInicialesAMayusculas(char* cadena) {
    bool nuevaPalabra = true;
    for (int i = 0; cadena[i] != '\0'; i++) {
        if (nuevaPalabra && cadena[i] >= 'a' && cadena[i] <= 'z') {
            cadena[i] -= 32; 
            nuevaPalabra = false;
        } else if (cadena[i] == ' ') {
            nuevaPalabra = true;
        }
    }
}
int main() {
    char cadena[100];
    cout << "Ingrese una frase: ";
    cin.getline(cadena, 100);
    convertirInicialesAMayusculas(cadena);
    cout << "Frase con iniciales en mayusculas: " << cadena << endl;
    return 0;
}

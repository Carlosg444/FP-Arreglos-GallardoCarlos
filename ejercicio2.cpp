#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char cadena[100];
    cout << "Ingrese una frase: ";
    cin.getline(cadena, 100);
    char* token = strtok(cadena, " ");
    while (token != NULL) { 
        cout << token << endl;
        token = strtok(NULL, " ");
    }
    return 0;
}

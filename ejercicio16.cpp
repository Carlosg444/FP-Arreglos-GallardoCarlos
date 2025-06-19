#include <iostream> 
#include <cctype>  

using namespace std; 

long long cadenaAEntero(const char strDigitos[]) {
    long long resultado = 0;
    int i = 0;
    while (strDigitos[i] != '\0') {
        resultado = resultado * 10 + (strDigitos[i] - '0'); 
        i++;
    }
    return resultado;
}

int main() {
	
    char linea[256];     
    char soloDigitos[256];
    int indice = 0;       
    long long n;       

    cout << "Ingrese una linea de texto: ";
    cin.getline(linea, 256); // Leer la linea completa

    // Extraer solo los digitos de la linea
    for (int i = 0; linea[i] != '\0'; ++i) {
        if (isdigit(linea[i])) { // Si el caracter es un digito
            soloDigitos[indice] = linea[i];
            indice++;
        }
    }
    soloDigitos[indice] = '\0'; // Terminar la cadena de digitos

    // Convertir la cadena de digitos a un numero entero
    n = cadenaAEntero(soloDigitos); 

    // Imprimir el resultado solicitado
    cout << n << " --> " << n + 2 << endl << endl;

    return 0;
}

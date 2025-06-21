#include <iostream> 
#include <cctype>  

using namespace std; 

int obtenerLongitud(const char cadena[]) {
    int longitud = 0;
    while (cadena[longitud] != '\0') {
        longitud++;
    }
    return longitud;
}

void limpiarYNormalizarCadena(const char original[], char cadenaLimpia[]) {
    int indiceLimpia = 0;
    for (int i = 0; original[i] != '\0'; ++i) {
     
        if (isalpha(original[i])) {
            cadenaLimpia[indiceLimpia] = tolower(original[i]);
            indiceLimpia++;
        }
    }
    cadenaLimpia[indiceLimpia] = '\0'; 
}

bool esPalindromo(const char fraseCompleta[]) {
    char cadenaNormalizada[256];
    limpiarYNormalizarCadena(fraseCompleta, cadenaNormalizada);

    int longitudNormalizada = obtenerLongitud(cadenaNormalizada);
    if (longitudNormalizada <= 1) { 
        return true;
    }

    for (int i = 0; i < longitudNormalizada / 2; ++i) {
        if (cadenaNormalizada[i] != cadenaNormalizada[longitudNormalizada - 1 - i]) {
            return false; 
        }
    }
    return true; 
}

int main() {
 
    char entradaUsuario[256];
    cout << "Ingrese una frase para verificar si es palindromo: ";
    cin.getline(entradaUsuario, 256);

	if (esPalindromo(entradaUsuario)) {
		cout << "Si es palindromo";
	}else {
		cout << "No es palindromo";
	}
	
    return 0;
}

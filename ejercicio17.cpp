#include <iostream> 
#include <cctype>   

using namespace std; 

int obtenerLongitudCadena(const char cadena[]) {
    int longitud = 0;
    while (cadena[longitud] != '\0') {
        longitud++;
    }
    return longitud;
}

void convertirAMinusculas(char cadena[]) {
    for (int i = 0; cadena[i] != '\0'; ++i) {
        cadena[i] = tolower(cadena[i]);
    }
}

bool verificarApellidoEnNombre(char nombreCompleto[], char apellidoBuscado[]) {
 
    char nombreEnMinusculas[256];
    char apellidoEnMinusculas[100];

    int i = 0;
    while (nombreCompleto[i] != '\0') { 
        nombreEnMinusculas[i] = nombreCompleto[i]; 
        i++; 
    }
    nombreEnMinusculas[i] = '\0';

    i = 0;
    while (apellidoBuscado[i] != '\0') { 
        apellidoEnMinusculas[i] = apellidoBuscado[i]; 
        i++; 
    }
    apellidoEnMinusculas[i] = '\0';

    convertirAMinusculas(nombreEnMinusculas);
    convertirAMinusculas(apellidoEnMinusculas);

    int largoNombre = obtenerLongitudCadena(nombreEnMinusculas);
    int largoApellido = obtenerLongitudCadena(apellidoEnMinusculas);

    if (largoApellido == 0) return true; 
    if (largoApellido > largoNombre) return false;

    for (int k = 0; k <= largoNombre - largoApellido; ++k) {
        bool esCoincidencia = true;
        for (int j = 0; j < largoApellido; ++j) {
            if (nombreEnMinusculas[k + j] != apellidoEnMinusculas[j]) {
                esCoincidencia = false;
                break;
            }
        }
        if (esCoincidencia) {
            return true; 
        }
    }
    return false; 
}

int main() {

    char nombrePersona[256];
    char apellidoAEvaluar[100];

    cout << "Ingrese el nombre completo: ";
    cin.getline(nombrePersona, 256);

    cout << "Ingrese el apellido a buscar: ";
    cin.getline(apellidoAEvaluar, 100);

    cout << endl;
    if (verificarApellidoEnNombre(nombrePersona, apellidoAEvaluar)) {
        cout << "El apellido '" << apellidoAEvaluar << "' SI pertenece a la persona." << endl << endl;
    } else {
        cout << "El apellido '" << apellidoAEvaluar << "' NO pertenece a la persona." << endl << endl;
    }

    return 0;
}

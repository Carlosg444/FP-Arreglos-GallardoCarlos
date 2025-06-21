#include <iostream> 

using namespace std;

bool comprobarBalanceoParentesis(const char fraseTexto[]) {
    int contadorParentesis = 0; 
    for (int i = 0; fraseTexto[i] != '\0'; ++i) {
        if (fraseTexto[i] == '(') {
            contadorParentesis++;
        } else if (fraseTexto[i] == ')') {
            contadorParentesis--;
        }

        if (contadorParentesis < 0) {
            return false;
        }
    }

    return contadorParentesis == 0;
}

int main() {

    char entradaUsuario[256];
    cout << "Ingrese una frase para verificar el balanceo: ";
    cin.getline(entradaUsuario, 256); 

	if (comprobarBalanceoParentesis(entradaUsuario)) {
    cout << "Correcto";
	} else {
    cout << "Incorrecto";
}

    return 0;
}

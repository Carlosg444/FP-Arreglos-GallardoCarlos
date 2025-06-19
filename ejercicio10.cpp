#include <iostream> 
#include <cstdlib>  
#include <ctime>    

using namespace std; 


void ordenarArreglo(int arreglo[], int tamanio) {
    for (int i = 0; i < tamanio - 1; ++i) {
        for (int j = i + 1; j < tamanio; ++j) {
            if (arreglo[i] > arreglo[j]) {
                int auxiliar = arreglo[i];
                arreglo[i] = arreglo[j];
                arreglo[j] = auxiliar;
            }
        }
    }
}

int main() {

    const int TAM = 30;
    int numerosAleatorios[TAM]; 

    srand(time(0)); 

    cout << "Generando " << TAM << " numeros aleatorios entre 100 y 1000:" << endl;
    for (int i = 0; i < TAM; ++i) {
        numerosAleatorios[i] = 100 + rand() % 901; 
        cout << numerosAleatorios[i] << " ";
    }
    cout << endl << endl;

    // Media 
    long long sumaNumeros = 0; 
    for (int i = 0; i < TAM; ++i) {
        sumaNumeros += numerosAleatorios[i];
    }
   
    double mediaNumeros = (1.0 * sumaNumeros) / TAM; 
    cout << "Media: " << mediaNumeros << endl;

    // Mediana 
    ordenarArreglo(numerosAleatorios, TAM); 
    double medianaNumeros;
    if (TAM % 2 == 0) { 
        medianaNumeros = (1.0 * (numerosAleatorios[TAM/ 2 - 1] + numerosAleatorios[TAM / 2])) / 2;
    } else { 
        medianaNumeros = numerosAleatorios[TAM / 2];
    }
    cout << "Mediana: " << medianaNumeros << endl;

    // Moda 
    int valorModa = -1; 
    int frecuenciaMaxima = 0;
    
    for (int i = 0; i < TAM; ++i) {
        int frecuenciaActual = 0;
        for (int j = 0; j < TAM; ++j) {
            if (numerosAleatorios[j] == numerosAleatorios[i]) {
                frecuenciaActual++;
            }
        }
        if (frecuenciaActual > frecuenciaMaxima) {
            frecuenciaMaxima = frecuenciaActual;
        }
    }

    bool hayMultiplesValoresConFrecuenciaMaxima = false;
    if (frecuenciaMaxima > 1) { 
        int primerValorModaEncontrado = -1;
        
        for (int i = 0; i < TAM; ++i) {
            int frecuenciaDeEsteNumero = 0;
            for (int j = 0; j < TAM; ++j) {
                if (numerosAleatorios[j] == numerosAleatorios[i]) {
                    frecuenciaDeEsteNumero++;
                }
            }
            if (frecuenciaDeEsteNumero == frecuenciaMaxima) {
                if (primerValorModaEncontrado == -1) { 
                    primerValorModaEncontrado = numerosAleatorios[i];
                    valorModa = numerosAleatorios[i]; 
                } else if (numerosAleatorios[i] != primerValorModaEncontrado) { 
                    hayMultiplesValoresConFrecuenciaMaxima = true;
                    break; 
                }
            }
        }
    }
    
    if (frecuenciaMaxima <= 1 || hayMultiplesValoresConFrecuenciaMaxima) {
        cout << "Moda: No hay moda (todos los elementos son unicos)." << endl;
    } else {
        cout << "Moda: " << valorModa << " (aparece " << frecuenciaMaxima << " veces)" << endl;
    }

    return 0;
}


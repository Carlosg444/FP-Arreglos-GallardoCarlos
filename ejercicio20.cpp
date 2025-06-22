#include <iostream>

using namespace std; 

int main() {

    const int NUM_MESES = 12; 
    double ventas[NUM_MESES];
    
    const char mesesNombres[NUM_MESES][11] = { 
        "Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio",
        "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"
    };

    cout << "Ingrese el monto de las ventas mensuales para el ano 2020:" << endl;
    for (int i = 0; i < NUM_MESES; ++i) {
        cout << "Ventas de " << mesesNombres[i] << ": S/.";
        cin >> ventas[i];
        
        while (ventas[i] < 0) {
            cout << "Error: Las ventas no pueden ser negativas. Ingrese un valor valido para " << mesesNombres[i] << ": S/.";
            cin >> ventas[i];
        }
    }

    double sumaVentas = 0;
    for (int i = 0; i < NUM_MESES; ++i) {
        sumaVentas += ventas[i];
    }
    double promedioVentas = sumaVentas / NUM_MESES; 
    
    cout << "\n--- Resultados del Analisis de Ventas ---" << endl;
    cout << "Valor de la venta mensual promedio: S/." << promedioVentas << endl << endl;

    int contadorMinimo = 0;
    int contadorRegular = 0;
    int contadorExcelente = 0;

    double umbralMinimo = 0.40 * promedioVentas;  
    double umbralRegular = 0.75 * promedioVentas;  

    for (int i = 0; i < NUM_MESES; ++i) {
        if (ventas[i] < umbralMinimo) { 
            contadorMinimo++;
        } else if (ventas[i] <= umbralRegular) { 
            contadorRegular++;
        } else { 
            contadorExcelente++;
        }
    }

    double porcentajeMinimo = (static_cast<double>(contadorMinimo) / NUM_MESES) * 100;
    double porcentajeRegular = (static_cast<double>(contadorRegular) / NUM_MESES) * 100;
    double porcentajeExcelente = (static_cast<double>(contadorExcelente) / NUM_MESES) * 100;

    cout << "Porcentaje de meses por nivel de ventas:" << endl;
    cout << "- Minimo: " << porcentajeMinimo << "%" << endl;
    cout << "- Regular: " << porcentajeRegular << "%" << endl;
    cout << "- Excelente: " << porcentajeExcelente << "%" << endl << endl;

    cout << "Meses con ventas Excelentes:" << endl;
    bool hayMesesExcelentes = false;
    for (int i = 0; i < NUM_MESES; ++i) {
        if (ventas[i] > umbralRegular) { 
            cout << "- " << mesesNombres[i] << endl;
            hayMesesExcelentes = true;
        }
    }
    if (!hayMesesExcelentes) {
        cout << "Ningun mes tuvo ventas Excelentes." << endl;
    }

    return 0;
}

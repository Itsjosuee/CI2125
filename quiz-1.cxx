#include <iostream>
#include <string>

using namespace std;

// ===============================================
// PARTE B: FUNCIÓN ISOMORFA AL CIRCUITO DIGITAL D
// El circuito computa: r = AND( OR(x, y), NOT(AND(y, z)) )
// Los valores de entrada y salida deben ser 0 o 1.
// ===============================================
int isomorfaD(int x, int y, int z) {
    // 1. Compuerta OR: (x || y)
    int or_xy = (x || y); 

    // 2. Compuerta NAND implícita: !(y && z)
    // NOT(AND(y, z))
    int not_and_yz = !(y && z);

    // 3. Compuerta AND final: (or_xy && not_and_yz)
    int r = (or_xy && not_and_yz);

    return r;
}

// ===============================================
// PARTE C: FUNCIÓN my_info
// Imprime información basada en la variable 'mode' (int) y el valor 'b' (bool).
// ===============================================
void my_info(int mode, bool b) {

    // 1. INFORMACIÓN PERSONAL (REEMPLAZAR con tu información)
    const string MI_NOMBRE = "Yeremy Balza";
    const int MI_CARNET = 2310031; 

    // Imprimir el nombre (string) y el carnet (número)
    cout << MI_NOMBRE << " " << MI_CARNET << " "; 

    // 2. LÓGICA DE DECISIÓN CLAVE (mode = 1 vs. mode != 1)

    if (mode == 1) { 
        // CASO mode = 1: Usar palabras en ESPAÑOL
        if (b == true) { 
            cout << "verdadero" << endl; 
        } else { 
            cout << "falso" << endl;     
        }
    } else { 
        // CASO mode != 1: Usar palabras en INGLÉS
        if (b == true) { 
            cout << "true" << endl;      
        } else { 
            cout << "false" << endl;     
        }
    }
}


// Función principal para probar las implementaciones (opcional para el quiz, pero útil)
int main() {

    cout << "--- PRUEBA DE my_info ---" << endl;
    my_info(1, true);   
    my_info(1, false);  
    my_info(0, true);   
    my_info(5, false);  

    cout << "\n--- PRUEBA DE isomorfaD (Circuito) ---" << endl;
    cout << "D(1, 1, 1): " << isomorfaD(1, 1, 1) << " (Esperado: 0)" << endl;
    cout << "D(1, 1, 0): " << isomorfaD(1, 1, 0) << " (Esperado: 1)" << endl;
    cout << "D(0, 0, 0): " << isomorfaD(0, 0, 0) << " (Esperado: 0)" << endl;
    cout << "D(1, 0, 1): " << isomorfaD(1, 0, 1) << " (Esperado: 1)" << endl;

    return 0;
}
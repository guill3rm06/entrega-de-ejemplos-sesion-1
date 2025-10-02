// main.cpp
#include "Persona.hpp"
#include <iostream>
using namespace std;

int main() {
    
    Persona* personas[10];
    
    personas[0] = new Persona(false, 18);  // Hombre, 18 años
    personas[1] = new Persona(true, 19);   // Mujer, 19 años
    personas[2] = new Persona(false, 20);  // Hombre, 20 años
    personas[3] = new Persona(true, 21);   // Mujer, 21 años
    personas[4] = new Persona(false, 22);  // Hombre, 22 años
    personas[5] = new Persona(true, 23);   // Mujer, 23 años
    personas[6] = new Persona(false, 24);  // Hombre, 24 años
    personas[7] = new Persona(true, 25);   // Mujer, 25 años
    personas[8] = new Persona(false, 26);  // Hombre, 26 años
    personas[9] = new Persona(true, 27);   // Mujer, 27 años
    
    // Mostrar todas las personas
    cout << "LISTA DE PERSONAS" << endl;
    for (int i = 0; i < 10; i++) {
        personas[i]->mostrar();
    }
    
    // Liberar memoria
    for (int i = 0; i < 10; i++) {
        delete personas[i];
    }
    
    return 0;
}
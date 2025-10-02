// Persona.cpp
#include "Persona.hpp"
#include <iostream>
#include <cstring>
using namespace std;

// Constructor que recibe género y edad
Persona::Persona(bool g, int e) {
    genero = g;
    edad = e;
    
    // DNI diferentes para cada persona
    const char* dnis[10] = {
        "11111111A", "22222222B", "33333333C", "44444444D", "55555555E",
        "66666666F", "77777777G", "88888888H", "99999999J", "12345678Z"
    };
    
    static int contador = 0;
    strcpy(dni, dnis[contador]);
    contador++;
    if (contador >= 10) contador = 0; // Reiniciar si se crean más de 10
}

Persona::~Persona() {
}

int Persona::getEdad() {
    return edad;
}

bool Persona::esMujer() {
    return genero;
}

void Persona::setEdad(int e) {
    edad = e;
}

void Persona::mostrar() {
    cout << "DNI: " << dni << " | Edad: " << edad << " | ";
    if (genero) {
        cout << "Mujer";
    } else {
        cout << "Hombre";
    }
    cout << endl;
}
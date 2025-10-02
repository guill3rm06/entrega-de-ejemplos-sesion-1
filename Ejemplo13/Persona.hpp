// Persona.hpp
#ifndef PERSONA_HPP
#define PERSONA_HPP

class Persona {
private:
    bool genero;
    int edad;
    char dni[10];

public:
    Persona(bool g, int e);  // Recibe género y edad
    ~Persona();
    int getEdad();
    bool esMujer();
    void setEdad(int e);
    void mostrar();
};

#endif
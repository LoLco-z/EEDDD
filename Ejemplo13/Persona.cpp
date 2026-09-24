#include "persona.hpp"
#include <iostream>
#include <cstdlib>
#include <cstdio>

void Persona::generarDNI() {
    const char letras[] = "TRWAGMYFPDXBNJZSQVHLCKE";
    int numeroDNI = rand() % 90000000 + 10000000;
    char letra = letras[numeroDNI % 23];
    snprintf(dni, sizeof(dni), "%08d%c", numeroDNI, letra);
}

Persona::Persona(int edadInicial) {
    edad = edadInicial;
    genero = rand() % 2;
    generarDNI();
}

Persona::~Persona() {}

int Persona::getEdad() {
    return edad;
}

bool Persona::esMujer() {
    return genero;
}

void Persona::setEdad(int nuevaEdad) {
    edad = nuevaEdad;
}

void Persona::mostrar() {
    std::cout << "DNI: " << dni 
              << " | Género: " << (genero ? "Mujer" : "Hombre")
              << " | Edad: " << edad << " años" << std::endl;
}
#ifndef PERSONA_HPP
#define PERSONA_HPP

class Persona {
private:
    bool genero;
    int edad;
    char dni[10];

    void generarDNI();

public:
    Persona(int edadInicial);
    ~Persona();

    int getEdad();
    bool esMujer();
    void setEdad(int nuevaEdad);
    void mostrar();
};

#endif
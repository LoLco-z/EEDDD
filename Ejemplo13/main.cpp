#include "persona.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>

int main() {
    srand(time(0));

    std::vector<int> edades;
    for (int i = 18; i <= 27; ++i) {
        edades.push_back(i);
    }

    std::random_shuffle(edades.begin(), edades.end());

    Persona* personas[10];
    for (int i = 0; i < 10; ++i) {
        personas[i] = new Persona(edades[i]);
    }

    for (int i = 0; i < 10; ++i) {
        personas[i]->mostrar();
    }

    for (int i = 0; i < 10; ++i) {
        delete personas[i];
    }

    return 0;
}
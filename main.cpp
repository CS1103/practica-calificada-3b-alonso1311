#include"Funciones.h"

int main() {
    auto vectors_Rectangulos = Lectura("rectangulos.in");

    auto temp = Ordenar(vectors_Rectangulos);

    Escritura(temp, "Example.txt");

    return 0;
}

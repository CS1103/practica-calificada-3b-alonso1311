#include"Funciones.h"

int main() {
    //Prueba 1
    auto vectors_Rectangulos = Lectura("rectangulos.in");

    auto temp = Ordenar(vectors_Rectangulos);

    Escritura(temp, "Example.txt");


    //Prueba 2
    auto vectors_Rectangulos_1 = Lectura("rectangulos_1.in");

    auto temp_1 = Ordenar(vectors_Rectangulos_1);

    Escritura(temp_1, "OUT_1.txt");

    //Prueba 3
    auto vectors_Rectangulos_2 = Lectura("rectangulos_2.in");

    auto temp_2 = Ordenar(vectors_Rectangulos_2);

    Escritura(temp_2, "OUT_2.txt");

    //Prueba 4
    auto vectors_Rectangulos_3 = Lectura("rectangulos_3.in");

    auto temp_3 = Ordenar(vectors_Rectangulos_3);

    Escritura(temp_3, "OUT_3.txt");

    return 0;
}

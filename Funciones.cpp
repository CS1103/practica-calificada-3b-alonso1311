#include"Funciones.h"

vector<Rectangulo> Lectura(const string& input) {
    fstream file;
    file.open(input, ios::in);
    vector<Rectangulo> v_rectangulo;
    
    if(file.is_open()) {
        int n_rectangulos, number_filas, number_columnas;
        file >> n_rectangulos >> number_filas >> number_columnas; 

        for(; n_rectangulos > 0; n_rectangulos--) {
            char letra;
            file >> letra;

            if(letra == 'A') {
                Rectangulo rectangulo;
                file >> rectangulo.posicion_x >> rectangulo.posicion_y 
                    >> rectangulo.n_filas >> rectangulo.n_columnas;

                v_rectangulo.push_back(rectangulo);
            }
        }
        file.close();
    }

    else
        cout << "No se abrio el archivo" << endl;

    return v_rectangulo;
}

vector<Rectangulo> Ordenar(vector<Rectangulo> input) {
    auto compare = [](Rectangulo r1, Rectangulo r2) {
        return r1.posicion_x < r2.posicion_x;
        return r1.posicion_y < r2.posicion_y;
        return r1.n_filas < r2.n_filas;
        return r1.n_columnas < r2.n_columnas;
    };

    sort(begin(input), end(input), compare);
   
    return input;
}

void Escritura(vector<Rectangulo> v_rectangulo, const string& file_out_name) {
    ofstream output(file_out_name);

    int rank = 1;
    for(const auto& i : v_rectangulo) {
        output << rank << ") A " << i.posicion_x << " " << i.posicion_y 
            << " " << i.n_filas << " " << i.n_columnas << endl;
        rank++;
    }
}

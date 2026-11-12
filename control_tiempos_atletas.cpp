#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

int main() {
    vector<string> corredores = {"Carlos", "Elena", "Mateo"};

    double tiemposVueltas[3][4] = {
        {1.25, 1.30, 1.28, 1.22},
        {1.18, 1.20, 1.19, 1.15},
        {1.35, 1.40, 1.32, 1.30}
    };

    cout << "=== CONTROL DE TIEMPOS DE ATLETAS (Vectores y Matrices) ===\n\n";

    for (size_t i = 0; i < corredores.size(); i++) {
        cout << "Atleta (desde el Vector): " << corredores[i] << endl;
        cout << "Tiempos de las 4 vueltas (desde la Matriz): ";

        double mejorTiempo = tiemposVueltas[i][0];
        for (int j = 0; j < 4; j++) {
            cout << tiemposVueltas[i][j] << " min  ";
            if (tiemposVueltas[i][j] < mejorTiempo) {
                mejorTiempo = tiemposVueltas[i][j];
            }
        }
        cout << "\nMejor vuelta registrada: " << fixed << setprecision(2) << mejorTiempo << " min";
        cout << "\n----------------------------------------------------\n";
    }

    corredores.push_back("Lucia");
    cout << "\n[Accion en Vector] Se anadio un nuevo corredor al equipo.\n";
    cout << "Total de competidores actuales en el vector: " << corredores.size() << endl;

    return 0;
}

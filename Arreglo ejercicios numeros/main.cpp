#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

bool esPrimo(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;  }

void ordenarDesc(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int ayuda = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = ayuda;
            } } } }

int main() {
    int matriz[10][10];
    int matrizOrdenada[10][10];
    int primos[100];
    int noPrimos[100];
    int countPrimos = 0;
    int countNoPrimos = 0;

    srand(time({}));

    cout << "Matriz aleatoria: " << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            matriz[i][j] = rand() % 101;
            cout << matriz[i][j] << " | ";

            if (esPrimo(matriz[i][j])) {
                primos[countPrimos++] = matriz[i][j];
            } else {
                noPrimos[countNoPrimos++] = matriz[i][j];
            } }
        cout << endl;  }

    ordenarDesc(primos, countPrimos);
    ordenarDesc(noPrimos, countNoPrimos);

    int primos_idx = 0;
    int noPrimos_idx = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (primos_idx < countPrimos) {
                matrizOrdenada[i][j] = primos[primos_idx];
                primos_idx++;
            } 
  
            else if (noPrimos_idx < countNoPrimos) {
                matrizOrdenada[i][j] = noPrimos[noPrimos_idx];
                noPrimos_idx++;
            } } }

    cout << endl << "Nueva Matriz : " << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            std::cout << matrizOrdenada[i][j] << " | ";  }
        std::cout << endl;  }

    return 0;
}

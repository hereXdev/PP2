#include <iostream>
using namespace std;

int main() {
    int n = 10;

    // 1. Alokacja pamięci
    int* tab = new int[n];

    // 2. Wprowadzanie danychf
    cout << "Podaj 10 liczb:\n";
    for (int i = 0; i < n; i++) {
        cin >> tab[i];
    }

    // 3. Wyświetlanie
    cout << "Tablica:\n";
    for (int i = 0; i < n; i++) {
        cout << tab[i] << " ";
    }
    cout << endl;

    // 4. Zwolnienie pamięci
    delete[] tab;

    return 0;
}
#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

//////////////////////////////////////////////////////////
//////////////////// ZADANIE 1.1 /////////////////////////
//// Sprawdzenie czy liczba jest dodatnia / ujemna ///////
//////////////////////////////////////////////////////////

void zadanie_1_1() {

    int liczba;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    if (liczba > 0)
        cout << "Liczba dodatnia\n";
    else if (liczba < 0)
        cout << "Liczba ujemna\n";
    else
        cout << "Liczba rowna zero\n";
}

//////////////////////////////////////////////////////////
//////////////////// ZADANIE 1.2 /////////////////////////
/////////////// Sprawdzenie roku przestepnego ////////////
//////////////////////////////////////////////////////////

void zadanie_1_2() {

    int rok;

    cout << "Podaj rok: ";
    cin >> rok;

    if ((rok % 4 == 0 && rok % 100 != 0) || rok % 400 == 0)
        cout << "Rok przestepny\n";
    else
        cout << "Rok nie jest przestepny\n";
}

//////////////////////////////////////////////////////////
//////////////////// ZADANIE 1.3 /////////////////////////
//////////////// Sprawdzenie parzystosci //////////////////
//////////////////////////////////////////////////////////

void zadanie_1_3() {

    int liczba;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    if (liczba % 2 == 0)
        cout << "Parzysta\n";
    else
        cout << "Nieparzysta\n";
}

//////////////////////////////////////////////////////////
//////////////////// ZADANIE 2.1 /////////////////////////
/////////////// Liczby podzielne przez 3 i 5 //////////////
//////////////////////////////////////////////////////////

void zadanie_2_1() {

    for (int i = 1;i <= 100;i++) {

        if (i % 3 == 0 && i % 5 == 0)
            cout << i << " - podzielna przez 3 i 5\n";

        else if (i % 3 == 0)
            cout << i << " - podzielna przez 3\n";

        else if (i % 5 == 0)
            cout << i << " - podzielna przez 5\n";
    }
}

//////////////////////////////////////////////////////////
//////////////////// ZADANIE 2.2 /////////////////////////
///////////////////// Suma od 1 do n /////////////////////
//////////////////////////////////////////////////////////

void zadanie_2_2() {

    int n;
    int suma = 0;

    cout << "Podaj n: ";
    cin >> n;

    for (int i = 1;i <= n;i++)
        suma += i;

    cout << "Suma = " << suma << endl;
}

//////////////////////////////////////////////////////////
//////////////////// ZADANIE 2.3 /////////////////////////
/////////////////// Prostokat z gwiazdek //////////////////
//////////////////////////////////////////////////////////

void zadanie_2_3() {

    int szerokosc, wysokosc;

    cout << "Podaj szerokosc: ";
    cin >> szerokosc;

    cout << "Podaj wysokosc: ";
    cin >> wysokosc;

    for (int i = 0;i < wysokosc;i++) {

        for (int j = 0;j < szerokosc;j++)
            cout << "*";

        cout << endl;
    }
}

//////////////////////////////////////////////////////////
//////////////////// ZADANIE 3.1 /////////////////////////
//////////////////////// Silnia //////////////////////////
//////////////////////////////////////////////////////////

long long silnia_iteracyjna(int n) {

    long long wynik = 1;

    for (int i = 1;i <= n;i++)
        wynik *= i;

    return wynik;
}

long long silnia_rekurencyjna(int n) {

    if (n <= 1)
        return 1;

    return n * silnia_rekurencyjna(n - 1);
}

//////////////////////////////////////////////////////////
//////////////////// ZADANIE 3.2 /////////////////////////
///////////////////// Fibonacci //////////////////////////
//////////////////////////////////////////////////////////

int fib_iter(int n) {

    if (n <= 1) return n;

    int a = 0, b = 1, c;

    for (int i = 2;i <= n;i++) {
        c = a + b;
        a = b;
        b = c;
    }

    return b;
}

int fib_rek(int n) {

    if (n <= 1) return n;

    return fib_rek(n - 1) + fib_rek(n - 2);
}

//////////////////////////////////////////////////////////
//////////////////// ZADANIE 3.3 /////////////////////////
//////////////////// Wyszukiwanie ////////////////////////
//////////////////////////////////////////////////////////

int wyszukiwanie_liniowe(vector<int>& tab, int x) {

    for (int i = 0;i < tab.size();i++)
        if (tab[i] == x)
            return i;

    return -1;
}

int wyszukiwanie_binarne(vector<int>& tab, int x) {

    int l = 0;
    int p = tab.size() - 1;

    while (l <= p) {

        int s = (l + p) / 2;

        if (tab[s] == x) return s;

        if (tab[s] < x)
            l = s + 1;
        else
            p = s - 1;
    }

    return -1;
}

//////////////////////////////////////////////////////////
//////////////////// ZADANIE 3.1 /////////////////////////
//////////////////// Zapis do pliku //////////////////////
//////////////////////////////////////////////////////////

void zapis_do_pliku() {

    ofstream plik("liczby.txt");

    srand(time(NULL));

    for (int i = 0;i < 1000;i++)
        plik << rand() % 10000 << endl;

    plik.close();

    cout << "Zapisano dane do pliku\n";
}

//////////////////////////////////////////////////////////
//////////////////// ZADANIE 3.2 /////////////////////////
//////////////////// Sortowanie pliku ////////////////////
//////////////////////////////////////////////////////////

void sortowanie_pliku() {

    ifstream plik("liczby.txt");
    ofstream wynik("posortowane_liczby.txt");

    vector<int> liczby;
    int x;

    while (plik >> x)
        liczby.push_back(x);

    sort(liczby.begin(), liczby.end());

    for (int n : liczby)
        wynik << n << endl;

    plik.close();
    wynik.close();

    cout << "Zapisano posortowane liczby\n";
}

//////////////////////////////////////////////////////////
///////////////////////// MAIN ///////////////////////////
//////////////////////////////////////////////////////////

int main() {

    // odkomentuj zadanie ktore chcesz uruchomic

    //zadanie_1_1();
    //zadanie_1_2();
    //zadanie_1_3();

    //zadanie_2_1();
    //zadanie_2_2();
    //zadanie_2_3();

    //cout<<silnia_iteracyjna(5)<<endl;
    //cout<<silnia_rekurencyjna(5)<<endl;

    //cout<<fib_iter(10)<<endl;
    //cout<<fib_rek(10)<<endl;

    //zapis_do_pliku();
    //sortowanie_pliku();

}
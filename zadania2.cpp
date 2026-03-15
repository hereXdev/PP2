

// ZAD 1 
// #include <iostream>
// using namespace std;

// int main() {
//     int *tablica = new int[10];

//     cout << "Podaj 10 liczb:" << endl;
//     for(int i = 0; i < 10; i++) {
//         cin >> tablica[i];
//     }

//     cout << "Elementy tablicy:" << endl;
//     for(int i = 0; i < 10; i++) {
//         cout << tablica[i] << " ";
//     }

//     delete[] tablica;

//     return 0;
// }




// ZAD2
// #include <iostream>
// using namespace std;

// int main() {
//     int m, n;

//     cout << "Podaj liczbe wierszy: ";
//     cin >> m;

//     cout << "Podaj liczbe kolumn: ";
//     cin >> n;

//     int **tablica = new int*[m];

//     for(int i = 0; i < m; i++) {
//         tablica[i] = new int[n];
//     }

//     cout << "Podaj elementy macierzy:" << endl;
//     for(int i = 0; i < m; i++) {
//         for(int j = 0; j < n; j++) {
//             cin >> tablica[i][j];
//         }
//     }

//     cout << "Macierz:" << endl;
//     for(int i = 0; i < m; i++) {
//         for(int j = 0; j < n; j++) {
//             cout << tablica[i][j] << " ";
//         }
//         cout << endl;
//     }

//     for(int i = 0; i < m; i++) {
//         delete[] tablica[i];
//     }

//     delete[] tablica;

//     return 0;
// }





// ZAD3
// #include <iostream>
// using namespace std;

// struct Node {
//     int data;
//     Node* prev;
//     Node* next;
// };

// void dodajPoczatek(Node*& head, int value) {
//     Node* nowy = new Node{value, nullptr, head};

//     if(head != nullptr)
//         head->prev = nowy;

//     head = nowy;
// }

// void dodajKoniec(Node*& head, int value) {
//     Node* nowy = new Node{value, nullptr, nullptr};

//     if(head == nullptr) {
//         head = nowy;
//         return;
//     }

//     Node* temp = head;

//     while(temp->next != nullptr)
//         temp = temp->next;

//     temp->next = nowy;
//     nowy->prev = temp;
// }

// void wyswietlPrzod(Node* head) {
//     Node* temp = head;

//     while(temp != nullptr) {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }

//     cout << endl;
// }

// void usunPoczatek(Node*& head) {
//     if(head == nullptr) return;

//     Node* temp = head;
//     head = head->next;

//     if(head != nullptr)
//         head->prev = nullptr;

//     delete temp;
// }

// void usunKoniec(Node*& head) {
//     if(head == nullptr) return;

//     Node* temp = head;

//     while(temp->next != nullptr)
//         temp = temp->next;

//     if(temp->prev != nullptr)
//         temp->prev->next = nullptr;
//     else
//         head = nullptr;

//     delete temp;
// }

// void usunWszystko(Node*& head) {
//     while(head != nullptr)
//         usunPoczatek(head);
// }

// int main() {
//     Node* head = nullptr;

//     dodajPoczatek(head, 5);
//     dodajPoczatek(head, 2);
//     dodajKoniec(head, 10);
//     dodajKoniec(head, 20);

//     cout << "Lista:" << endl;
//     wyswietlPrzod(head);

//     usunPoczatek(head);
//     usunKoniec(head);

//     cout << "Po usunieciu:" << endl;
//     wyswietlPrzod(head);

//     usunWszystko(head);

//     return 0;
// }







// ZAD9 
// #include <iostream>
// using namespace std;

// int main() {
//     int n;

//     cout << "Podaj liczbe wierzcholkow: ";
//     cin >> n;

//     int **graf = new int*[n];

//     for(int i = 0; i < n; i++) {
//         graf[i] = new int[n];

//         for(int j = 0; j < n; j++)
//             graf[i][j] = 0;
//     }

//     int k;
//     cout << "Podaj liczbe krawedzi: ";
//     cin >> k;

//     for(int i = 0; i < k; i++) {
//         int a, b;

//         cout << "Podaj krawedz (v1 v2): ";
//         cin >> a >> b;

//         graf[a][b] = 1;
//         graf[b][a] = 1;
//     }

//     cout << "Macierz sasiedztwa:" << endl;

//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j < n; j++) {
//             cout << graf[i][j] << " ";
//         }
//         cout << endl;
//     }

//     for(int i = 0; i < n; i++)
//         delete[] graf[i];

//     delete[] graf;

//     return 0;
// }

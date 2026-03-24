// #include <iostream>
// #include <vector>
// #include <cstdlib>
// #include <ctime>
// #include <chrono>
 
// using namespace std;
// using namespace chrono;
 
// // Sortowanie bąbelkowe z optymalizacją (flaga)
// void bubbleSort(vector<int>& arr) {
//     int n = arr.size();
//     bool swapped;
//     for (int i = 0; i < n - 1; ++i) {
//         swapped = false;
//         for (int j = 0; j < n - i - 1; ++j) {
//             if (arr[j] > arr[j + 1]) {
//                 swap(arr[j], arr[j + 1]);
//                 swapped = true;
//             }
//         }
//         if (!swapped) break;   // brak zamian – koniec
//     // }
// }
 
// // Funkcja pomocnicza dla QuickSort – partycjonowanie
// int partition(vector<int>& arr, int low, int high) {
//     int pivot = arr[high];
//     int i = low - 1;
//     for (int j = low; j < high; ++j) {
//         if (arr[j] <= pivot) {
//             ++i;
//             swap(arr[i], arr[j]);
//         }
//     }
//     swap(arr[i + 1], arr[high]);
//     return i + 1;
// }
 
// // QuickSort (rekurencyjny)
// void quickSort(vector<int>& arr, int low, int high) {
//     if (low < high) {
//         int pi = partition(arr, low, high);
//         quickSort(arr, low, pi - 1);
//         quickSort(arr, pi + 1, high);
//     }
// }
 
// // Scalanie dla MergeSort
// void merge(vector<int>& arr, int left, int mid, int right) {
//     int n1 = mid - left + 1;
//     int n2 = right - mid;
//     vector<int> L(n1), R(n2);
 
//     for (int i = 0; i < n1; ++i) L[i] = arr[left + i];
//     for (int j = 0; j < n2; ++j) R[j] = arr[mid + 1 + j];
 
//     int i = 0, j = 0, k = left;
//     while (i < n1 && j < n2) {
//         if (L[i] <= R[j]) arr[k++] = L[i++];
//         else arr[k++] = R[j++];
//     }
//     while (i < n1) arr[k++] = L[i++];
//     while (j < n2) arr[k++] = R[j++];
// }
 
// // MergeSort (rekurencyjny)
// void mergeSort(vector<int>& arr, int left, int right) {
//     if (left < right) {
//         int mid = left + (right - left) / 2;
//         mergeSort(arr, left, mid);
//         mergeSort(arr, mid + 1, right);
//         merge(arr, left, mid, right);
//     }
// }
 
// int main() {
//     srand(time(0));                         // ziarno dla losowości
//     vector<int> sizes = {1000, 5000, 10000};
 
//     cout << "Rozmiar\tBubbleSort [ms]\tQuickSort [ms]\tMergeSort [ms]\n";
 
//     for (int n : sizes) {
//         // Generowanie losowego zestawu danych
//         vector<int> original(n);
//         for (int i = 0; i < n; ++i)
//             original[i] = rand() % 10000;
 
//         // BubbleSort na kopii
//         vector<int> arr1 = original;
//         auto start = high_resolution_clock::now();
//         bubbleSort(arr1);
//         auto end = high_resolution_clock::now();
//         auto bubbleTime = duration_cast<milliseconds>(end - start).count();
 
//         // QuickSort na kopii
//         vector<int> arr2 = original;
//         start = high_resolution_clock::now();
//         quickSort(arr2, 0, n - 1);
//         end = high_resolution_clock::now();
//         auto quickTime = duration_cast<milliseconds>(end - start).count();
 
//         // MergeSort na kopii
//         vector<int> arr3 = original;
//         start = high_resolution_clock::now();
//         mergeSort(arr3, 0, n - 1);
//         end = high_resolution_clock::now();
//         auto mergeTime = duration_cast<milliseconds>(end - start).count();
 
//         cout << n << "\t" << bubbleTime << "\t\t"
//              << quickTime << "\t\t" << mergeTime << "\n";
//     }
 
//     return 0;
// }


// // Zadanie 2.1: Silnia iteracyjna
// long long silnia_it(int n) {
//     long long w = 1;
//     for (int i = 1; i <= n; i++) w *= i;
//     return w;
// }
 
// // Zadanie 2.1: Silnia rekurencyjna
// long long silnia_rek(int n) {
//     if (n < 2) return 1;
//     return n * silnia_rek(n - 1);
// }
 
// // Zadanie 2.2: Fibonacci iteracyjnie
// int fib_it(int n) {
//     if (n <= 1) return n;
//     int a = 0, b = 1, c;
//     for (int i = 2; i <= n; i++) {
//         c = a + b;
//         a = b;
//         b = c;
//     }
//     return b;
// }
 
// // Zadanie 2.2: Fibonacci rekurencyjnie
// int fib_rek(int n) {
//     if (n <= 1) return n;
//     return fib_rek(n - 1) + fib_rek(n - 2);
// }
 
// // Zadanie 2.3: Wyszukiwanie binarne iteracyjnie
// int binarne_it(vector<int>& tab, int x) {
//     int l = 0, p = tab.size() - 1;
//     while (l <= p) {
//         int sr = l + (p - l) / 2;
//         if (tab[sr] == x) return sr;
//         if (tab[sr] < x) l = sr + 1;
//         else p = sr - 1;
//     }
//     return -1;
// }
 
// // Zadanie 2.3: Wyszukiwanie binarne rekurencyjnie
// int binarne_rek(vector<int>& tab, int l, int p, int x) {
//     if (p >= l) {
//         int sr = l + (p - l) / 2;
//         if (tab[sr] == x) return sr;
//         if (tab[sr] > x) return binarne_rek(tab, l, sr - 1, x);
//         return binarne_rek(tab, sr + 1, p, x);
//     }
//     return -1;
// }
 
// // Zadanie 2.4: Suma liczb iteracyjnie
// int suma_it(vector<int>& tab) {
//     int s = 0;
//     for (int x : tab) s += x;
//     return s;
// }
 
// // Zadanie 2.4: Suma liczb rekurencyjnie
// int suma_rek(vector<int>& tab, int n) {
//     if (n <= 0) return 0;
//     return suma_rek(tab, n - 1) + tab[n - 1];
// }
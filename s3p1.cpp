#include "iostream"

using namespace std;

int main() {
    int N, a[51][51];
    cin >> N;

    // Citire Matrice
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= N; j++)
            cin >> a[i][j];

    int mijloc = N / 2 + 1;

    // Stergere Linie
    for (int i = mijloc; i < N; i++)
        for (int j = 1; j <= N; j++)
            a[i][j] = a[i + 1][j];

    // Stergere Coloana
    for (int i = 1; i <= N; i++)
        for (int j = mijloc; j < N; j++)
            a[i][j] = a[i][j + 1];

    // Afisare Matrice
     for (int i = 1; i < N; i++) {
        for (int j = 1; j < N; j++)
            cout << a[i][j] << " ";
        cout << '\n';
    }
}
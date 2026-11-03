#include <iostream>
#include <string>

using namespace std;

int main() {
    string npm, nama;
    double nilaiTugas1, nilaiTugas2, nilaiTugas3, rataRata;
    
    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
    
    cout << "NPM   : ";
    getline(cin, npm);
    
    cout << "Nama  : ";
    getline(cin, nama);
    
    cout << "Nilai Tugas I   : ";
    cin >> nilaiTugas1;
    
    cout << "Nilai Tugas II  : ";
    cin >> nilaiTugas2;
    
    cout << "Nilai Tugas III : ";
    cin >> nilaiTugas3;
    
    rataRata = (nilaiTugas1 + nilaiTugas2 + nilaiTugas3) / 3;
    
    cout << "\n--- Layar Keluaran ---" << endl;
    cout << "NPM " << npm << " Siswa yang bernama " << nama << endl;
    cout << "Memperoleh nilai rata-rata " << rataRata << " dari hasil tugas yang diikutinya." << endl;
    
    return 0;
}

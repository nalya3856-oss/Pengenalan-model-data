#include <iostream>
#include <string>

using namespace std;

int main() {
    string namaSiswa;
    double nilaiKeaktifan, nilaiTugas, nilaiUjian;
    double murniKeaktifan, murniTugas, murniUjian, nilaiAkhir;
    
    cout << "PROGRAM HITUNG NILAI AKHIR\n" << endl;
    
    cout << "Nama Siswa      : ";
    getline(cin, namaSiswa);
    
    cout << "Nilai Keaktifan : ";
    cin >> nilaiKeaktifan;
    
    cout << "Nilai Tugas     : ";
    cin >> nilaiTugas;
    
    cout << "Nilai ujian     : ";
    cin >> nilaiUjian;
    
    // Proses mendapatkan nilai murni
    murniKeaktifan = nilaiKeaktifan * 0.20;
    murniTugas = nilaiTugas * 0.30;
    murniUjian = nilaiUjian * 0.50;
    
    // Menghitung nilai akhir
    nilaiAkhir = murniKeaktifan + murniTugas + murniUjian;
    
    cout << "\n--- Layar Keluaran ---" << endl;
    cout << "Siswa yang bernama " << namaSiswa << endl;
    cout << "Dengan nilai presentase yang dihasilkan:" << endl;
    cout << "Nilai Keaktifan * 20% : " << murniKeaktifan << endl;
    cout << "Nilai Tugas * 30%     : " << murniTugas << endl;
    cout << "Nilai Ujian * 50%     : " << murniUjian << endl;
    cout << "\nJadi Siswa yang bernama " << namaSiswa << " Memperoleh nilai akhir sebesar " << nilaiAkhir << endl;
    
    return 0;
}
    
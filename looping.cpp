#include <iostream> 
using namespace std;

// Variabel global 
int angka; 
int pilihan;

// Fungsi cek prima 
bool isPrima(int n) {
if (n < 2) return false;
int i = 2;
while (i * i <= n) {
if (n % i == 0) return false;
i++;
}
return true;
}

// Fungsi cek fibonacci 
bool isFibonacci(int n) {
    int a = 0, b = 1;
    if (n == a || n == b) return true;
    int c = a + b;
    while (c <= n) {
if (c == n) return true;
a = b;
b = c;
c = a + b;
}
return false;
}

// Prosedur tampilkan menu
void tampilMenu()
{
cout << "\n--- MENU CEK BILANGAN ---" << endl;
cout << "1. Cek Bilangan Prima" << endl;
cout << "2. Cek Bilangan Fibonacci" << endl;
cout << "0. Keluar" << endl;
cout << "Pilih menu: ";
}

// Prosedur input user
void inputUser() {
cout << "Masukkan angka yang mau dicek: ";
cin >> angka;
}

// Prosedur output hasil prima
void tampilkanHasilPrima(bool hasil) {
    if (hasil) cout << "=> " << angka << " adalah bilangan prima!" << endl;
else cout << "=> " << angka << " bukan bilangan prima." << endl;
}

// Prosedur output hasil fibonacci
void tampilkanHasilFibo(bool hasil) {
    if (hasil) cout << "=> " << angka << " termasuk deret Fibonacci." << endl; 
    else cout << "=> " << angka << " tidak termasuk deret Fibonacci." << endl;
}

int main() {
    while (true) {
        tampilMenu();
        cin >> pilihan;

        switch (pilihan) {
            case 1:
            inputUser(); 
            tampilkanHasilPrima(isPrima(angka)); 
            break;
            case 2:
            inputUser();
            tampilkanHasilFibo(isFibonacci(angka));
            break;
            case 0:
            cout << "Program selesai, terima kasih!" << endl; 
            return 0;
            default:
            cout << "[!] Pilihan tidak valid, silakan masukkan 0, 1, atau 2." << endl;
            break;
        }
    }
    return 0;
}

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
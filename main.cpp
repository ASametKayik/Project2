
#include <iostream>
using namespace std;

double hesapla(double a, double b) {
    return a + b;
}

double hesapla(double a, double b, char islem) {
    if (islem == '-')
        return a - b;

    return a + b;
}

double hesapla(int a, int b) {
    return a * b;
}

double hesapla(double a, double b, int islem) {
    if (b == 0) {
        cout << "Hata: Sifira bolme yapilamaz!" << endl;
        return 0;
    }

    return a / b;
}

int main() {
    int secim;
    double sayi1, sayi2;

    cout << "=== HESAP MAKINESI ===" << endl;
    cout << "1. Toplama" << endl;
    cout << "2. Cikarma" << endl;
    cout << "3. Carpma" << endl;
    cout << "4. Bolme" << endl;
    cout << "Seciminiz: ";
    cin >> secim;

    cout << "Iki sayi girin: ";
    cin >> sayi1 >> sayi2;

    switch (secim) {
        case 1:
            cout << "Sonuc: "
                 << hesapla(sayi1, sayi2) << endl;
            break;

        case 2:
            cout << "Sonuc: "
                 << hesapla(sayi1, sayi2, '-') << endl;
            break;

        case 3:
            cout << "Sonuc: "
                 << hesapla((int)sayi1, (int)sayi2) << endl;
            break;

        case 4:
            cout << "Sonuc: "
                 << hesapla(sayi1, sayi2, 0) << endl;
            break;

        default:
            cout << "Gecersiz secim!" << endl;
    }

    return 0;
}

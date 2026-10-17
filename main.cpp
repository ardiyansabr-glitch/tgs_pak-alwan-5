#include <iostream>
using namespace std;

int main() {

    int nilai;
    int ulang;

    do {
        cout << "Masukkan nilai: ";
        cin >> nilai;

        if (nilai >= 90 && nilai <= 100) {
            cout << "Nilai A" << endl;
        } else if (nilai >= 80) {
            cout << "Nilai B" << endl;
        } else if (nilai >= 70) {
            cout << "Nilai C" << endl;
        } else if (nilai >= 0) {
            cout << "Nilai D" << endl;
        } else {
            cout << "Nilai tidak valid!" << endl;
        }

        cout << "Input nilai lagi tekan y atau Y: ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    cout << "Program selesai." << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main(){
    int batas;
    cout << "Masukkan jumlah baris yang diinginkan: ";
    cin >> batas;

    int kolom = 3;

    for (int i = 0; i < batas; ++i) {

        for (int j = 0; j < kolom; ++j) {

            cout << "|___";
        }
        cout << "|" << endl;
    }
    return 0;
}

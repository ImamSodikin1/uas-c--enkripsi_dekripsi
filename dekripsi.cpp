#include <iostream>
using namespace std;

int main() {
    string plaintext, key;
    cout << "Masukkan teks yang akan didekripsi: ";
    cin >> plaintext;
    cout << "Masukkan kunci: ";
    cin >> key;

    string ciphertext = "";
    for (int i = 0; i < plaintext.length(); i++) {
        ciphertext += char(int(plaintext[i]) ^ int(key[i % key.length()]));
    }

    cout << "Pesan yang telah didekripsi: " << ciphertext << endl;

    return 0;
}

#include <iostream>
using namespace std;

string encryptDecrypt(string toEncrypt, char key) {
    string output = toEncrypt;
    
    for (int i = 0; i < toEncrypt.size(); i++)
        output[i] = toEncrypt[i] ^ key;
    
    return output;
}

int main() {
    string input;
    char key;
    cout << "Masukan Plainteks : ";
    getline(cin, input);
    cout << "Masukan kunci : ";
    cin >> key;
    string encrypted = encryptDecrypt(input, key);
    cout << "Enkripsi : " << encrypted << endl;
    return 0;
}

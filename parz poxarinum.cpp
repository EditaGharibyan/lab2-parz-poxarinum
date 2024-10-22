#include <iostream>
#include <cstring> 
using namespace std;

#define N 26

class Cipher {
private:
    char arr1[N];
    char arr2[N];
    char word[6];
    char encryptedWord[6];
    char decryptedWord[6];

public:
    Cipher() {
        for (int i = 0; i < N; i++) {
            arr1[i] = 'a' + i;
            arr2[i] = 'z' - i;
        }
    }

    void encrypt() {
        cout << "Enter a word to encrypt: ";
        cin >> word;

        int len = strlen(word);
        for (int i = 0; i < len; i++) {
            for (int j = 0; j < N; j++) {
                if (word[i] == arr1[j]) {
                    encryptedWord[i] = arr2[j];
                    break;
                }
            }
        }
        encryptedWord[len] = '\0';
        cout << "Encrypted word: " << encryptedWord << endl;
    }

    void decrypt() {
        cout << "Enter encrypted word to decrypt: ";
        cin >> word;

        int len = strlen(word);
        for (int i = 0; i < len; i++) {
            for (int j = 0; j < N; j++) {
                if (word[i] == arr2[j]) {
                    decryptedWord[i] = arr1[j];
                    break;
                }
            }
        }
        decryptedWord[len] = '\0';
        cout << "Decrypted word: " << decryptedWord << endl;
    }
};

int main() {
    Cipher cipher;
    cipher.encrypt();
    cipher.decrypt();
    return 0;
}

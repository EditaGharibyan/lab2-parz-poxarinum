#include <iostream>
#include <cstring> 
using namespace std;
#define N 26

int main() {
    char arr1[N]; 
    char arr2[N]; 
    for (int i = 0; i < N; i++) {
        arr1[i] = 'a' + i;
        cout << arr1[i] << " ";
    }
    
    cout << endl;

    
    for (int i = 0; i < N; i++) {
        arr2[i] = 'z' - i;
        cout << arr2[i] << " ";
    }

    cout << endl;

    char word[6]; 
    char encryptedWord[6];
    
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

    
    char decryptedWord[6];
    cout << "Enter encrypted word to decrypt: ";
    cin >> word; 

    
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

    return 0;
}

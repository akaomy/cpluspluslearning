#include <iostream>
#include <map>
#include <string>
#include <openssl/evp.h>
#include <openssl/ssl.h>
#include <openssl/err.h>
#include <openssl/conf.h>
#include <openssl/rand.h>

using namespace std;


// Function to encrypt note using a simple Caesar cipher
string encrypt(string plainText, int key) {
    string encryptedText = "";
    for (char c : plainText) {
        encryptedText += (c + key);  // Shift each character by the key
    }
    return encryptedText;
}

// Function to decrypt note using a simple
string decrypt(string encryptedText, int key) {
    string decryptedText = "";
    for (char c : encryptedText) {
        decryptedText += (c - key);  // Shift each character by the negative key
    }
    return decryptedText;
}

int main() {
    string title, content;

    cout << "Enter note title: " << endl;
    getline(cin, title); 
    cout << "Enter note content: " << endl;
    getline(cin, content);

    // Display inputed title and content for verification
    cout << "You've enterd title: " << title << " and content: " << content << endl;

    // todo:
    // Encrypt title and content with SSL:
        // generate key pairs
        // encrypt title and content with the public RSA key with EVP_PKEY
        // decrypt title and content with the private RSA key with EVP_CIPHER
        // sign an verify messages using EVP_DigestSign and EVP_DigestVerify



    // Display encrypted title and content for verification
    // cout << "Encrypted title: " << encryptedTitle << endl;
    // cout << "Encrypted content: " << encryptedContent << endl;

    // Add the encrypted note to the map
    // map<string, string> notes;
    // notes[encryptedTitle] = encryptedContent;



    return 0;
}

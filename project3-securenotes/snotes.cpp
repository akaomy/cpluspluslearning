#include <iostream>
#include <map>
#include <string>

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

    // Display inputerd title and content for verification
    cout << "You've enterd title: " << title << " and content: " << content << endl;

    // Encrypt title and content
    string encryptedTitle = encrypt(title, 3);
    string encryptedContent = encrypt(content, 3);

    // Display encrypted title and content for verification
    cout << "Encrypted title: " << encryptedTitle << endl;
    cout << "Encrypted content: " << encryptedContent << endl;

    // Add the encrypted note to the map
    map<string, string> notes;
    notes[encryptedTitle] = encryptedContent;

    // Decrypt title and content
    string decryptedTitle = decrypt(encryptedTitle, 3);
    string decryptedContent = decrypt(encryptedContent, 3);
    
    // Display decrypted title and content for verification
    cout << "Decrypted title: " << decryptedTitle << endl;
    cout << "Decrypted content: " << decryptedContent << endl;

    return 0;
}

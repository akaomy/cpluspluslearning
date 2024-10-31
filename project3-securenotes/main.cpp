#include <iostream>
#include <map>
#include <string>

using namespace std;

// Function to encrypt the title and content

string encrypt(string decryptedText, int key)
{
    string encryptedText = "";
    for (char c : decryptedText) {
        encryptedText += (c + key);  // Shift each character by the negative key
    }
    return encryptedText;
}


// Function to decrypt note using a simple
string decrypt(string encryptedText, int key) 
{
    string decryptedText = "";
    for (char c : encryptedText) {
        decryptedText += (c - key);  // Shift each character by the negative key
    }
    return decryptedText;
}

int main()
{
    string title, content;
    int key = 5;

    // get user input
    cout << "Enter note title: " << endl;
    getline(cin, title); 
    cout << "Enter note content: " << endl;
    getline(cin, content);

    // encrypt it
    string encryptedTitle = encrypt(title, key);
    string encryptedContent = encrypt(content, key);

    // display inputed title and content for verification
    cout << "Encrypted title: " << encryptedTitle << endl;
    cout << "Encrypted content: " << encryptedContent << endl;

    // add the encrypted note to the map
    map<string, string> notes;
    notes[title] = content;

    // decrypt it
    string decryptedTitle = decrypt(title, key);
    string decryptedContent = decrypt(content, key);
    
    // display decrypted title and content for verification
    cout << "Decrypted title: " << title << endl;
    cout << "Decrypted content: " << content << endl;

    return 0;
}
#include <iostream>
#include <map>
#include <string>

using namespace std;

// Declare the map globally to store note titles and encrypted notes
map<string, string> secureNotes;

// Function to encrypt note using a simple Caesar cipher
string encrypt(string plainText, int key) {
    string encryptedText = "";
    for (char c : plainText) {
        encryptedText += (c + key);  // Shift each character by the key
    }
    return encryptedText;
}

// Function to add a new note to the map
void addNote(string title, string note, int key) {
    // Encrypt the note before storing it
    string encryptedNote = encrypt(note, key);
    // Store the title and encrypted note in the global map
    secureNotes[title] = encryptedNote;
    cout << "Note titled '" << title << "' has been added." << endl;
}

int main() {
    // Example: Add secure notes to the map
    string title, note;
    int key = 3;  // Set encryption key (for Caesar cipher)

    // Get user input for title and note content
    cout << "Enter note title: " << endl;
    getline(cin, title);  // Use getline to allow spaces in the title
    cout << "Enter note content: " << endl;
    getline(cin, note);  // Use getline for multi-line note content

    // Add the note to the map
    addNote(title, note, key);

    return 0;
}

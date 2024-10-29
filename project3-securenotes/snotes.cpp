#include <iostream>
#include <map>
#include <string>
#include <openssl/evp.h>
#include <openssl/ssl.h>
#include <openssl/err.h>
#include <openssl/conf.h>
#include <openssl/rand.h>

using namespace std;

EVP_PKEY *generate_key_pair() {
    """ Initialize EVP_PKEY_CTX for RSA key generation
        Sets desired key length to 2048 bits
        Generates the key pair
        Returns the generated key pair as an 'ECP_PKEY' 
        or nullptr if an error occurred
    """
    EVP_PKEY_CTX *ctx = EVP_PKEY_CTX_new_id(EVP_PKEY_RSA, nullptr);
    if (!ctx) {
        std::cerr << "Failed to create EVP_PKEY_CTX" << std::endl;
        return nullptr;
    }

    if (EVP_PKEY_keygen_init(ctx) <= 0) {
        std::cerr << "Failed to initialize keygen" << std::endl;
        EVP_PKEY_CTX_free(ctx);
        return nullptr;
    }

    if (EVP_PKEY_CTX_set_rsa_keygen_bits(ctx, 2048) <= 0) {
        std::cerr << "Failed to set key length" << std::endl;
        EVP_PKEY_CTX_free(ctx);
        return nullptr;
    }

    EVP_PKEY *key = nullptr;
    if (EVP_PKEY_keygen(ctx, &key) <= 0) {
        std::cerr << "Failed to generate key pair" << std::endl;
        EVP_PKEY_CTX_free(ctx);
        return nullptr;
    }

    EVP_PKEY_CTX_free(ctx);
    return key;

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

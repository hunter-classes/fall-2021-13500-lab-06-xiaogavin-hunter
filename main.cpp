#include <iostream>
#include <iomanip>
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"

int main() {
    // std::cout << "Enter plaintext: ";
    // std::string plaintext; 
    // std::getline(std::cin, plaintext); 

    // std::cout << "\n= Caesar =" << std::endl;
    // std::cout << "Enter shift" << std::setw(6) << ": "; 
    // int shift; 
    // std::cin >> shift; 
    // std::cout << "Ciphertext" << std::setw(7) << ": " << encrypt_caesar(plaintext, shift) << std::endl;
    // std::cout << "Decrypted" << std::setw(8) << ": " << decrypt_caesar(encrypt_caesar(plaintext, shift), shift) << std::endl;

    // std::cout << "\n= Vigenere =" << std::endl;
    // std::cout << "Enter keyword" << std::setw(4) << ": "; 
    // std::string keyword; 
    // std::cin >> keyword; 
    // std::cout << "Ciphertext" << std::setw(7) << ": " << encrypt_vigenere(plaintext, keyword) << std::endl; 
    // std::cout << "Decrypted" << std::setw(8) << ": " << decrypt_vigenere(encrypt_vigenere(plaintext, keyword), keyword) << std::endl;

    std::cout << "I " << get_position_in_array('I') << " Q " << get_position_in_array('Q') << std::endl;

    return 0;
}

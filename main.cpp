#include <iostream>
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"

int main() {
    std::cout << encrypt_vigenere("Hello, World!", "cake") << std::endl;

    return 0;
}

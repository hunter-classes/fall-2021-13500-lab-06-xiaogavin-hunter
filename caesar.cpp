#include "caesar.h"
#include <array>
#include <string>   


const std::array<char, 26> upper = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
const std::array<char, 26> lower = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'}; 

char shiftChar(char c, int rshift) {  
    int shift = rshift % 26; 

    // Go through arrays to find chars and shift them by shift
    // Needed to mod as too large of a rshift will not run the code correctly 
    for(int i = 0; i < 26; i++) { 
        if(c == upper[i] && i + shift > 26) {
            return upper[(shift + i) - 26];
        } else if(c == lower[i] && i + shift > 26) { 
            return lower[(shift + i) - 26];
        } else if(upper[i] == c) { 
            return upper[i + shift]; 
        } else if(lower[i] == c) { 
            return lower[i + shift];
        } 
    }

    return c;
}

std::string encryptCaesar(std::string plaintext, int rshift) { 
    std::string result = "";
    for(int i = 0; i < plaintext.length(); i++) { 
        result += shiftChar(plaintext.at(i), rshift); 
    }

    return result;
}
 #define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"

// add your tests here

// https://cryptii.com/pipes/caesar-cipher
TEST_CASE("Task B: Implementing Caesar cipher encryption:") { 
    SUBCASE("Base cases:") { 
        CHECK(encrypt_caesar("Way to Go!", 5) == "Bfd yt Lt!");
        CHECK(encrypt_caesar("Hello, World!" , 10) == "Rovvy, Gybvn!");
    }

    SUBCASE("Special cases:") { 
        CHECK(encrypt_caesar("!@#$%^&*()!(&)!<>?><???", 26) == "!@#$%^&*()!(&)!<>?><???");
        CHECK(encrypt_caesar("117482889421", 500) == "117482889421"); 
    }

    SUBCASE("Extreme cases: ") { 
        CHECK(encrypt_caesar("This works!", 400) == "Drsc gybuc!");
        CHECK(encrypt_caesar("To be or not to be, That is the question", 1555) == "Oj wz jm ijo oj wz, Ocvo dn ocz lpznodji");
    }
}

// https://cryptii.com/pipes/vigenere-cipher
TEST_CASE("Task C: Implementing Vigenere cipher encryption:") { 
    SUBCASE("Base cases:") { 
        CHECK(encrypt_vigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
        CHECK(encrypt_vigenere("\\`F~-z_+=\"[]{}';:!@#v$%^&T*()<a>?,./", "test") == "\\`Y~-d_+=\"\x5b\x5d\x7b\x7d';:!@#n$%^&M*()<t>?,./");
        CHECK(encrypt_vigenere("This, works!", "yes") == "Rlaq, agpok!");
    }

    SUBCASE("Special cases") { 
        CHECK(encrypt_vigenere("Hello, World!", "@#!@@*!@$UGIF*Y@") == "Impossible keyword");
        CHECK(encrypt_vigenere("Hello, World!", "1234567890") == "Impossible keyword");
        CHECK(encrypt_vigenere("Hello, World!", "EGG") == "Lkrpu, Csxrh!");
    }
}
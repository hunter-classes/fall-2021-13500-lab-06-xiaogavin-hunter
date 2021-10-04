#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"

// add your tests here

TEST_CASE("Task B: Implementing Caesar cipher encryption:") { 
    SUBCASE("Base cases:") { 
        CHECK(encryptCaesar("Way to Go!", 5) == "Bfd yt Lt!");
        CHECK(encryptCaesar("Hello, World!" , 10) == "Rovvy, Gybvn!");
    }

    SUBCASE("Special cases:") { 
        CHECK(encryptCaesar("!@#$%^&*()!(&)!<>?><???", 26) == "!@#$%^&*()!(&)!<>?><???");
        CHECK(encryptCaesar("117482889421", 500) == "117482889421"); 
    }

    SUBCASE("Extreme cases: ") { 
        CHECK(encryptCaesar("This works!", 400) == "Drsc gybuc!");
        CHECK(encryptCaesar("To be or not to be, That is the question", 1555) == "Oj wz jm ijo oj wz, Ocvo dn ocz lpznodji");
    }
}

        

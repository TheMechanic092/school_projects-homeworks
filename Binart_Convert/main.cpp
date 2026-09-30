#include <iostream>
#include <sstream>
#include <string>
#include <bitset>
#include <cctype>
/*sobstvenost na themechanic092@gmail.com*/


#include "Invalaid_IP_Check.cpp"
/* Global variables ---------------------------------------------------------*/

/* Global function ----------------------------------------------------------*/

int main(){
    std::string input;
    int octets[4];

    while (true) {
        std::cout << "Enter an IPv4 address: ";
        std::getline(std::cin, input);

        if (parseIPv4(input, octets)) break;
        std::cout << "Invalid IP address, try again.\n";
    }

    for (int i = 0; i < 4; i++) {
        std::cout << std::bitset<8>(octets[i]);
        if (i < 3) std::cout << '.';
    }
    std::cout << '\n';

};
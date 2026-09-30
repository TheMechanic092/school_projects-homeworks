#include <iostream>
#include <sstream>
#include <string>


bool parseIPv4(const std::string& input, int octets[4]){
    std::stringstream ss(input);
    std::string part;
    int count = 0;
    while (std::getline( ss, part, '.' )){

        if (count >= 4) return false; 
        if (part.empty() || part.size() > 3) return false;

        for (char c : part)
            if (!std::isdigit(static_cast<unsigned char>(c))) return false;

        int value = std::stoi(part);
        if(value > 255) return false;

        octets[count++] = value;
    };


        return count == 4 && input.back() != '.';
};
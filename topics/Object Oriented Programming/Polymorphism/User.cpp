#include <iostream>
#include <string>
#include "User.h"

        std::string User::getRank(){
            return ranking;
        }

        void User::output(){
            std::cout << "I'm a user!" << std::endl;
        }


std::ostream& operator << (std::ostream& output, const User user){
    output << "First Name: " << user.firstName << "\nLast Name: " << user.lastName <<
    "\nRank: " << user.ranking;
    return output;
}

std::istream& operator >> (std::istream &input, User &user){
    input >> user.firstName >> user.lastName >> user.ranking;
    return input;
}

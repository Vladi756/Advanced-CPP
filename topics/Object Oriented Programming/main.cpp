#include <iostream>

struct User {
    std::string firstName;  // By default, all these members are public;
    std::string lastName;
    std::string ranking;
};

int main(){

    User user;
    user.firstName = "John";
    user.lastName = "Doe";
    user.ranking = "Diamond";

    std::cout << "First Name: " << user.firstName << std::endl; // Accessible because public;
    std::cout << "Last Name: " << user.lastName << std::endl;
    std::cout << "Rank: " << user.ranking << std::endl;

    return 0;
}


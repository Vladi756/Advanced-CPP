#include <iostream>

class User {
    std::string ranking = "Gold";   // Default value is "Gold".

    public:                         // By default, members are private, so explicit declaration is needed if public.
        std::string firstName;
        std::string lastName;
        std::string getRank(){
            return ranking;
        }
};

int main(){

    User user;                      // Creates new instance of user class - this is a user Object.
    user.firstName = "John";
    user.lastName = "Doe";

    std::cout << "First Name: " << user.firstName << std::endl;     // Accessible because public;
    std::cout << "Last Name: " << user.lastName << std::endl;
    std::cout << "Rank: " << user.getRank() << std::endl;           // Ranking is private, but can be accessed indirectly from public method.

    return 0;
}


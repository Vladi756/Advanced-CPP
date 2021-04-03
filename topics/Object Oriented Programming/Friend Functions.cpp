#include <iostream>
#include <vector>

class User {
    std::string ranking = "Gold";   // Private


    public:
        std::string firstName;
        std::string lastName;
  
        friend void outputStatus(User user); // Declared but not defined in the class.
};

void outputStatus(User user){
    std::cout << user.ranking;
}

int main(){

    User user, user1;
    user.firstName = "Naomi";
    user.lastName = "Bell";

    outputStatus(user); // Not a part of the User class, so no need to prefix with User.outputStatus();

    return 0;
}

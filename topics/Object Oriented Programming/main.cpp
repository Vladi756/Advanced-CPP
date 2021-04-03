#include <iostream>
#include <vector>

class User {
    std::string ranking = "Gold";   // Default value is "Gold".

    public:                         // By default, members are private, so explicit declaration is needed if public.
        std::string firstName;
        std::string lastName;
        std::string getRank(){
            return ranking;
        }

        User(std::string firstName, std::string lastName, std::string ranking){
            this->firstName = firstName;
            this->lastName = lastName;          // "this" key word similar to Java, except -> used instead of dot.
            this->ranking = ranking;
        }
        ~User(){
            std::cout << "Destructor" << std::endl;
        }
};

int main(){

    User user("Adam", "Smith", "Platinum");
    User userz("Amy", "Johnson", "Diamond");    // Instantiating two objects of User class through custom constructor.

    std::cout << user.firstName << std::endl;
    std::cout << user.lastName << std::endl;
    std::cout << user.getRank() << std::endl;

    std::cout << userz.firstName << std::endl;
    std::cout << userz.lastName << std::endl;
    std::cout << userz.getRank() << std::endl;
    return 0;
}


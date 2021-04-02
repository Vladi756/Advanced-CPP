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
};

int main(){

    User user1;                  // Creates new instance of user class - this is a user Object.
    user1.firstName = "John";
    user1.lastName = "Doe";

    User user2;                  // Creates new instance of user class - this is a user Object.
    user2.firstName = "Robert";
    user2.lastName = "Johnson";

    User user3;                  // Creates new instance of user class - this is a user Object.
    user3.firstName = "Amy";
    user3.lastName = "Smith";

    std::vector<User> users;

    users.push_back(user1);
    users.push_back(user2);
    users.push_back(user3);

    for(int i = 0; i < users.size(); i++){
        std::cout << users[i].firstName << std::endl;
        std::cout << users[i].lastName << std::endl;
    }
    return 0;
}


#include <iostream>
#include <vector>

class User {
    std::string ranking = "Gold";   // Private

    public:
        std::string firstName;
        std::string lastName;
        std::string getRank(){      // Getter Function
            return ranking;
        }
        void setRank(std::string ranking){  // Setter Function
            if(ranking == "Bronze" || ranking == "Silver" || ranking == "Gold"){
                this->ranking = ranking;
            } else {
                this->ranking = "N/A";
            }
        }

        User(std::string firstName, std::string lastName, std::string ranking){
            this->firstName = firstName;
            this->lastName = lastName;
            this->ranking = ranking;
        }
        ~User(){
            std::cout << "Destructor" << std::endl;
        }
};

int main(){

    User user("Adam", "Smith", "Gold");
    User userz("Amy", "Johnson", "Diamond");    // Instantiating two objects of User class through custom constructor.

    std::cout << user.firstName << std::endl;
    std::cout << user.lastName << std::endl;
    std::cout << user.getRank() << std::endl;

    std::cout << userz.firstName << std::endl;
    std::cout << userz.lastName << std::endl;
    std::cout << userz.getRank() << std::endl;

    userz.setRank("Bronze");
    user.setRank("Platinum");

    std::cout << userz.getRank() << std::endl;
    std::cout << user.getRank() << std::endl;

    return 0;
}


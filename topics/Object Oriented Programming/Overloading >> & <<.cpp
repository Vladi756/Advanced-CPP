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
            if(ranking == "Bronze" || ranking == "Silver" || ranking == "Gold"){    // Make sure we use a proper rank
                this->ranking = ranking;
            } else {
                this->ranking = "N/A";
            }
        }
        ~User(){
            std::cout << "Destructor" << std::endl;
        }
};

// Overloading the << operator
std::ostream& operator << (std::ostream& output, User user) {
    output << "First Name:" << user.firstName << "\nLast Name: " << user.lastName << "\nRank: " << user.getRank() << std::endl;
    return output;
}

// Overlading the >> operator.
std::istream& operator >> (std::istream &input, User &user) {
    input >> user.firstName >> user.lastName;
    return input;
}

int main(){

    User user, user1;
    user.firstName = "Naomi";
    user.lastName = "Bell";
    user.setRank("Gold");
    std::cout << user << std::endl;

    std::cin >> user1;
    std::cout << user1;

    return 0;
}

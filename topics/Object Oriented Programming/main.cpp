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
// Overloading the insertion operator
std::ostream& operator << (std::ostream& output, User user) {
    output << "First Name:" << user.firstName << "\nLast Name: " << user.lastName << "\nRank: " << user.getRank() << std::endl;
    return output;
}

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




/*
#include <iostream>

class Position {
    public:
        int x = 10;
        int y = 20;
        Position operator + (Position pos){ // Overloading the + operator.
            Position newPos;
            newPos.x = x + pos.x;           // x reffers to "pos1" (line 17), pos.x reffers to the parameter.
            newPos.y = y + pos.y;
            return newPos;
        }
        bool operator == (Position pos){    // Overloading the == operator.
            if(x == pos.x && y == pos.y) {
                return true;
            } else {
                return false;
            }

            return 0;
        }
};

int main(){

    Position pos1, pos2;
    Position pos3 = pos1 + pos2;

    std::cout << pos3.x << std::endl;
    std::cout << pos3.y << std::endl;

    if(pos1 == pos2){
        std::cout << "They are the same!" << std::endl;
    } else {
        std::cout << "They are not the same!" << std::endl;
    }
    return 0;
}


*/



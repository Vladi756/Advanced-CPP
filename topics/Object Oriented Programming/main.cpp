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




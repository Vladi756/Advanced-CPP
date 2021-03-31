#include <iostream>

int main(){

    int grades[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    // Size can be inffered by compiler with single D arrays.
    // With multidimensional arrays, you need to specify explicitely.
    // 3 arrays, 3 items per array so - [3][3]

    for(int i = 0; i < 3; i++){
        for(int k = 0; k < 3; k++){
            std::cout << grades[i][k] << std::endl;
        }
    }

    return 0;
}

/*
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <fstream>

void save_score(int count){
    std::ifstream input("best_score.txt");

	if(!input.is_open()){
		std::cout << "Unable to read file!" << std::endl;
	}

	int best_score;
	input >> best_score;        // >> - input; << - output;

	std::ofstream output("best_score.txt");
	if(!output.is_open()){
		std::cout << "Unable to read file!" << std::endl;
	}

	if(count < best_score) {
	    output << count;
	} else {
	    output << best_score;
	}
}
void print_vector(std::vector<int> vector){   // Function outputs all guesses.
    for(int i = 0; i < vector.size(); i++){
	    std::cout << vector[i] << std::endl;
    }
}

int playgame(){
    std::vector<int> guesses;
    int count = 0;

    int random = rand() % 101;        		  // number between 0 and 100.
    std::cout << "Guess a number:" << std::endl;
    while(true){
        int guess;
	std::cin >> guess;
	count++;

        guesses.push_back(guess);

        if(guess == random){
	    std::cout << "That's correct!" << std::endl;
            break;
        } else if(guess < random){
	    std::cout << "Try a little bit higher!" << std::endl;
        } else {
	    std::cout << "Too high! Try a little lower!" << std::endl;
        }

        save_score(count);
    }

    print_vector(guesses);  // Displays all of the guesses made.
    return 0;
}

int main() {

    srand(time(NULL));          // seeds random number
    int choice;

    do {
    std::cout << "0. Quit" << std::endl << "1. Play Game\n";
    std::cin >> choice;

    switch(choice) {
    case 0:
	std::cout << "Game Over." << std::endl;
        return 0;
    case 1:
	std::cout << "Let's play" << std::endl;
        playgame();
        break;
    }

    } while (choice != 0);


    return 0;
}
*/

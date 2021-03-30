#include <iostream>
#include <fstream>
#include <vector>

int main() {

std::ifstream file("Test.text"); 			// If writing to files = file is created if it does not exist
				       			// If reading from files (i.e this program) = file cannot be created - it must already exist

	std::vector<std::string> names;



	std::string input;
	while(file >> input){				// As long as there is input from the file it is stored in the vector.
		names.push_back(input);
	}

	for(std::string name : names){			// Displays vector containining the input from the file.
		std::cout << name << std::endl;
	}


	return 0;
}


/*
Reminder: ifstream is reading from files.
	  ofstream is writing to files.
*/

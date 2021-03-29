#include <iostream>
#include <fstream>
#include <vector>

int main() {

	std::string filename;
	std::cin >> filename;

	std::ofstream file(filename.c_str(), std::ios::app); // ios::app - appendage, so the contents in the file aren't overwritten every time the program is executed.

	if(file.is_open()){
		std::cout << "Success!" << std::endl;
	}

	std::vector<std::string> names;
	names.push_back("Naomi");
	names.push_back("Mark");

	for(std::string name : names){
		file << name << std::endl;
	}

	file.close();
	return 0;
}

#include <fstream>
#include <iostream>
#include <string>


using namespace std;

int main()
{
    ifstream file("/home/geek/CPP-Nanodegree/intro-to-cpp/read-from-file/board.csv");

    if (file) {
	string line;
	while(getline(file, line)) {
	    cout << line << "\n";
	}
    } else {
	cout << "Stream was not created successfully" << endl;
    }
}

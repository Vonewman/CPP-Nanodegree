#include <iostream>
#include <sstream>
#include <string>


using namespace std;

int main()
{
    string str("1,2,3,");

    istringstream my_stream(str);

    // to handle the commas in the string stream
    char c;

    // to handle the numbers in the string stream
    int n;

    while (my_stream >> n >> c) {
	cout << n << c << "\n";
    }
    cout << "Stream has stopped" << endl;
}

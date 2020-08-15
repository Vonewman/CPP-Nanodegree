#include <iostream>
#include <vector>


using namespace std;

void PrintBoard(vector<vector<int>> board) {
    // for row in matrix
    for (vector<int> i: board) {
	// for column in row
	for (int n: i) {
	    cout << n;
	}
	cout << endl;
    }
}

int main()
{
    vector<vector<int>> board {
			       {0,1,0,0,0,0},
			       {0,1,0,0,0,0},
			       {0,1,0,0,0,0},
			       {0,1,0,0,0,0},
			       {0,0,0,0,1,0}
    };

    PrintBoard(board); 
    return 0;
}

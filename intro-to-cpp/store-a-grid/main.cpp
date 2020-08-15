#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // create a 2D vector named board
    vector<vector<int>> board {
			       {0,1,0,0,0,0},
			       {0,1,0,0,0,0},
			       {0,1,0,0,0,0},
			       {0,1,0,0,0,0},
			       {0,0,0,0,1,0}
    };

    cout << "Board vector created" << endl;
    return 0;
}

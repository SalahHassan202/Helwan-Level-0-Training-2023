// N. Nada The Chess Master
#include <iostream>
using namespace std;

int main() {
    char column;
    char row;
    cin >> column >> row;
    
    int col = column - 'a' + 1; // 'a' becomes 1, 'b' becomes 2, ..., 'h' becomes 8
    int r = row - '0';           // '1' becomes 1, '2' becomes 2, ..., '8' becomes 8
    
    int topRight = min(8 - col, 8 - r);
    int topLeft = min(col - 1, 8 - r);
    int bottomRight = min(8 - col, r - 1);
    int bottomLeft = min(col - 1, r - 1);
    
    int totalMoves = topRight + topLeft + bottomRight + bottomLeft;
    
    cout << totalMoves << endl;

    return 0;
}

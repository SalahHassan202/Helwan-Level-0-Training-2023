// D. Final compare

#include <iostream>
#include <algorithm>
#include<cmath>
using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;

    if (x == 1)
    {
        x = 14 ; 
    }
    if (y == 1)
    {
        y = 14;
    }

    if (x > y)
    {
        cout << "Hazem" << endl;
    }
    else if (y > x)
    {
        cout << "Wael" << endl;
    }
    else
    {
        cout << "Both" << endl;
    }


    return 0;
}


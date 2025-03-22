// C. Kholy's Game
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
    long long testCases ; 
    cin >> testCases ;

    while(testCases--)
    {
        long long n , j  ;
        cin >> n >> j ;

        long long full_groups = j / (n - 1) ;
        long long remaining = j % (n - 1) ;

        if (remaining == 0)
        {
            cout << full_groups * n - 1 << endl;
        } 
        else 
        {
            cout << full_groups * n + remaining << endl;
        }

        
    }
    
    return 0 ;
}





// A. Too Easy 002
#include <iostream>
#include <algorithm>
#include<cmath>
using namespace std;

int main()
{

    long long num1 , num2 ; 
    cin >> num1 >> num2 ;
    for(int i = 1 ; i <= num2 ; i++)
    {
        if(num1 % i == 0)
        {
            cout << i << " is a divisor of " << num1 << endl;
        }
    }

    
    

    return 0;
}
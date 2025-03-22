// F. Logic Case
#include <iostream>
#include <algorithm>
#include<cmath>
using namespace std;

int main()
{
    
    long long a , b  ;
    cin>> a >> b ;

    if (a > b)
    {
        swap(a, b);
    }

    long long sum = 0 ;
    long long m = a + 1 ;
    long long n = b - 1 ;



    if(m <= n)
    {
        sum = (n * (n + 1)) / 2 - (m * (m - 1)) / 2 ; 
    }

    cout <<  sum << endl;
    

    return 0;
}


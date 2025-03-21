// B. The Division
#include <iostream>
#include <algorithm>
#include<cmath>
using namespace std;

int maxScore(long long num)
{
    long long score = 0 ;
    for(long long i = 2 ; i * i <= num ; i++)
    {
        if(num % i == 0)
        {
            while(num % i == 0)
            {
                num /= i ; 
                score++ ; 
            }

        }
    }

    if(num > 1)
    {
        score++;
    }

    return score ;
}
int main()
{

    long long num ; 
    cin >> num ;
    
    cout << maxScore(num) << endl;

    
    

    return 0;
}
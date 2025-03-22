// C. Sum of Four

#include <iostream>
#include <algorithm>
#include<cmath>
using namespace std;

int main()
{
    long long a, b, c, d ;
    cin >> a >> b >> c >> d ;

    long long result1 , result2 , result3 , result4 ;

    if(a % 2 == 0)
    {
        result1 = a % 10 ;

    }
    else
    {
        result1 = -(a % 10) ;
    }

    if(b % 2 == 0)
    {
        result2 = b % 10 ;

    }
    else
    {
        result2 = -(b % 10) ;
    }

    if(c % 2 == 0)
    {
        result3 = c % 10 ;

    }
    else
    {
        result3 = -(c % 10) ;
    }

    if(d % 2 == 0)
    {
        result4 = d % 10 ;

    }
    else
    {
        result4 = -(d % 10) ;
    }


    cout << result1 + result2 + result3 + result4 << endl;

    
    

    return 0;
}

//******************************************* */


// C. Sum of Four
// #include <iostream>
// using namespace std;

// int main()
// {
  
//     long long sum = 0;

//     long long numbers[4] ;
//     for(int i = 0 ; i < 4 ; i++)
//     {
//         cin >> numbers[i] ;
//     }

//     for (int i = 0; i < 4; ++i)
//     {
//         int last_digit = numbers[i] % 10;
        
//         if (numbers[i] % 2 != 0)
//         {
//             sum -= last_digit;
//         }
//         else
//         {
//             sum += last_digit;
//         }
//     }

//     cout << sum << endl;

//     return 0;
// }

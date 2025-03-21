// J. Guess what?
#include <iostream>
#include <iomanip>                   //   setprecision
using namespace std ;
int main()
{
    double a , b , c ; 
    cin >> a >> b >> c ; 

    long long result1 = (a*b) / c ; 
    double result2 = (a*b) / c ; 

    double test = result2 - result1 ; 

    if(test > 0 )
    {
      cout << "double" << endl;
    }
    else 
    {
        if (result2 > 2147483647)    // int Range: [−2147483648,2147483647]
        {
          cout << "long long" << endl;
        }
        else
        {
          cout << "int" << endl;
        }
    }


    return 0 ;

}

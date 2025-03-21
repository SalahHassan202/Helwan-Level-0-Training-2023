// E. Amazing cave

#include <iostream>
using namespace std ;
int main()
{

    long long num ;          cin >> num ;

    int last_digit = num % 10;    // find last digit to number of last digit == 4 or == 7 ===> lucky num

    // Check if the last digit is 4 or 7
    if (last_digit == 4 || last_digit == 7)
    {
        cout << "lucky" << " ";
    }
    else
    {
        cout << "unlucky" << " ";
    }

    if(num % 2 == 0 )     // even 
    {
        cout <<  "even" << endl;
    }
    else                    // odd
    {
        cout << "odd" << endl;
    }

    return 0;
}


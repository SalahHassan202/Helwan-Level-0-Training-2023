// A. Always Fight!

#include <iostream>
using namespace std ;
int main()
{
    long long x , y ;
    cin >> x >> y ;

    long long last_two_digit_x = x % 100 ;   
    long long last_two_digit_y = y % 100 ;
    
    long long new_number = last_two_digit_x % 10 * 10 + last_two_digit_y % 10;
    
    new_number = new_number * 5 ;
    
    if (new_number % 2 == 0)
    {
        cout << new_number << endl;
        cout << "Hossam" << endl;
    }
    else
    {
        cout << new_number << endl;
        cout << "Desouky" << endl;
    }
     


    return 0 ; 

}

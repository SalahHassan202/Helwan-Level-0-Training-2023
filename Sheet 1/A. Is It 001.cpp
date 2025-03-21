// A. Is It 001

#include <iostream>
using namespace std ;
int main()
{

    long long num1 , num2 ; 
    char oper ;
    cin >> num1 >> oper >> num2 ;

    if(oper == '>')
    {
        if(num1 > num2)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    else if(oper == '<')
    {
        if(num1 < num2)
        {
            cout << "Right" << endl;
        }
        else
        {
            cout << "Wrong" << endl;
        }
    }
    else             // (oper == '=')
    {
        if(num1 == num2)
        {
            cout << "Right" << endl;
        }
        else 
        {
            cout << "Wrong" << endl;
        }
    }


    return 0;
}
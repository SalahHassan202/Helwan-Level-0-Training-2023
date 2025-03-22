// A. Salek or Unsalek
#include <iostream>
#include <algorithm>
#include<cmath>
#include <string>
#include <iomanip>
using namespace std;


int main()
{

    long long testCases ;
    cin >> testCases ;

    long long counterEven = 0 , counterOdd = 0 ; 

    while(testCases--)
    {
        long long size ;
        cin >> size ;

        long long  arr[size] ;

        for(int i = 0 ; i < size ; i++)
        {
            cin >> arr[i] ;
        }

        for(int i = 0 ; i < size ; i++)
        {
            if(arr[i] % 2 == 0 )
            {
                counterEven++ ;
            }
            else
            {
                counterOdd++ ;
            }
        }

       
    
        if(counterEven >= counterOdd)
        {
            cout << "SALEK" << endl;
        }
        else
        {
            cout << "UNSALEK" << endl;
        }
        counterEven = 0 ; 
        counterOdd = 0 ;

    }
    return 0;
}

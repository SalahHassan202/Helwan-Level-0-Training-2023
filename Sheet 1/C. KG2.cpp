// C. KG2

#include <iostream>
using namespace std ;
int main()
{

    long long num , sum = 0  ;
    
    cin >> num  ;

   for(int i = 1 ; i <= num ; i++)
   {
        sum+= i ;        // sum = sum + i 
   }

   cout << sum << endl; 
    

    return 0;
}
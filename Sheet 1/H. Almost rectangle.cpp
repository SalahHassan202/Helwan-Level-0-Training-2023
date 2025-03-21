// H. Almost rectangle

#include <iostream>
#include <iomanip>                   //   setprecision
using namespace std ;
int main()
{
  long long a  , b , c , d ;
  cin >> a >> b >> c >> d ;

  long long x , y ; 
  x = a - c ; 
  y = b - d ; 

   float area = (a * b) - (0.5 * x * y) ; 
    cout << fixed << setprecision(6)  << area << endl ;



    return 0 ;

}

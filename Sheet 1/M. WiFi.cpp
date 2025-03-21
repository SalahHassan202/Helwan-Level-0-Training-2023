// M. WiFi
# include<iostream>
#include <cmath>              // For sqrt   ,,,  pow
using namespace std ;
int main()
{

    long long x1, y1, R1, x2, y2, R2 ;
    cin >> x1 >> y1 >> R1 ;
    cin >> x2 >> y2 >> R2 ;

    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) ;
    
    if (distance <= R1 + R2 )
    {
        cout << "yes" << endl;
    } else
    {
        cout << "no" << endl;
    }
    

    return 0 ; 
}
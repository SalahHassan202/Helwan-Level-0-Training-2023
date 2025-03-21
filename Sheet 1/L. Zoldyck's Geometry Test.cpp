// L. Zoldyck's Geometry Test
# include<iostream>
#include <cmath>              // For sqrt
using namespace std ;
int main()
{

    double r, a;
    cin >> r >> a;

    /*

    إذا كان r أكبر من أو يساوي نصف قطر الدائرة التي تحيط بالمربع، نطبع "Circle"
    إذا كان r أقل من أو يساوي نصف طول ضلع المربع، نطبع "Square"
    إذا لم يتحقق أي من الشرطين، نطبع "Complex"
    
    */

    double squareInCircle = (a * sqrt(2)) / 2 ;         // sqrt     ===>     <cmath>
    
    double circleInSquare = a / 2 ;
    
    if (r >= squareInCircle)          // المربع جوا الدايره
    {
        cout << "Circle" << endl ;

    }
    else if (r <= circleInSquare)      // الدايره جوا المربع 
    {
        cout << "Square" << endl ;
    }
    else
    {
        cout << "Complex" << endl;
    }

    

    return 0 ; 
}
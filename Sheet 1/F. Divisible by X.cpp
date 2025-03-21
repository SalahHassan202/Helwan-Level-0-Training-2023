// F. Divisible by X


// this code give   ====>   Time limit exceeded on test 21
// #include <iostream>
// using namespace std ;
// int main()
// {

//     long long num1 , num2 , num3 ;          cin >> num1 >> num2 >> num3 ;
//     long long min_val = 0 , max_val = 0 ; 
//     long long counter = 0 ; 


//     if(num1 <= num2)
//     {
//         min_val = num1;
//         max_val = num2;
//     }
//     else
//     {
//         min_val = num2;
//         max_val = num1;
//     }

//     for(int i = min_val ; i<= max_val ; i++ )
//     {
//         if(i % num3 == 0)
//         {
//             counter++ ; 
//         }
        
//     }

//     cout << counter << endl;


//     return 0;
// }

// ************************************************************************* 


// F. Divisible by X

#include <iostream>
using namespace std ;
int main()
{
    long long A, B, X;
    cin >> A >> B >> X;

    if (A > B)
    {
        swap(A, B);
    }

    // حساب عدد الأرقام القابلة للقسمة على X في النطاق [A, B]
    long long count = (B / X) - ((A - 1) / X);         // O(1)

    cout << count << endl;      


    return 0 ; 

}

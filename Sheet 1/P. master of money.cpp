// P. master of money
# include<iostream>
#include <cmath>              
using namespace std ;
int main()
{

    int x , y , n ;                    cin >> x >> y >> n ;
    // الفكره حسب سعر الحلوي الي اقدر اشتريها لما اشتري 3 حلوات مع بعض و
    //  احسب عدد  سعر الحلوي الي اقدر اشتريها لما اشتري كل حلوه لوحدها 
    // اخيراااا        ===. اجيب اقل تكلفه بينهم

    int three_candy = n / 3 ; 
    int remain_candy = n % 3 ; 

    int cost1 = three_candy * y + remain_candy * x ;     

    int cost2 = x * n ;       

    cout << min(cost1 , cost2) << endl;


    return 0 ; 
}
// D. Zeros?
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

/*

الفكره ف المثال عايز احسب عدد الاصفار التي تحتوي علي ضرب الاعداد من 
1 الي n
الحل هعمل اي؟؟
اول حاجه عشان اكون صفر بعمل اي بقول 2 * 5 = 10 وبطدا حصلت علي اول صفر 
لكن لو العدد 20 
يعني 2 * 2 * 5 = 20
و بكدا انا عندي صفر عشان 2 * 5 
لكن لو لاحظت هتلاقي ان العدد 2 بيتكرر كتير 
ف انا هحسب بناء علي العدد الاقل تكرار 
الي هو ال 5 
و مضاعفات ال 5 
مثل 
5 / 25 / 125 / 625  ......

مثال افرض ان n = 100
عايز احسب عدد الاصفار لما اضرب الرقم من 1 ل 100 
الحل 
100 / 5 = 20         =====> 20 zeros
100 / 25 = 4         =====> 4 zeros
100 / 125 = 0       
الناتج الكلي هو 
20 + 4 = 24 zeros 


*/

int countZeros(int n)
{
    int count = 0;
    for (int i = 5; n / i >= 1; i *= 5)           // i = 5 ===> عشان انا هعتد علي قوي العدد 5 اها تتكرر اقل
    {
        // i = 5 ===> عشان انا هعتد علي قوي العدد 5 اها تتكرر اقل
        // n / i >= 1       ===> الناتج طلع بيساوي صفر خلاص &&
        // i علي مضاعف  n  العدد لو مطلعش بصفر هيكمل اختبار و في كل مره يقسم 
        // i *= 5 ==> i = i * 5
        count += n / i;
    }
    

    return count;
}

int main()
{
     int n;
    cin >> n;

    int result = countZeros(n);
    cout << result << endl;

        
    return 0 ;

}
    






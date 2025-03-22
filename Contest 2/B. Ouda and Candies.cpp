// B. Ouda and Candies
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;


int main()
{
    long long x , n ; 
    cin >> x >>  n;

    long long r = x % n;     // reminder

    long long total2  = r == 0 ? 0 : n - r;     // total2  ===> extra_candies

    long long total1 = x + total2 ;             // total1  ===> total_candies 
  
    cout << total1 << " " <<  total2 << endl;
    return 0 ;
}





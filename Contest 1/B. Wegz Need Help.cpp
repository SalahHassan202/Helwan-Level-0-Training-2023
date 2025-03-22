// B. Wegz Need Help
#include <iostream>
#include <algorithm>
#include<cmath>
using namespace std;

int main()
{
    long long a, b, x, y ;
    cin >> a >> b >> x >> y ;

    
    long long distance1 = abs(a - b);

    long long distance2 = abs(a - x) + abs(b - y);
    long long distance3 = abs(a - y) + abs(b - x);

    long long min_distance = min({distance1, distance2, distance3});

    cout << min_distance << endl;

    return 0;
}

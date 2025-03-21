// K. The Best
# include<iostream>
using namespace std ;
int main()
{

    long long a , b , c , d ; 
    cin >> a >> b >> c >> d ;

    if (a < b && a < c && a < d)
    {
        cout << "Amr" << endl;
    }
    else if (b < a && b < c && b < d)
    {
        cout << "Waleed" << endl;
    }
    else if (c < a && c < b && c < d)
    {
        cout << "Mustafa" << endl;
    }
    else if (d < a && d < b && d < c)
    {
        cout << "Youssef" << endl;
    }
    else
    {
        cout << "We are the best" << endl;
    }


    

    return 0 ; 
}
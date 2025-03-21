// A. The Lost Number

#include <iostream>
using namespace std;

int main()
{
    int numbers[10]; 
    int x;            
    bool found = false;
    
    for (int i = 0; i < 10; i++)
    {
        cin >> numbers[i];
    }
    
    cin >> x;
    
    for (int i = 0; i < 10; i++) {
        if (numbers[i] == x)
        {
            found = true;  
            break;     
        }
    }
    
    if (found)
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
    
    return 0;
}

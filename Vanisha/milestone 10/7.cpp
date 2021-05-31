#include<iostream>
using namespace std;

bool prime(int x)
{
    for(int i = 2; i<x; i++)
    {
        if(x%i == 0)
            return false;
    }
    return true;
}

int main()
{
    int m;
    cin>>m;
    cout << prime(m) << "\n";
    
    return 0;
}			

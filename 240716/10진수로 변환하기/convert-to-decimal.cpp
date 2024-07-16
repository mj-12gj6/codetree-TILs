#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string a;
    cin >> a;

    int n=0;
    for(int i=0;i<(int)a.size();i++)
    {
        n=n*2+(a[i]-'0');
    }

    cout << n;
    
    return 0;
}
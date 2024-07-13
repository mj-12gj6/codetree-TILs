#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void Same(string a,string b)
{
    if(a==b)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}

int main() {
    // 여기에 코드를 작성해주세요.
    string a,b;
    cin >> a >> b;



    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    Same(a,b);


    return 0;
}
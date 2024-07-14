#include <iostream>
#include <cstring>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

    string day[7]={"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};

    int m1,d1,m2,d2;
    cin >> m1 >> d1 >> m2 >> d2;

    int diff=0;

    for(int i=m1;i<m2;i++)
    {
        diff+=arr[i];
    }
    diff=diff+d2-d1;
    int n;

    if(diff>0)
    {
        n=diff%7;
    }
    else
    {
        n=(700+diff)%7;
    }
    cout << day[n];


    return 0;
}
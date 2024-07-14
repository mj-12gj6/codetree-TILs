#include <iostream>
#include <cstring>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};

    string day[7]={"Mon","Tue","Wed","Thu","Fri","Sat","Sun"};

    int m1,d1,m2,d2;
    cin >> m1 >> d1 >> m2 >> d2;

    string A;
    cin >> A;


    int diff=0;

    for(int i=m1;i<m2;i++)
    {
        diff+=arr[i];
    }

    diff=diff+d2-d1;

    int idx=-1;

    for(int i=0;i<7;i++)
    {
        if(day[i]==A)
        {
            idx=i;
        }
    }

    int cnt=0;

    if(idx<=diff%7)
    {
        cnt=diff/7+1;
    }
    else
    {
        cnt=diff/7;
    }
    
    cout << cnt;


    return 0;
}
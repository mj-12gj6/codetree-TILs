#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    string n;

    cin >> a >> b >> n;

    int num=0;
    
    for(int i=0;i<n.size();i++)
    {
        num=a*num+n[i]-'0';
    }

    int cnt=0;
    int arr[100];

    while(true)
    {
        if(num<b)
        {
            arr[cnt]=num;
            break;
        }
        arr[cnt]=num%b;
        num/=b;
        cnt++;
    }

    for(int i=cnt;i>=0;i--)
    {
        cout << arr[i];
    }



    return 0;
}
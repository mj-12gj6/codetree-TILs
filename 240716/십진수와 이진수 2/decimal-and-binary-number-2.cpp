#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    string a;
    cin >> a;

    int n=0;


    for(int i=0;i<a.length();i++)
    {
        n=n*2+a[i]-'0';
    }

    n*=17;
    int arr[15];
    int cnt=0;

    while(true)
    {
        if(n<2)
        {
            arr[cnt]=n;
            break;
        }
        arr[cnt]=n%2;
        n/=2;
        cnt++;
    }

    for(int i=cnt;i>=0;i--)
    {
        cout << arr[i];
    }


    return 0;
}
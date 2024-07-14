#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    cin >> a >> b >> c;

    int min=(a-11)*24*60 + (b-11)*60 + c-11;

    if(min<0)
    {
        cout << -1;
    }

    cout << min;



    return 0;
}
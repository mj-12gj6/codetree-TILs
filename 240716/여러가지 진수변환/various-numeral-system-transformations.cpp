#include <iostream>
#include <string>

using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N,B;

    cin >> N >> B;

    int arr[10];
    int cnt=0;

    while(true)
    {
        if(N<B)
        {
            arr[cnt]=N;
            break;
        }

        arr[cnt]=N%B;
        N/=B;
        cnt++;    
    }

    for(int i=cnt;i>=0;i--)
    {
        cout << arr[i];
    }



    return 0;
}
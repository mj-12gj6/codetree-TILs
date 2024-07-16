#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int N,K;
    cin >> N >> K;

    int arr[N+1]={0};

    for(int i=0;i<K;i++)
    {
        int a,b;
        cin >> a >> b;

        for(int j=a+1;j<=b+1;j++)
        {
            arr[j]+=1;
        }
    }

    int max=0;

    for(int i=0;i<N+1;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }

    cout << max;






    return 0;
}
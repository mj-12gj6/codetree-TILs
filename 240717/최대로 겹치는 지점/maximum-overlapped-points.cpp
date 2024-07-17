#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int arr[101]={0};

    for(int i=0;i<n;i++)
    {
        int x1,x2;
        cin >> x1 >> x2;
        for(int j=x1;j<=x2;j++)
        {
            arr[j]++;
        }
    }

    int max=0;

    for(int i=0;i<101;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }

    cout << max;

    return 0;
}
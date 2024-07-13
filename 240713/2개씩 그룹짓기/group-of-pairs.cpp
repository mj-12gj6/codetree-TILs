#include <iostream>
#include <algorithm>

using namespace std;



int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;

    int arr[2000];

    for(int i=0;i<2*N;i++)
    {
        cin >> arr[i];
    }

    sort(arr,arr+2*N);
    int maxSum = arr[0]+arr[2*N-1];

    for(int i=0;i<N;i++)
    {
        if(maxSum<arr[i]+arr[2*N-1-i])
        {
            maxSum=arr[i]+arr[2*N-1-i];
        }
    }   

    cout << maxSum;

    return 0;
}
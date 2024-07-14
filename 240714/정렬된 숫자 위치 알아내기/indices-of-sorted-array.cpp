#include <iostream>
#include <algorithm>

using namespace std;

struct arr
{
    int n;
    int num;
};

bool cmp(arr a, arr b)
{
    if (a.n == b.n)
    {
        return a.num < b.num;
    }
    return a.n < b.n;
}

int main() {
    // 여기에 코드를 작성해주세요.
    arr A[1000];

    int ans[1001];

    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> A[i].n;
        A[i].num = i + 1;
    }

    sort(A, A + N, cmp);

    for (int i = 0; i < N; i++)
    {
        ans[A[i].num] = i+1;
    }

    for(int i=1;i<=N;i++)
    {
        cout << ans[i] << " ";
    }



    return 0;
}
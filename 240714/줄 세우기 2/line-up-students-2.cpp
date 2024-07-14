#include <iostream>
#include <algorithm>

using namespace std;

struct Info
{
    int h;
    int w;
    int n;
};

bool cmp(Info a, Info b)
{
    if(a.h==b.h)
    {
        return a.w > b.w;
    }
    return a.h < b.h;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;

    Info per[1000];

    for(int i=0;i<N;i++)
    {
        cin >> per[i].h >> per[i].w;
        per[i].n=i+1;
    }

    sort(per,per+N,cmp);

    for(int i=0;i<N;i++)
    {
        cout << per[i].h << " " << per[i].w;
        cout << " " << per[i].n << "\n";
    }


    return 0;
}
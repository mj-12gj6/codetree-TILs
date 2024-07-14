#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

struct Info
{
    string name;
    int h;
    int w;
};

bool cmp(Info a,Info b)
{
    if(a.h==b.h)
    {
        return a.w > b.w;
    }
    return a.h < b.h;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    Info per[10];

    for(int i=0;i<n;i++)
    {
        cin >> per[i].name >> per[i].h >> per[i].w;
    }

    sort(per,per+n,cmp);

    for(int i=0;i<n;i++)
    {
        cout << per[i].name << " " << per[i].h << " ";
        cout << per[i].w << "\n";
    }


    return 0;
}
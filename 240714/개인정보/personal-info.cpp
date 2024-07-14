#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

struct Info
{
    string name;
    int h;
    double w;
};

bool cmp_name(Info a, Info b)
{
    return a.name < b.name;
}

bool cmp_h(Info a,Info b)
{
    return a.h > b.h;
}

int main() {
    // 여기에 코드를 작성해주세요.
    Info per[5];

    for(int i=0;i<5;i++)
    {
        cin >> per[i].name >> per[i].h >> per[i].w;
    }

    sort(per,per+5,cmp_name);

    cout << fixed;
    cout.precision(1);
    cout << "name\n";

    for(int i=0;i<5;i++)
    {
        cout << per[i].name << " " << per[i].h << " " << per[i].w;
        cout << "\n";
    }

    sort(per,per+5,cmp_h);

    cout << "\nheight\n";

    for(int i=0;i<5;i++)
    {
        cout << per[i].name << " " << per[i].h << " " << per[i].w;
        cout << "\n";
    }


    return 0;
}
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

struct Score
{
    string name;
    int a;
    int b;
    int c;
};

bool cmp(Score n,Score m)
{
    return n.a+n.b+n.c < m.a+m.b+m.c;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    Score person[10];

    for(int i=0;i<n;i++)
    {
        cin >> person[i].name >> person[i].a;
        cin >> person[i].b >> person[i].c;
    }

    sort(person,person+n,cmp);

    for(int i=0;i<n;i++)
    {
        cout << person[i].name << " " << person[i].a << " ";
        cout << person[i].b << " " << person[i].c << "\n";
    }


    return 0;
}
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

struct Info
{
    string name;
    int height;
    int age;
};

bool cmp(Info a, Info b)
{
    return a.height < b.height;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;
    Info Person[10];

    for(int i=0;i<n;i++)
    {
        cin >> Person[i].name >> Person[i].height >> Person[i].age;
    }

    sort(Person,Person+n,cmp);

    for(int i=0;i<n;i++)
    {
        cout << Person[i].name << " " << Person[i].height << " " << Person[i].age << "\n";
    }


    return 0;
}
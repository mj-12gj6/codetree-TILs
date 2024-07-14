#include <iostream>
#include <cstring>
#include <algorithm>
#include <functional>


using namespace std;

struct Info
{
    string name;
    string addr;
    string city;
};

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    Info man[10];
    
    for(int i=0;i<n;i++)
    {
        cin >> man[i].name >> man[i].addr >> man[i].city;
    }

    Info lastname=man[0];

    for(int i=0;i<n;i++)
    {
        if(lastname.name<man[i].name)
        {
            lastname=man[i];
        }
    }

    cout << "name " << lastname.name << "\n";
    cout << "addr " << lastname.addr << "\n";
    cout << "city " << lastname.city;



    return 0;
}
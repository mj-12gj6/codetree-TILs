#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

struct Score
{
    string name;
    int kr;
    int eng;
    int math;
};

bool cmp(Score a,Score b)
{
    if(a.kr==b.kr)
    {
        if(a.eng==b.eng)
        {
            return a.math > b.math;
        }
        return a.eng > b.eng;
    }
    return a.kr > b.kr;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    Score man[10];

    for(int i=0;i<n;i++)
    {
        cin >> man[i].name >> man[i].kr >> man[i].eng >> man[i].math;
    }

    sort(man,man+n,cmp);

    for(int i=0;i<n;i++)
    {
        cout << man[i].name << " " << man[i].kr << " ";
        cout << man[i].eng << " " << man[i].math << "\n";
    }

    return 0;
}
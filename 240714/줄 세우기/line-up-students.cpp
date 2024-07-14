#include <iostream>
#include <algorithm>

using namespace std;

struct Info
{
    int h;
    int w;
    int num;
};

bool cmp(Info a,Info b)
{
    if(a.h==b.h)
    {
        if(a.w==b.w)
        {
            return a.num < b.num;
        }
        return a.w > b.w;
    }
    return a.h > b.h;
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;

    Info student[1000];

    for(int i=0;i<N;i++)
    {
        cin >> student[i].h >> student[i].w;
        student[i].num=i+1;
    }

    sort(student,student+N,cmp);

    for(int i=0;i<N;i++)
    {
        cout << student[i].h << " " << student[i].w << " " << student[i].num << "\n";
    }


    return 0;
}
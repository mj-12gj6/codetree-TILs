#include <iostream>
#include <algorithm>

using namespace std;

struct Point
{
    int x;
    int y;
    int num;
};

bool cmp(Point a,Point b)
{
    return abs(a.x)+abs(a.y) < abs(b.x)+abs(b.y);
}

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    cin >> N;

    Point dot[1000];

    for(int i=0;i<N;i++)
    {
        cin >> dot[i].x >> dot[i].y;
        dot[i].num=i+1;
    }

    sort(dot,dot+N,cmp);

    for(int i=0;i<N;i++)
    {
        cout << dot[i].num << "\n";
    }

    return 0;
}
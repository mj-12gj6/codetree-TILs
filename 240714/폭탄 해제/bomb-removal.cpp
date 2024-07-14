#include <iostream>
#include <cstring>

using namespace std;

struct Info
{
    string code;
    char color;
    int sec;
};

int main() {
    // 여기에 코드를 작성해주세요.
    string code;
    char color;
    int sec;
    cin >> code >> color >> sec;

    Info bomb;

    bomb.code=code;
    bomb.color=color;
    bomb.sec=sec;

    cout << "code : " << bomb.code << "\n";
    cout << "color : " << bomb.color << "\n";
    cout << "second : " << bomb.sec << "\n"; 



    return 0;
}
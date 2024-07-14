#include <iostream>
using namespace std;

    struct Info
    {
        char code;
        int score;
    };

int main() {
    // 여기에 코드를 작성해주세요.
    Info mem[5];

    for(int i=0;i<5;i++)
    {
        cin >> mem[i].code >> mem[i].score;
    }

    int min=mem[0].score;
    int idx=0;

    for(int i=0;i<5;i++)
    {
        if(min>mem[i].score)
        {
            min=mem[i].score;
            idx=i;
        }
    }

    cout << mem[idx].code << " " << mem[idx].score << "\n";


    return 0;
}
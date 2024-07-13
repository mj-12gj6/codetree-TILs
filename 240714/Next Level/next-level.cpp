#include <iostream>
#include <cstring>

using namespace std;

    struct Info
    {
        string id;
        int lv;
    };



int main() {
    // 여기에 코드를 작성해주세요.
    string id;
    int lv;
    cin >> id >> lv;

    Info user={"codetree",10};

    cout << "user " << user.id << " lv " << user.lv << "\n";    

    user.id=id;
    user.lv=lv;

    cout << "user " << user.id << " lv " << user.lv;

    return 0;
}
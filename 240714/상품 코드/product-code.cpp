#include <iostream>
#include <cstring>

using namespace std;

struct Info
{
    string name;
    int code;
};

int main() {
    // 여기에 코드를 작성해주세요.
    string n;
    int c;

    cin >> n >> c;

    Info A={"codetree",50};



    cout << "product " << A.code << " is " << A.name << "\n";

    A={n,c};

    cout << "product " << A.code << " is " << A.name;


    return 0;
}
#include <iostream>
#include <cstring>

using namespace std;

    class Info
    {
        public:

            string c;
            char p;
            int t;
            
            Info(string c,char p, int t)
            {
                this->c=c;
                this->p=p;
                this->t=t;
            }
    };

int main() {
    // 여기에 코드를 작성해주세요.
    string c;
    char p;
    int t;
    cin >> c >> p >> t;

    Info rst=Info(c,p,t);
    
    cout << "secret code : " << rst.c << "\n";
    cout << "meeting point : " << rst.p << "\n";
    cout << "time : " << rst.t << "\n";



    return 0;
}
#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

struct data
{
    string date;
    string day;
    string weather;
};

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    data future[100];

    for(int i=0;i<n;i++)
    {
        cin >> future[i].date >> future[i].day >> future[i].weather;
    }


    data rain;

    for(int i=0;i<n;i++)
    {
        if(future[i].weather=="Rain")
        {
            rain=future[i];
            break;
        }
    }


    for(int i=0;i<n;i++)
    {
        if(future[i].weather=="Rain")
        {           
            if(future[i].date <= rain.date)
            {
                rain=future[i];
            }
        }
    }

    cout << rain.date << " " << rain.day << " " << rain.weather;


    return 0;
}
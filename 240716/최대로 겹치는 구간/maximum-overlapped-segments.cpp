#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n;

    int a[100],b[100];
    int c[201]={0};

    for(int i=0;i<n;i++)
    {
        cin >> a[i] >> b[i];
        for(int j=a[i]+100;j<b[i]+100;j++)
        {
            c[j]+=1;
        }
    }

    int max=0;

    for(int i=0;i<201;i++)
    {
        if(max<c[i]) max=c[i];
    }

    cout << max;

    
    
  

    

    


    return 0;
}
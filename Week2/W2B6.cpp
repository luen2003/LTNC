#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int temp;
    for(int x = -n; x <= n; x++){
        for(int y = -n; y <= n; y++){
            temp = x;
            if (temp <=0 &&y >= -(n + temp) && y <= n + temp){
                cout<<"* ";
            } else if (temp>0 &&y>=-n+temp&&y<=n-temp)
            {
                cout<<"* ";
            }
            else{
                cout<<". ";
            }
        }
        cout<<endl;
    }
    return 0;
}


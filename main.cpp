#include <iostream>
using namespace std;

int main()
{
    int x,i;
    int ar[x-1]={};
    cin>>x;
    for (i=0;i<=x-1;i++){
        cin>>ar[i];
    }
    for (i=x-1;i>=0;i--){
            cout<<ar[i]<<" ";
}
return 0;
}


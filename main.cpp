#include <iostream>
using namespace std;
int main(){
    int i,x,sum;
    sum = 0;
    cin>>i;
    int ar[i-1] ={};
        for (x=0; x<=i-1; x++)
        {
            cin>>ar[x];
        }
    for (x=0; x<=i-1; x++)
    {
      sum = sum + ar[x];
    }
    cout<<sum;
    return 0;
}

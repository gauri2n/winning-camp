#include<iostream>
using namespace std;
int pascaltriangle(int n)
{
    for (int i=0;i<n;i++){
        for(int j=0; j<n-i-1;j++){
            cout<<" ";
        }
        int val=1;
        for(int j=0;j<=i;j++){
            cout<<val<<" ";
            val=val*(i-j)/(j+1);

        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"enter the number of rows:";
    cin>>n;
    pascaltriangle(n);
    return 0;
}
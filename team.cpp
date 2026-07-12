#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
   // cout<<"Enter the number of the friend to solve the soluton"<<endl;
    cin>>n;
    int count = 0;

    int a;
    int b; 
    int c;
    for (int i = 0 ; i<n ; i++)
    {
        cin >>a>>b>>c; 
        if(a+b+c >= 2) 
        {
            count++;
        }
    }
    cout<<count <<endl;
    return 0;
}
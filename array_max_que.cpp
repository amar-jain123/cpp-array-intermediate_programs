#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sak[n];
    for(int i=0;i<n;i++)
    {
        cin>>sak[i];
    }
    int maximum=-2000000;
    for(int i=0;i<n;i++)
    {
        maximum=max(maximum,sak[i]);
        cout<<maximum<<endl;
    }
}
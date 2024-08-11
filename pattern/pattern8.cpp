//n-> number of total rows
//i-> current value of row
// concept for printing number of spaces will be same as value of i that is (j<i)
//concept for printing number of stars will be now (2n-(2i+1))

#include<iostream>
using namespace std;
void print(int n)
{
    for(int i=0;i<n;i++)
    {
        //for printing spaces
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*n-(2*i+1);j++)
        {
            cout<<"*";
        }
        for(int j=0;j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    } 
}
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        print(n);
    }
    return 0;
}
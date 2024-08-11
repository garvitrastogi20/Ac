//n-> number of total rows
//row-> current value of i
// concept for printing number of spaces will be (n-i-1)
//concept for printing number of stars will be( 2*i+1)

#include<iostream>
using namespace std;
void print(int n)
{
    for(int i=n;i<0;i++)
    {
        //for printing spaces
        for(int j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++)
        {
            cout<<"*";
        }
        for(int j=0;j<n-i-1;j++)
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
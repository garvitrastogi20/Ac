// concept will be (n-row+1)
//n-> number of total rows
//row-> current value of i
// inner loop will run till (n-row+1) times according to concept

#include<iostream>
using namespace std;
void print(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<"*";
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
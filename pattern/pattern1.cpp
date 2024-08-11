//outer loop determines of the number of lines or number of rows
//for the inner loop, focus on the number of columns and connect them somehow to the rows
//print anything you want to print inside the inner loop
//observe symmetry

#include<iostream>
using namespace std;
void print(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
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
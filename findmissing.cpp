#include<bits/stdc++.h>
using namespace std;
void findduplicate(int a[],int size)
{
    for(int i=0;i<size;i++)
    {
        int index=abs(a[i]);
        if(a[index-1]>0)
        {
            a[index-1]*=-1;
        }
    }
    for(int i=0;i<size;i++)
    {
        if(a[i]>0)
        {
            cout<<i+1<<" ";
        }
    }
}
int main()
{
    int a[]={1,1,4,3,4,4,4};
    int size=sizeof(a)/sizeof(int);
    findduplicate(a,size);
    
    return 0;
}
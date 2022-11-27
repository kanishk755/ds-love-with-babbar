

#include <iostream>

using namespace std;
void print(int *a,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int isum(int *arr,int size)
{
     print(arr,size);
    int sum=0;
    if(size==0)
    {
        return 0;
    }
  if(size==1)
  {
      return arr[0];
  }
  int rp=arr[0]+isum(arr+1,size-1);
  return rp;
}

int main()
{
 int a[5]={1,2,3,4,5};
 int ans=isum(a,5);
 cout<<ans<<endl;

    return 0;
}

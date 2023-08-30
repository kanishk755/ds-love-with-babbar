#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][4]={{1,2,3,4},{11,21,31,41},{112,211,541,411},{1111,2,1112,1114},{2213,2222,2122,12234}};
    for(int col=0;col<4;col++)
    {
        if(col&1)
        {
        for(int row=0;row<5;row++)
        {
          cout<<a[row][col]<<" "<<endl;

        }
        }
        else
        {
            for(int row=4;row>0;row--)
            {
                cout<<a[row][col]<<" "<<endl;
            }
        }

     }
     return 0;
}

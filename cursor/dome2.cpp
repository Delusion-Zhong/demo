#include <iostream>
using namespace std;
int main()
{
    //在一个新的数组中添加元素，添加  下标1 的位置 添加5 下标3 的位置 添加77
    int *Parr = new int[3]{1, 2, 3};
    int *NewParr = new int[5];
    int offset=0;
    for (int i = 0; i < 5; i++)
    {
        /* code */
        if (i==1)
        {

            /* code */
            NewParr[1]=5;
            offset++;
            continue;

        }else if (i==3)
        {
            /* code */
             NewParr[3]=77;
            offset++;
            continue;
        }
         
         NewParr[i]=Parr[i-offset];
        
        
    }
    delete Parr;

    for (int i = 0; i < 5; i++)
    {
        /* code */
        cout<<NewParr[i]<<endl;
    }
    
    cin.get();
    return 0;
}
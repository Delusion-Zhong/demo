
#include <iostream>
using namespace std;
int main()
{
    int *pArr = new int[10]{3, 5, 1, 11, 99, 66, 22, 2, 8, 6};
    int *pNEWArr = new int[8];
    int offset = 0;

    for (int i = 0; i < 10; i++)
    {
        if (i == 2 || i == 5)
        {
            /* code */
            offset++;
            continue;
        }
        pNEWArr[i - offset] = pArr[i];
    }
    delete[] pArr;

    for (int i = 0; i < 8; i++)
    {
        /* code */
        cout<<pNEWArr[i]<<endl;
    }

    cin.get();
    return 0;
}
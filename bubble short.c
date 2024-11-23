#include<stdio.h>
int main()
{
    int i,j;
    int arry[]= {1,3,2,5,6};
    int sz=sizeof(arry);
    for(i=0; i<sz; i++)

    {
        for(i=0; sz; j++)

        {
            if(arry[i]<arry[j])
            {
                arry[j]=arry[i];
            }
        }
        printf("%d",arry[i]);

    }
    //for(i=0;i<sizeof(arry);i++)
    // printf("%d"arry[i]);

}


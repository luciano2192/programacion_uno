#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vec[5] = {7,5,6,3,2};
    int aux = 0 , i , j;

    for(i=0;i<5-1;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(vec[i]>vec[j])
            {
                aux=vec[i];
                vec[i]=vec[j];
                vec[j]=aux;
            }
        }

    }

    for (i=0;i<5;i++) {
        printf("%d",vec[i]);
    }



    return 0;
}

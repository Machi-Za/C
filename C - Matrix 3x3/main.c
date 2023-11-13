#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[99][99],i,j,x,y,z,x1,y1,z1,m,n;
    printf("Matrix 3X3\n");
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("Value [%d][%d] :",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\n\n\n\n");
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            printf("%3d",a[i][j]);
        }
        printf("\n");
    }
    x=a[1][1]+a[2][2]+a[3][3];
    y=a[1][2]+a[2][3]+a[3][1];
    z=a[1][3]+a[2][1]+a[3][2];
    x1=a[1][2]-a[2][1]-a[3][3];
    y1=a[1][1]-a[2][3]-a[3][2];
    z1=a[1][3]-a[2][2]-a[3][1];
    m=(x+y+z)-(x1-y1-z1);
    printf("(%d+%d+%d)-(%d-%d-%d)=%d",x,y,z,x1,y1,z1,m);
    a[1][2]=a[2][1];
    a[1][3]=a[3][1];
    a[2][1]=a[1][2];
    printf("\n%d",a[1][2]);
    return 0;
}

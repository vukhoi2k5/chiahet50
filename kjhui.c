#include"stdio.h"

int so(int x,int y)
{

    for(x=0 ;x<=y;x++)
    {
        if(x%50 == 0)
        {
            printf("%d\n");
        }
        else
        {


        }
    }

}
int main()
{
    int x,y;
    printf("so 1 :");
    scanf("%d",&x);
    printf("nhap 2 :");
    scanf("%d",&y);
    printf("cac so chia het cho 50 la ");
    so(x,y);
}
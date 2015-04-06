#include<stdio.h>
int main()
{
    int x,y,z;
    for(x=0;x<=20;x++)
    {
        for(y=0;y<=33;y++)
        {
            z=100-x-y;
            if(x*5+y*3+z/3==100)
            printf("¹«¼¦£º %d£¬Ä¸¼¦:  %d,Ð¡¼¦: %d\n",x,y,z);
        }
    }
    getch();
    return 0;
}

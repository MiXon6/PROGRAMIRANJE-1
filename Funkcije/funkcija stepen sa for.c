#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float stepen(float k,int m)
{
    float f=1;
    int i;
    for(i=0;i<m;i++)
    {
        f=f*k;
    }
    return f;
}
void main()
{
    float x;
    int n;
    printf("unesi broj x moze i decimalan a moze i ceo\n");
    scanf("%f",&x);
    printf("unesi ceo broj koji predstavlja stepen\n");
    scanf("%d",&n);
    printf("broj %f na %d je %.2f",x,n,stepen(x,n));
}

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{   int mais, menos;
    float fmais, fmenos;
    
    scanf("%d %d\n", &mais, &menos);
    scanf("%f %f\n", &fmais, &fmenos);
    
    printf("%d %d\n", mais + menos, mais - menos);
    printf("%.1f %.1f\n",fmais + fmenos, fmais - fmenos);
    
    return 0;
}

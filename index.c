#include <stdio.h>
#include <stdlib.h>

typedef struct
{
int Num;
int Denom;
} FRAC;
FRAC Multiply_fractions (FRAC n , FRAC m)
{
FRAC ans;
ans.Num= n.Num * m.Num;
ans.Denom = n.Denom * m.Denom;
return ans;
}
FRAC Divide_fractions (FRAC n , FRAC m)
{
    FRAC ans;
    ans.Num=n.Num*m.Denom;
    ans.Denom=n.Denom*m.Num;
    return ans;
}
FRAC ADD_fractions (FRAC n , FRAC m)
{
    FRAC ans;
    ans.Num=n.Num*m.Denom+m.Num*n.Denom;
    ans.Denom=n.Denom*m.Denom;
    return ans;
}
int main()
{
FRAC N1, N2,N;
printf("Enter the numerator of the first fraction:");
scanf("%d",&N1.Num);
printf("Enter the denomenator of the first fraction:");
scanf("%d",&N1.Denom);
printf("Enter the numerator of the second fraction:");
scanf("%d",&N2.Num);
printf("Enter the denomenator of the second fraction:");
scanf("%d",&N2.Denom);
N=Multiply_fractions(N1,N2);
printf("result of N1*N2= %d / %d\n", N.Num, N.Denom);
N=Divide_fractions(N1,N2);
printf("result of N1/N2= %d / %d\n", N.Num, N.Denom);
N=ADD_fractions(N1,N2);
printf("result of N1+N2= %d / %d\n", N.Num, N.Denom);
return 0;
}


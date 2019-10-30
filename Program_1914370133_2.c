#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("         ================================================\n");
    printf("                  Nama  : Muhammad Aqhsal Raihan\n");
    printf("                  NPM   : 1914370133\n");
    printf("                  Kelas : Reguler 1D\n");
    printf("         =================================================\n");

    float a,b,c,D,x1,x2;

    printf("Nilai dari a- adalah =");
    scanf("%f",&a);
    printf("Nilai dari b- adalah =");
    scanf("%f",&b);
    printf("Nilai dari c- adalah =");
    scanf("%f",&c);

    D=(b*b)-(4*a*c);

    if (D<=0)
    {
        printf("\nAkar imajiner\n");
    }

    else if (D>0)
    {
        x1=(-b+(sqrt(D))/(2*a));
        printf("\nNilai x1=%.2f\n",x1);
        x2=(-b-(sqrt(D))/(2*a));
        printf("Nilai x2=%.2f\n",x2);
    }
    else if (D==0)
    {
        printf("\nAkar-akar persamaan kuadrat kembar");
        x1=(-b)/(2*a);
        printf("\nNilai x1=%.2f\n",x1);
        x2=x1;
        printf("Nilai x2=%.2f\n",x2);

    }

}

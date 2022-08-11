//La chicharronera por que hasta la que vende chicharrones se la sabe, este prorama ayuda a la comprension de los if y como funciona el algebra
//en c, ademas, 

#include <stdio.h>
#include <math.h>

int main(void)
{
    double Adi, Bdi, Cdi;
    double Xdi;
    double Xdip, Xdim;
    double Xdii;

    printf("Dada una ecuacion ax²+bx+c=0\n");
    printf("Introduce a:\n");
    scanf("%lf",&Adi);
    printf("Introduce b:\n");
    scanf("%lf",&Bdi);
    printf("Introduce c:\n");
    scanf("%lf",&Cdi);
    //Casoc uando la ecuacion no es cuadratica
    if(Adi==0)
    {
        Xdi=-Cdi/Bdi;
        printf("No es una ecuacion cuadratica, sino una lineal, pero su solucion es: %lf", Xdi);
    }
    //Caso cuando el determinante es mayor a cero, la ecuacion tiene soluciones reales
    if(Adi!=0 && (Bdi*Bdi-4*Adi*Cdi)>0)
    {
        Xdip=(-Bdi+sqrt(Bdi*Bdi-4*Adi*Cdi))/(2*Adi);
        Xdim=(-Bdi-sqrt(Bdi*Bdi-4*Adi*Cdi))/(2*Adi);
        printf("La ecuacion tiene soluciones reales: \nx_1=%lf y x_2=%lf", Xdip, Xdim);
    }
    //Caso con detrminante menor a cero, la cuacion tiene soluciones complejas
    if(Adi!=0 && (Bdi*Bdi-4*Adi*Cdi)<0)
    {
        //Esta variable es la aprte real de a solucion
        Xdi=(-Bdi)/(2*Adi);
        //Esta es la aprte imaginaria que se le agrega a la solucion
        Xdii=(sqrt(-Bdi*Bdi+4*Adi*Cdi))/(2*Adi);
        printf("La ecuacion tiene soluciones imaginarias: \nx_1=%lf+i%lf y x_2=%lf-i%lf", Xdip, Xdii, Xdim, Xdii);
    }
    //Caso cuando el determinante es igual a cero, la ecuacion tiene soluciones dobles
    if(Adi!=0 && ((Bdi*Bdi-4*Adi*Cdi)==0))
    {
        Xdi=(-Bdi)/(2*Adi);
        printf("La ecuacion tiene una solucion doble:\nx=%lf", Xdi);
    }
    return 0;
}

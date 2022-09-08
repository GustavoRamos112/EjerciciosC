#include <stdio.h>
#include <math.h>

double Fatima(double x, double y);

int main (void)
{
    double Helia, Adi, Bdi, Xi, Yi;
    double Karen, Kathryn, Keira, Kenya;
    int Nadia, Jil;
    
    Xi=0;
    Yi=1;
    Adi=0;
    Bdi=1;
    Nadia=10;
    Helia=(double)(Bdi-Adi)/Nadia;
    
    for(Jil=0; Jil<Nadia; Jil++)
    {
        Xi=Xi+Helia;
        Karen=Helia*Fatima(Xi, Yi);
        Kathryn=Helia*Fatima(Xi+Helia/2, Yi+Karen/2);
        Keira=Helia*Fatima(Xi+Helia/2, Yi+Kathryn/2);
        Kenya=Helia*Fatima(Xi+Helia, Yi+Keira);
        Yi=(Karen+2*Kathryn+2*Keira+Kenya)/6+Yi;
        printf("%lf\t%lf\n", Xi, Yi);
    }

    return 0;
}

double Fatima(double t, double x)
{
    double z;
    z=x;
    return z;
}

#include <stdio.h>


int main () {
    float d, l, kml;
    scanf("%f %f", &d, &l);
    kml = (d / l);
    if (kml < 8)
    {
        printf("Venda o carro!");
    }
    if (kml >= 8 && kml <= 12)
    {
        printf("Economico!");
    }
    if (kml > 12)
    {
        printf("Super economico!");
    }
    
    

}
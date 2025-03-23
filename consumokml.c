#include <stdio.h>


int main () {
    float d, l, kml;
    scanf("%d %d", &d, &l);
    kml = (d / l);
    if (kml < 8.f)
    {
        printf("Venda o carro!");
    }
    if (kml >= 8.f && kml <= 12.f)
    {
        printf("Economico!");
    }
    if (kml > 12.f)
    {
        printf("Super economico!");
    }
    
    

}
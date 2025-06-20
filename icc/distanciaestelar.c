#include <stdio.h>
#include <math.h>

typedef struct P
{
    float xp;
    float yp;
    float zp;
}P;
typedef struct R
{
    float x0;
    float y0;
    float z0;
}R;
typedef struct vetor
{
    float x;
    float y;
    float z;
}vetor;

vetor produto(vetor a, vetor b) {
    vetor r;
    r.x = (a.y*b.z) - (a.z*b.y);
    r.y = (a.z*b.x) - (a.x*b.z);
    r.z = (a.x*b.y) - (a.y*b.x);
    return r;
}

float modulo(vetor v) {
    return sqrt(v.x*v.x + v.y*v.y + v.z*v.z);
}

int main () {
    vetor v1, vetorpr0;
    R r1;
    P p1;
    

    scanf("%f %f %f %f %f %f %f %f %f\n", &p1.xp, &p1.yp, &p1.zp, &r1.x0, &r1.y0, &r1.z0, &v1.x, &v1.y, &v1.z);

    vetorpr0.x = (r1.x0 - p1.xp);
    vetorpr0.y = (r1.y0 - p1.yp);
    vetorpr0.z = (r1.z0 - p1.zp);

    vetor vetornorma = produto(v1, vetorpr0);


    float distancia = modulo(vetornorma) / modulo(v1);

    printf("%.6f", distancia);

  

}



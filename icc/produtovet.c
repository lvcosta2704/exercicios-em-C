#include <stdio.h>
typedef struct vetor
{
    float x;
    float y;
    float z;
}vetor;

int main () {
    vetor v1, v2;
    scanf("%f %f %f", &v1.x, &v1.y, &v1.z);
    scanf("%f %f %f", &v2.x, &v2.y, &v2.z);

    float xcalc = (v1.y*v2.z) - (v1.z*v2.y);
    float ycalc = (v1.z*v2.x) - (v1.x*v2.z);
    float zcalc = (v1.x*v2.y) - (v1.y*v2.x);

    if (xcalc == 0.0f) xcalc = 0.0f;
    if (ycalc == 0.0f) ycalc = 0.0f;
    if (zcalc == 0.0f) zcalc = 0.0f;


    printf("%.0f %.0f %.0f", xcalc, ycalc, zcalc);

}
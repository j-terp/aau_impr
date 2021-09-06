#include <stdio.h>  

int main(void){
    float first_number, xxx, sidsteTal;
    printf("Give me three:\n");
    scanf("%f%f%f", &first_number, &xxx, &sidsteTal);
    printf("Theresult: %f\n", (first_number + xxx + sidsteTal) / 3.0);
    return 0;
}
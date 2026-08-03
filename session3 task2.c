#include<stdio.h>
int main(){
    float gst = 18;
    float amount = 300;
    float total;
    total = amount+(amount*gst/100);
    printf("zometo order = %f\n",amount);
    printf("gst = %f\n",gst);
    printf("total =%f\n",total);
    return 0;
    
}
#include<stdio.h>
long convert(long h,long m,long s);
void main() {
    long hour,minute,second,total;
    scanf("%ld %ld %ld",&hour,&minute,&second);
    total = convert(hour,minute,second);
    printf("Total seconds = %ld\n",total);
}
long convert(long h,long m,long s) {
    return (h*3600)+(m*60)+s;
}

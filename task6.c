#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main(){
    double i1 = 0, i2 = 0, u1 = 0, u2 = 0, r1 = 0, r2 = 0;
    printf("ВВедите напряжение: /n");
    scanf("%lf, &u1");
    scanf("%lf, &u2");
    printf("ВВедите сопротивление: /n");
    scanf("%lf, &r1");
    scanf("%lf, &r2");
    i1 = u1/r1;
    i2 = u2/r2;
    if(i1>i2){
        printf("Сила тока в первой цепи больше,чем во второй");
    }
    else{
        printf("Сила тока во второй цепи больше, чем в первой");
    }
    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main(){
    double i1 = 0, i2 = 0, u1 = 0, u2 = 0, r1 = 0, r2 = 0;
    printf("ВВедите напряжение: /n");
    scanf("%lf, &u1");
    scanf("%lf, &u2");
    printf("ВВедите сопротивление: /n");
    scanf("%lf, &r1");
    scanf("%lf, &r2");
    i1 = u1/r1;
    i2 = u2/r2;
    if(i1>i2){
        printf("Сила тока в первой цепи больше,чем во второй");
    }
    else{
        printf("Сила тока во второй цепи больше, чем в первой");
    }
    return 0;
}
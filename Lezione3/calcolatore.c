//
//  main.c
//  max
//
//  Created by Salvo Firera on 03/10/18.
//  Copyright © 2018 Salvo Firera. All rights reserved.
//

#include <stdio.h>

int main()
{
    float a;
    float b;
    char o;
    double res=0;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%s",&o);
    switch (o) {
        case'+': res=res+a+b;printf("%.1f",res); break;
        case'-': res=res+a-b;printf("%.1f",res); break;
        case'/': res=res+a/b;printf("%.1f",res); break;
        case'%': res=res+(int)a%(int)b;printf("%.1f",res); break;
               }
    return 0;
}




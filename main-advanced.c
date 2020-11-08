#include <stdio.h>
#include <stdlib.h>

void main()
{
    float amount, converted_money; 
    int currency, to_currency;
    printf("Welcome to currency converter\n");
    printf("Enter the amount of money you want to convert: ");
    scanf("%f", &amount);
    printf("The currency of your money [USD(0)-EGP(1)-EURO(2)-YEN(3)]: ");
    scanf("%x", &currency);
    printf("Convert to [USD(0)-EGP(1)-EURO(2)-YEN(3)]: ");
    scanf("%x", &to_currency);
    if (currency == 0 && to_currency == 1)
    {
        converted_money = amount * 15.69;
        printf("%.2f$ are equal to %.2f Egypt pound.", amount, converted_money);
    }
    else if (currency == 0 && to_currency == 2)
    {
        converted_money = amount * 0.84;
        printf("%.2f$ are equal to %.2f Euro.", amount, converted_money);
    }    
    else if (currency == 0 && to_currency == 3)
    {
        converted_money = amount * 103.35;
        printf("%.2f$ are equal to %.2f Yen.", amount, converted_money);
    }
    else if (currency == 1 && to_currency == 0)
    {
        converted_money = amount / 15.69;
        printf("%.2f EGP are equal to %.2f$", amount, converted_money);
    }
    else if (currency == 1 && to_currency == 2)
    {
        converted_money = amount * 0.054;
        printf("%.2f EGP are equal to %.2f Euro", amount, converted_money);
    }
    else if (currency == 1 && to_currency == 3)
    {
        converted_money = amount * 6.59;
        printf("%.2f EGP are equal to %.2f Yen", amount, converted_money);
    }
    else if (currency == 2 && to_currency == 0)
    {
        converted_money = amount * 1.19;
        printf("%.2f Euro are equal to %.2f$", amount, converted_money);
    }
    else if (currency == 2 && to_currency == 1)
    {
        converted_money = amount * 18.63;
        printf("%.2f Euro are equal to %.2f EGP", amount, converted_money);
    }
    else if (currency == 2 && to_currency == 3)
    {
        converted_money = amount * 122.74;
        printf("%.2f Euro are equal to %.2f Yen", amount, converted_money);
    }
    else if (currency == 3 && to_currency == 0)
    {
        converted_money = amount * 0.0097;
        printf("%.2f Yen are equal to %.2f$", amount, converted_money);
    }
    else if (currency == 3 && to_currency == 1)
    {
        converted_money = amount * 0.15;
        printf("%.2f Yen are equal to %.2f EGP", amount, converted_money);
    }
    else if (currency == 3 && to_currency == 2)
    {
        converted_money = amount * 0.0081;
        printf("%.2f Yen are equal to %.2f Euro", amount, converted_money);
    }
}

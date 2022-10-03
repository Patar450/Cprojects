#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double calculation(double price, int money){
 return  price = ((double)money/100) - price;
}

void taskA()
{
    printf("Hello, my name is Patrick Frendo.\n");
}

void taskB()
{
    int scores;

    printf("Enter the final scores:\n");
    scanf("%d", &scores);

    if (scores >= 70)
    {
        printf("First\n");
    }
    else if (scores > 61)
    {
        printf("2:1\n");
    }
    else if (scores >= 50)
    {
        printf("2:2\n");
    }
    else
    {
        printf("3rd\n");
    }
}

void taskD(int i)
{

    int number = 1;

    while (i < 51)
    {
        number = (i * (i + 1)) / 2;
        printf("%d\n", number);
        i++;
    }
}

void taskE()
{
    char items[5][30];
    int buy = 0;
    double price = 0.00;
    strcpy(items[0], "#1 Chocolate for £2.00");
    strcpy(items[1], "#2 Twisties for 1£");
    strcpy(items[2], "#3 Dumbo for 50p");
    strcpy(items[3], "#4 Salad for 20p");
    strcpy(items[4], "#5 Happiniess for 10p");

    printf("Welcome to the vending machine in C, these are the items we have in stock:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n", items[i]);
    }

    printf("What would you like to buy?\n");
    scanf("%d", &buy);

    if (buy > (sizeof(items) / sizeof(items[0])) || (buy <= 0))
    {
        printf("Error: Invalid input please try again. ");
    }
    else
    {
        int money;
        printf("What amount will you deposit today?");
        scanf("%d", &money);

        switch (buy)
        {
        case 1:
        price = 2.00;
            price = calculation(price, money);
            break;
        case 2:
        price = 1.00;
            price = calculation(price, money);
            break;
        case 3:
        price = 0.50;
            price = calculation(price, money);
            break;
        case 4:
        price = 0.20;
            price = calculation(price, money);
            break;
        case 5:
        price = 0.10;
            price = calculation(price, money);
            break;
        }
        printf("Thank you, for choosing %s the change for your %dp deposit is £ %.2f \n", items[buy],money, price);
    }
}


int main(int argc, char **argv)
{

    int menu = atoi(argv[1]);
    int i = 0;
    switch (menu)
    {
    case 1:
        taskA();
        break;
    case 2:
        taskB();
        break;
    case 3:
        taskD(i);
        break;
    case 4:
        taskE();
        break;
    default:
        printf("Unexpcted error");
    }
    return 0;
}
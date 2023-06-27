#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#define coffee_price 4500
#define sand_price 6000

void menuList();
void menuSelection(int coffee_count, int sand_count, int total_count);
TESTED

int main(void)
{
    int coffee_count = 0;
    int sand_count = 0;
    int totalCost = 0;
    printf("Welcome to Coffee shop.\n");
    printf("which do you want?\n");
    menuList();
    menuSelection(coffee_count, sand_count, total_count);

    totalCalculation(coffee_count, sand_count);
    printf("\n\n\n === Processing === \n\n\n");
    printf("Completed !! \n");

    int totalPrice = 0;
    if(sand_count > 0 && coffee_count > 0){
        totalPrice = (sand_count * sand_price) + (coffee_count *coffee_price);

    }else
    {
        totalPrice = (sand_count * sand_price) + 
        ((coffee_count *coffee_count - 1000));
    }
    printf("Your total price is %d", totalPrice);
    
   
} 
void menuList()
{
    printf("1.coffee\n");
    printf("2.sandwich\n");
    printf("3.Do nothings\n");
}

void menuSelection(int coffee_count, int sand_count)
{
    int menuSelect = 0;
    while(1)
    {
        scanf_s("%d", &menuSelect);
        if(menuSelect == 1)
        {
            coffee_count++;
            printf("anything else?");
            menuList();
            scanf_s("%d", &menuSelect);
        }
        else if(menuSelect == 2)
        {
            sand_count++;
            printf("anything else?");
            menuList();
            scanf_s("%d", &menuSelect);
        }
        else if(menuSelect == 3)
        {
            printf("Thank you for order!");
            break;
        }
    }
   
}


#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void){
    
    float owedAmount = 0.00;
    
    //Get floating number from user with validations.
    while(owedAmount <= 0.00){
        owedAmount = get_float("How much change is owed ?\n");
    }
    
    //make the owed amount integer value.
    int amount = (int)round(owedAmount * 100);
    
    //this will keep track of the total coins required
    int totalCoins = 0;
    
    //This code block will get the no of coins from each coin & remainder.
    totalCoins = amount/25;
    printf(".25 Coins: %i\n", amount / 25);
    amount = amount % 25;
    totalCoins += amount/10;
    printf(".10 Coins: %i\n", amount / 10);
    amount = amount % 10;
    totalCoins += amount/5;
    printf(".5 Coins: %i\n", amount / 5);
    amount = amount % 5;
    totalCoins += amount/1;
    printf(".1 Coins: %i\n", amount / 1);
    printf("Total Coins: %i\n", totalCoins);
}

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    long creditCardNumber = 0;
    creditCardNumber = get_long("Enter your credit card no: \n");
    long originalCardNumber = creditCardNumber;
    
    int counter = 0;
    int productAtOdd = 0;
    int sumAtEven = 0;
    
    while(creditCardNumber != 0)
    {
        
        //printf("N: %li C: %i\n", creditCardNumber, counter);
        
        if (counter % 2 != 0){
            int odd = creditCardNumber % 10;
            //printf("M %i C %i\n", mod, counter);
            int digitOne = 0;
            int digitTwo = 0;
            
            if (odd * 2 >= 10){
                digitOne = (odd * 2) % 10;
                digitTwo = (odd * 2) / 10;
            }
            
            productAtOdd = productAtOdd + (((odd * 2) <= 10) ? odd * 2 : (digitOne + digitTwo));
           //printf("at counter %i value %i digit %i, %i\n", counter, productAtOdd, digitOne , digitTwo);
            
        }else{
            
            int even = creditCardNumber % 10;
            sumAtEven = sumAtEven + even;
            
        }
        
        creditCardNumber = creditCardNumber / 10;
        counter++;
    }
    //printf("%i \n", productAtOdd);
    //printf("%i \n", sumAtEven);
    
    int totalSum = productAtOdd + sumAtEven;
    //printf("%i \n", totalSum);
    bool valid;
    
    printf("%i\n", totalSum);
    
    if (totalSum % 10 == 0){
        valid = true;
    }else{
        valid = false;
    }
    
    bool visa = originalCardNumber/1000000000000000 == 4 || originalCardNumber/1000000000000 == 4;
    
    bool amex = originalCardNumber/10000000000000 == 37 || originalCardNumber/10000000000000 == 34;
    
    bool master = originalCardNumber/100000000000000 == 51 || originalCardNumber/100000000000000 == 52 || originalCardNumber/100000000000000 == 53 || originalCardNumber/100000000000000 == 54 || originalCardNumber/100000000000000 == 55;
    
    if(visa && valid){
        printf("VISA\n");
    }else if(amex && valid){
        printf("AMEX\n");
    }else if(master){
        printf("MASTERCARD\n");
    }else{
        printf("INVALID\n");
    }
    
    //printf("%s\n", valid);
}

#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

// c[i] = (p[i] + k) % 26

int main(int argc, string argv[])
{
    
    //printf("%i\n",argc);
    if(argc == 1 || argc > 2){
        printf("Usage: ./caesar key\n");
       
        return 1;
    }
    else
    {
        int lengthOfArgv = strlen(argv[1]);
        //printf("%i\n", lengthOfArgv);
        
        for(int i = 0; i < lengthOfArgv; i++)
        {
            //printf("in the for loop %c\n", argv[1][i]);
            if (isdigit(argv[1][i]) == 0)
            {
                printf("Usage: ./caesar key\n");
                return 1;
            }
        }
        
        string plaintext = get_string("plaintext: ");
        int lengthOfPlainText = strlen(plaintext);
        int ciperBy = atol(argv[1]);
        //int k = (int)ciperBy;
        //printf("%i\n",ciperBy);
        printf("ciphertext: ");
        
        for(int i = 0; i < lengthOfPlainText; i++)
        {
            //handle alphabet
            if(isalpha(plaintext[i]) != 0)
            {
                //handle simple charachter set.
                if((int)plaintext[i] >= 97 && (int)plaintext[i] <= 122)
                {
                    int simpleCiperdChar = ((int)plaintext[i] - 97) + ciperBy;
                    simpleCiperdChar = (simpleCiperdChar % 26) + 97;
                    
                    //printf("%c - ", plaintext[i]);
                    //printf("%i - ", simpleCiperdChar);
                    printf("%c", simpleCiperdChar);
                    
                }
                //handled capital charachter set.
                else
                {
                    int capitalCiperdChar = ((int)plaintext[i] - 65) + ciperBy;
                    capitalCiperdChar = (capitalCiperdChar % 26) + 65;
                    
                    //printf("%c - ", plaintext[i]);
                    //printf("%i - ", capitalCiperdChar);
                    printf("%c", capitalCiperdChar);
                }
            }
            //handle symbols
            else
            {
                printf("%c", plaintext[i]);
            }
            
        }
        printf("\n");
        
    }
    
    
}


//for(int i = 0; i < lengthOfPlainText; i++)
//{
//    if(isalpha(plaintext[i]) != 0 && (int)plaintext[i] >= 97 && (int)plaintext[i] <= 122)
//    {
//        printf("%c - ", plaintext[i]);
//        int ciperdChar = ((int)plaintext[i] - 71) + ciperBy;
//        ciperdChar = (ciperdChar % 26);
//        printf("%i - ", plaintext[i]);
//        printf("%i - ", ciperdChar % 26);
//        printf("%i - ", (122 - (ciperdChar % 26)));
//        printf("%c\n", ciperdChar);
//
//    }
//    else
//    {
//        printf("%c", plaintext[i]);
//    }
//
//}
//printf("\n");

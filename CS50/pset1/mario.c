#include <stdio.h>
#include <cs50.h>

int main(void)
{
    
    int height;
    char selection;
    
    //Run the app continesly if the user required
    do{
        //Get the height from the user
        do{
            height = get_int("Height: \n");
        }
        while(height <= 0);
        
        //printing the rows matching the given height
        //outer loop print the rows
        for(int row = 1; row <= height; row++)
        {
            //Inner loop to print the columns matching height given
            for(int col = 1; col <= height; col++){
               //printing the # if column value is more than height - row (Test Value)
                if(col > (height-row)){
                    printf("#");
                    
                    //Printing the second brick wall after a void to fall through
                    //When the inner (column) loop == height then print a space
                    //Print # until i(1) equal or less than current row value
                    if(col == height){
                        printf("  ");
                        for(int i = 1; i <= row; i++){
                            printf("#");
                        }
                    }
                }else {
                    //Print space when the below test values fails
                    printf(" ");
                }
            }
            //Change the row.
            printf("\n");
        }
        selection = get_char("Do you want to continue? (Y/N)");
    }
    while(selection == 'y' || selection == 'Y');
}

//Test values at column 1 checking if 1 is more than height(5) - row)
//1 > 5-1 = 4 -> false
//1 > 5-2 = 3 -> false
//1 > 5-3 = 2 -> false
//1 > 5-4 = 1 -> false
//1 > 5-5 = 0 -> true go head & print #

//Test values for second bricks 1st row
//1 <= 1 -> true print #
//1 <= 2 -> false exit the loop

//sudo code
//1.get the height from the user
//2.start the row
//3.start the col
//4.if the column is less than the height - row then print space
//5.if the column is greater than the height - row then print #
//6.start from the 3
//7.stop printing columns when height is achieved.
//8.change the row.
//9.Start from  the 2


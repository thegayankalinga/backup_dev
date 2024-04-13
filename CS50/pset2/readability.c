#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>
#include <wctype.h>

int calculateGrade(int letters, int words, int sentences);

int main (void)
{
    string text = get_string("Text: \n");
    int letters = 0;
    int words = 1;
    int sentences = 0;
    
    int lengthOfText = strlen(text);
    
    for(int i = 0; i < lengthOfText; i++)
    {
        if((isalpha(text[i]) || iswpunct(text[i])) && text[i] != '?')
        {
            letters++;
        }
        
        if(isspace(text[i]))
        {
            words++;
        }
        if(text[i] == '!' || text[i] == '.' || text[i] == '?')
        {
            sentences++;
        }
    }
    
    printf("S: %i, W: %i, L: %i\n", sentences, words, letters);
    
    int grade = calculateGrade(letters, words, sentences);
    
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }else if(grade >= 16)
    {
        printf("Grade 16+\n");
    }else{
        printf("Grade %i\n", grade);
    }
}

int calculateGrade(int letters, int words, int sentences)
{
    //printf("%i\n", letters);
    float l = letters / (float)words * 100.0;
    float s = sentences / (float)words * 100.0;
    //printf("L: %f, S: %f\n", l, s);
    
    int index = 0.0588 * l - 0.296 * s - 15.8;
    return index;
}

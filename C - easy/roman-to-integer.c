/*Date of submission: 5 November 2023
Time taken to write: 22 minutes 4 seconds
Runtime: 3ms, Beats 87.14% of users with C
Memory: 6.52MB, Beats 67.51% of users with C
*/

#include <stdio.h>

int romanToInt(char* s) {
    int output = 0;
    int i=0;
    while (i<strlen(s))
    {
        if (s[i] == 'M')
        {
            output += 1000;
        }
        else if (s[i] == 'D')
        {
            output += 500;
        }
        else if (s[i] == 'C')
        {
            if (s[i+1] == 'D')
            {
                output += 400;
                i += 1;
            }
            else if (s[i+1] == 'M')
            {
                output += 900;
                i += 1;
            }
            else
            {
                output += 100;
            }
            
        }
        else if (s[i] == 'L')
        {
            output += 50;
        }
        else if (s[i] == 'X')
        {
            if (s[i+1] == 'L')
            {
                output += 40;
                i += 1;
            }
            else if (s[i+1] == 'C')
            {
                output += 90;
                i += 1;
            }
            else
            {
                output += 10;
            }
            
        }
        else if (s[i] == 'V')
        {
            output += 5;
        }
        else
        {
            if (s[i+1] == 'V')
            {
                output += 4;
                i+= 1;
            }
            else if (s[i+1] == 'X')
            {
                output += 9;
                i+= 1;
            }
            else
            {
                output += 1;
            }
        }
        i+=1;
    }
    return output;
}

int main()
{
    char charset[50];
    printf("Enter roman number: ");
    scanf("%s", charset);
    printf("\nresult: %d", romanToInt(charset));
    return 0;
}
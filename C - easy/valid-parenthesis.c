/*Date of submission: 5 November 2023
Time taken to write: 1 hour 57 minutes 40 seconds
Runtime: 3ms, Beats 40.08% of users with C
Memory: 6.28MB, Beats 675.26% of users with C
*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char* s) {
    int len = strlen(s);
    if (len % 2 != 0)
    {
        return false;
    }
    else if (s[strlen(s)-1] == '(' || s[strlen(s)-1] == '{' || s[strlen(s)-1] == '[')
    {
        return false;
    }
    else if(s[0] == ')' || s[0] == '}' || s[0] == ']')
    {
        return false;
    }
    else
    {
        int top = -1;
        char stack[len];
        for (int i=0; i<len; i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                top+=1;
                stack[top] = s[i];
            }
            else if(s[i] == ')' && top > -1 && stack[top] == '(')
            {
                top-=1;
            }
            else if(s[i] == '}' && top > -1 && stack[top] == '{')
            {
                top-=1;
            }
            else if(s[i] == ']' &&  top > -1 && stack[top] == '[')
            {
                top-=1;
            }
            else
            {
                return false;
            }
        }
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}



int main() {
    // Write C code here
    char charset[50];
    scanf("%s", charset);
    printf("\nresult: %d", isValid(charset));
    return 0;
}
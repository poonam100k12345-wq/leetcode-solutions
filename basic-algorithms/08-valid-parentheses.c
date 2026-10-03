#include <stdio.h>

int isValid(char *s)
{
    char stack[1000];
    int top = -1;

    for (int i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            stack[++top] = s[i];
        }
        else
        {
            if (top == -1)
                return 0;

            char open = stack[top--];

            if ((s[i] == ')' && open != '(') ||
                (s[i] == ']' && open != '[') ||
                (s[i] == '}' && open != '{'))
            {
                return 0;
            }
        }
    }

    return top == -1;
}

int main()
{
    char test1[] = "()[]{}";
    printf("Test 1 Result: %s\n",
           isValid(test1) ? "Valid" : "Invalid");

    char test2[] = "([)]";
    printf("Test 2 Result: %s\n",
           isValid(test2) ? "Valid" : "Invalid");

    return 0;
}
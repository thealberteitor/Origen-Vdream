#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static char** generate_Parenthesis(int n, int* returnSize)
{
    int left_num, right_num, cap = 5000, ctr = 0;
    char *stack = malloc(2 * n + 1);
    char **parentheses = malloc(cap * sizeof(char *));

    char *p = stack;
    left_num = right_num = 0;
    stack[2 * n] = '\0';

    while (p != stack || ctr == 0) {
        if (left_num == n && right_num == n) {
            parentheses[ctr] = malloc(2 * n + 1);
            strcpy(parentheses[ctr], stack);
            ctr++;

            while (--p != stack) {
                if (*p == '(') {
                    if (--left_num > right_num) {
                        *p++ = ')';
                        right_num++;
                        break;
                    }
                } else {
                    right_num--;
                }
            }
        } else {
            /* forward */
            while (left_num < n) {
                *p++ = '(';
                left_num++;
            }
            while (right_num < n) {
                *p++ = ')';
                right_num++;
            }
        }
    }

    *returnSize = ctr;
    return parentheses;
}

int main(void)
{
    int i, ctr;
    i = 5;
    char ** lists = generate_Parenthesis(i, &ctr);
    for (i = 0; i < ctr; i++) {
        printf("%s\n", lists[i]);
    }
    return 0;
}

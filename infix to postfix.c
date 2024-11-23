#include <stdio.h>
#include <ctype.h>
#define MAX 30
int TOP = -1;
char STACK[MAX];

void PUSH(char k) {
    if (TOP == MAX - 1) {
        printf("Stack overflow");
        return;
    }
    STACK[++TOP] = k;
}

char POP() {
    int val;
    if (TOP == -1) {
        printf("Stack underflow");
        return '\0';
    }
    val = STACK[TOP--];
    return val;
}

int priority(char x) {
    if (x == '+' || x == '-') return 1;
    if (x == '*' || x == '/') return 2;
    return 0;
}

void main() {
    int i = 0, j = 0;
    char exp[MAX], res[MAX], c, x;
    printf("Enter infix expression: ");
    scanf("%s", &exp);
    for (i = 0; exp[i]; i++) {
        c = exp[i];
        if (isalnum(c)) res[j++] = c;
        else if (c == '(') PUSH(c);
        else if (c == ')') {
            while (x = POP()) {
                if (x == '(') break;
                res[j++] = x;
            }
        }
        else {
            while (priority(c) <= priority(STACK[TOP])) {
                res[j++] = POP();
            }
            PUSH(c);
        }
    }
    while (TOP != -1) res[j++] = POP();
    res[j] = '\0';
    printf("%s", res);
}
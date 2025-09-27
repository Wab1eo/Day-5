#include <stdio.h>
#define NMAX 10

int input(int *a, int *n);
void output(int *a, int n);
void squaring(int *a, int n);

int main()
{
    int n, data[NMAX];
    input(data, &n);
    squaring(data, n);
    output(data, n);

    return 0;
}

int input(int *a, int *n)
{
    if (scanf("%d", n) != 1 || *n < 1 || *n > NMAX){
        printf("n/a\n");
        return 1;
    }
    for(int *p = a; p - a < *n; p++)
    {
        if (scanf("%d", p) != 1) {
            printf("n/a\n");
            return 1;
        }
    }
}

void output(int *a, int n)
{
    for (int *p = a; p - a < n; p++) {
        if (p != a) {
            printf(" ");
        }
        printf("%d", *p);
    }
    printf("\n");
}

void squaring(int *a, int n)
{
    for(int *p = a; p - a < n; p++){
        *p = *p * *p;
    }
}
#include <stdio.h>
#include <limits.h>
#include <inttypes.h>

int main()
{
    int a, b;

    scanf("%d%d\n", &a, &b);

    long long sum = (long long)a + (long long)b;
    // printf("%lld", sum);

    printf("Sum of num is : %" PRIu64 "", sum);

    return 0;
}
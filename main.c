#include <stdio.h>
#include <signal.h>

#define FG_LYELLOW "\033[1;33m"
#define RESET_ALL "\033[0m"

#define TEST(num, expr) \
    printf("TEST %d:\n", num); \
    expr; \
    printf("\n");

void sigsegv(int sig)
{
    (void)sig;
    printf("Segmentation fault caught!\n");
}

int main(int ac, char **av)
{
    signal(SIGSEGV, sigsegv);
    printf(FG_LYELLOW "category: mix\n" RESET_ALL);

    if (ac != 1)
        printf("Test number: %s\n", av[1]);
    printf("\n");

    TEST(1, printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%",
        'A', "42", 42, 42, 42, 42, 42,
        'B', "-42", -42, -42, -42, -42, 42,
        'C', "0", 0, 0, 0, 0, 42, 0
    ));

    return 0;
}

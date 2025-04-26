#include "ft_printf.h"

int main()
{
	unsigned int un = 424242;
	int n = -42;
	int	n1 = 15;
	char c = 'c';
	char *str = NULL;
	int counterft = 0;
	int counteroriginal = 0;

	ft_printf("===== My printf =====\n\n");
	counterft += ft_printf("Test char: %c\n", c);
	counterft += ft_printf("Test string: %s\n", str);
	counterft += ft_printf("Test pointer: %p\n", &str);
	counterft += ft_printf("Test integer: %d\n", n);
	counterft += ft_printf("Test unsigned: %u\n", un);
	counterft += ft_printf("Test hexLOW: %x\n", n1);
	counterft += ft_printf("Test hexUP: %X\n", n1);
	counterft += ft_printf("Test percent: %%\n");
	ft_printf("Return my printf: %d\n\n", counterft);

	ft_printf("===== Original printf =====\n\n");
	counteroriginal += printf("Test char: %c\n", c);
	counteroriginal += printf("Test string: %s\n", str);
	counteroriginal += printf("Test pointer: %p\n", &str);
	counteroriginal += printf("Test integer: %d\n", n);
	counteroriginal += printf("Test unsigned: %u\n", un);
	counteroriginal += printf("Test hexLOW: %x\n", n1);
	counteroriginal += printf("Test hexUP: %X\n", n1);
	counteroriginal += printf("Test percent: %%\n");
	printf("Return original printf: %d\n\n", counteroriginal);
}


//#include "ft_printf.h"

//int ft_printf(const char *format, ...);
//int main(void)
//{
//    int ret_printf, ret_ft_printf;
//    int fdclone;
//    printf("Testing printf and ft_printf with closed fd\n\n");
//    fdclone = dup(1);
//    close(1);
//    ret_printf = printf("This should not be printed\n");
//    ret_ft_printf = ft_printf("This should not be printed\n");
//    dup2(fdclone, 1);
//    printf("Printf return value: %d\n", ret_printf);
//    printf("ft_printf return value: %d\n", ret_ft_printf);
//    if (ret_printf == ret_ft_printf && ret_printf == -1)
//        printf("\nSuccess! Both functions correctly returned -1 on error.\n");
//    else
//        printf("\nTest failed! printf: %d, ft_printf: %d (both should be -1)\n",
//               ret_printf, ret_ft_printf);
//    close(fdclone);
//    return 0;
//}
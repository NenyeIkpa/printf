#include <stdio.h>

int _printf(const char *format, ...);

int main()
{
	 int len;
	 int len2;
	char *str = "hello";
	char *name = "John";
	_printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    printf("percent - percent->> mine returns %d while printf returns %d.\n", len2, len);
	len = printf(" Say% %s to %s", str, name);
	printf("\n");
	len2 = _printf(" Say% %s to %s", str, name);
	printf("\n");
	printf("percent - space - percent --> mine returns %d while printf returns %d.\n", len2, len);
	  len = printf(" Say% %s to %s, okay?%", str, name);
        printf("\n");
        len2 = _printf(" Say% %s to %s, okay?%", str, name);
        printf("\n");
	printf("ending with percent --> mine returns %d while printf returns %d.\n", len2, len);

	return (0);
}
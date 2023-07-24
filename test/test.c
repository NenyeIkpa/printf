#include <stdio.h>

int _printf(const char *format, ...);

int main()
{
	 int len;
	 int len2;
	char *str = "hello";
	char *name = "John";
	 len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
      printf("let's try return --> mine returns %d while printf returns %d.\n", len2, len);
	_printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    printf("percent - percent->> mine returns %d while printf returns %d.\n", len2, len);
	len = printf("Say %s to %s", str, name);
	printf("\n");
	len2 = _printf("Say %s to %s", str, name);
	printf("\n");
	printf("percent - space - percent --> mine returns %d while printf returns %d.\n", len2, len);
	  len = printf("Say% %s to %s, okay?%", str, name);
        printf("\n");
        len2 = _printf("Say% %s to %s, okay?%", str, name);
        printf("\n");
	printf("ending with percent --> mine returns %d while printf returns %d.\n", len2, len);
	   len =  _printf("Unknown:[%r]\n");
    	len2 = printf("Unknown:[%r]\n");
        printf("ending with percent --> mine returns %d while printf returns %d.\n", len2, len);
	   len =  _printf("Unknown: Hello John Q%");
	   printf("\n");
        len2 = printf("Unknown: Hello John Q%");
	printf("\n");
	 printf("ending with percent --> mine returns %d while printf returns %d.\n", len2, len);
	len =  _printf("Unknown:[%]\n");
        len2 = printf("Unknown:[%]\n");
	len =  _printf("Unknown:Hello%\n");
        len2 = printf("Unknown:Hello%\n");
	   printf("ending with percent --> mine returns %d while printf returns %d.\n", len2, len);
	   len =  _printf(NULL);
        len2 = printf(NULL);
	 printf("ending with percent --> mine returns %d while printf returns %d.\n", len2, len);
	len =  _printf("NULL\n");
        len2 = printf("NULL\n");
	 printf("ending with percent --> mine returns %d while printf returns %d.\n", len2, len);
	return (0);
}

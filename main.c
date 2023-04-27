#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2;
	/*char *str = "You are tasked to come up with solutions for the tasks below yourself to meet with the above learning objectives.You will not be able to meet the objectives of this or any following project by copying and pasting someone else’s work.You are not allowed to publish any content of this project.Any form of plagiarism is strictly forbidden and will result in removal from the program.";
  
    _printf("Let's print a simple sentence.\n");
    _printf("%c", 'S');
    printf("\n");
    _printf("A char inside a sentence: %c. Did it work?\n", 'F');
    _printf("Let'see if the cast is correctly done: %c. Did it work?\n", 48);
    _printf("%s", "This sentence is retrieved from va_args!\n");
    _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
    _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
    _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
   
    _printf("%%");
    _printf("\n");

    _printf("Should print a single percent sign: %%\n");
    _printf("%s%c%c%c%s%%%s%c", "Loading ", '.', '.', '.', " 99", " Please wait", '\n');
    _printf("css%ccs%scscscs", 'T', "Test");
    _printf("\n");
    _printf(str);
    _printf("\n");
    _printf(NULL);
    _printf("%c", '\0');
    _printf("%");
    _printf("%!\n");
    _printf("\n");
      
    _printf("%K\n");

    _printf("man gcc:\n%s", str);*/
	/*len = _printf(NULL);
	len2 = printf(NULL);
	printf("%d", len);
	printf("\n");
	printf("%d", len2);
	printf("\n");
	
	len = _printf("%c", '\0');
	len2 = printf("%c", '\0');
	printf("%d", len);
	printf("\n");
	printf("%d", len2);
	printf("\n");*/
    len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
    len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", "know");
	printf("%d", len);
	printf("\n");
	printf("%d", len2);
	printf("\n");
    
    len = _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
     len2 = printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
	printf("%d", len);
	printf("\n");
	printf("%d", len2);
	printf("\n");
    
    len = _printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
    len2 = printf("%c%cth %s%s a%cg%s: Y%sou %s no%ching%s Snow.%c", 'W', 'i', "some ", "more", 'r', "s", "", "know", 't', ", Jon", '\n');
	printf("%d", len);
	printf("\n");
	printf("%d", len2);
	printf("\n");

    return (0);
}

#include <stdio.h>

/**
 * pre_main_function - print message before main.
 *
 * Description: function will execute automatically before main
 */
void __attribute__((constructor)) pre_main_function(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}

#include "../includes/memory_registration.h"

/*
** 1) Регистрация всей выделенной памяти и очистка в конце.
** 2) Передавать память которая уже не нужна и очищать ее или выделять на новые нужды!
** 3) Дефрагминтация 
*/

struct memory
{
	int a;
};


int  mem_add(void *str)
{
    if (!str)
        return (1);
}

int main (void)
{
	struct memory	st_new;
	struct new		st_rev;

	st_rev.printstr("hello world");
	return (0);
}

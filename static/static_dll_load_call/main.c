#include <stdio.h>
#include "export.h"

int main()
{
    printf("Hello world!\n");
    printf("ID:%d\n",get_id());
    printf("sum:%d\n",add(55,66));
    system("pause");
    return 0;
}

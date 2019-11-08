#include <stdio.h>
#include <windows.h>


typedef int(*lpget_id)(void);//���庯��ԭ��
typedef int(*lpadd)(int,int);

HINSTANCE hDLL;//DLL���
lpget_id get_id;
lpadd add;

int main()
{
    hDLL=LoadLibrary("dll_example_codeblock.dll");
    get_id=(lpget_id)GetProcAddress(hDLL,"get_id");
    add=(lpadd)GetProcAddress(hDLL,"add");
    //Get the address
    printf("theid:%d\n",get_id());
    printf("sum:%d\n",add(66,88));
    FreeLibrary(hDLL);//�����ͷ�
    system("pause");
    return 0;
}

#include <stdio.h>

int f (int);
   ���
int�main()�
{ ��������
    int x�=�5; ��������
    printf("%d�%d\n",�f(x+2),�f(f(x+2))); ������
��  return 0; ���
} ���
    int f(int�x)�
{
    return x�+�2; ���

}

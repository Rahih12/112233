#include <stdio.h>
#include "encrypt.h"
#include "checksum.h"

int main()
{
    char s[] = "����� ���� � �������";
    encrypt(s);
    printf("����������� � '%s'\n", s);
    printf("����������� ����� %i\n", checksum(s));
    encrypt(s);
    printf("������������ ������� � '%s'\n", s);
    printf("����������� ����� %i\n", checksum(s));
    return 0;
}
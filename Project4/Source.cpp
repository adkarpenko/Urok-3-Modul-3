#include<iostream>
#include<stdio.h>
#include<locale.h>

void task1()
{
	int a, b;
	printf("����� a: ");
	scanf_s("%d", &a);
	printf("����� b: ");
	scanf_s("%d", &b);
	if (a==b)
	{
		printf("����� ����� \n");
	}
	else
	{
		printf("����� �� �����\n");
		if (a>b)
		{
			printf("������ �����: %d\n", b);
			printf("������ �����: %d\n", a);
		}
		else
		{
			printf("������ �����: %d\n", a);
			printf("������ �����: %d\n", b);
		}
	}
}

void task2()
{
	int a,b,c,d,e,sr;
	printf("������ 1:");
	scanf_s("%d", &a);
	printf("������ 2:");
	scanf_s("%d", &b);
	printf("������ 3:");
	scanf_s("%d", &c);
	printf("������ 4:");
	scanf_s("%d", &d);
	printf("������ 5:");
	scanf_s("%d", &e);
	sr = (a + b + c + d + e)/5;
	printf("������� ���: %d\n", sr);
	if (sr>=1 && sr<4)
	{
		printf("�� ������� � ��������!\n");
	}
	else if (sr>=4&&sr<=5)
	{
		printf("������� � ��������!\n");
	}
}
void task3()
{
	int a, b,c;
	int flag;
	printf("������� ������ �����: ");
	scanf_s("%d", &a);
	printf("������� ������ �����: ");
	scanf_s("%d", &b);
	printf("������� ����� ��������������� ��������:\n1-��������;\n2-���������;\n3-���������;\n4-�������;\n");
	scanf_s("%d", &flag);
	if (flag==1)
	{
		c = a + b;
		printf("���� ��������������� ��������: %d\n", c);
	}
	if (flag == 2)
	{
		c = a - b;
		printf("���� ��������������� ��������: %d\n", c);
	}
	if (flag == 3)
	{
		c = a * b;
		printf("���� ��������������� ��������: %d\n", c);
	}
	if (flag == 4)
	{
		c = a / b;
		printf("���� ��������������� ��������: %d\n", c);
	}

}
void task4()
{
	int a;
	int flag;
	start:
	printf("������� �����: ");
	scanf_s("%d", &a);
	printf("������� �������,� ������� ������ ��������: 0\n1\n2\n3\n4\n5\n6\n7\n");
	scanf_s("%d", &flag);
	if (flag==0)
	{
		a = pow(a, 0);
		printf("����: %d\n", a);
	}
	if (flag == 1)
	{
		a = pow(a, 1);
		printf("����: %d\n", a);
	}
	if (flag == 2)
	{
		a = pow(a, 2);
		printf("����: %d\n", a);
	}
	if (flag == 3)
	{
		a = pow(a, 3);
		printf("����: %d\n", a);
	}
	if (flag == 4)
	{
		a = pow(a, 5);
		printf("����: %d\n", a);
	}
	if (flag == 6)
	{
		a = pow(a, 6);
		printf("����: %d\n", a);
	}
	if (flag == 7)
	{
		a = pow(a, 7);
		printf("����: %d\n", a);
	}
}
void task5()
{
	int a, b, c,a1,b1,c1, s,need;
	printf("���������� � ������ ���������: ");
	scanf_s("%d", &a);
	printf("���������� �� ������ ���������: ");
	scanf_s("%d", &b);
	printf("���������� � ������� ���������: ");
	scanf_s("%d", &c);
	if ((a+b+c)%3>0)
	{
		printf("���������� ���������!\n");
	}
	else
	{
		need = (a + b + c) / 3;
		printf("������� ���������� �����: %d\n", need);
		a1 = a - need;
		b1 = b - need;
		c1 = c - need;
		if (a1>0)
		{
			s = s + a1;
			printf("���������� ������������ �����: %d\n", s);
		}
		if (b1 > 0)
		{
			s = s + b1;
			printf("���������� ������������ �����: %d\n", s);
		}
		if (c1 > 0)
		{
			s = s + c1;
			printf("���������� ������������ �����: %d\n", s);
		}
	}
	need = (a + b + c) / 3;

}
int main()
{
	setlocale(LC_ALL, "");
	int flag;
	int task;
start:
	printf("������� ����� �������:");
	scanf_s("%d", &task);
	switch (task)
	{
	case 1:
	{
		task1();
	}
		break;
	case 2:
	{
		task2();
	}
	break;
	case 3 :
	{
		task3();
	}
	break;
	case 4 :
	{
		task4();
	}
	break;
	case 5:
	{
		task5();
	}
	break;
	default:
	break;
	
	}
	printf("������ ����������? 1/0\n");
	scanf_s("%d", &flag);
	if (flag == 1)
		goto start;
	system("pause");
}
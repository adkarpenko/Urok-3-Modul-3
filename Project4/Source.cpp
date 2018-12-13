#include<iostream>
#include<stdio.h>
#include<locale.h>

void task1()
{
	int a, b;
	printf("Число a: ");
	scanf_s("%d", &a);
	printf("Число b: ");
	scanf_s("%d", &b);
	if (a==b)
	{
		printf("Числа равны \n");
	}
	else
	{
		printf("Числа не равны\n");
		if (a>b)
		{
			printf("Первое число: %d\n", b);
			printf("Второе число: %d\n", a);
		}
		else
		{
			printf("Первое число: %d\n", a);
			printf("Второе число: %d\n", b);
		}
	}
}

void task2()
{
	int a,b,c,d,e,sr;
	printf("Оценка 1:");
	scanf_s("%d", &a);
	printf("Оценка 2:");
	scanf_s("%d", &b);
	printf("Оценка 3:");
	scanf_s("%d", &c);
	printf("Оценка 4:");
	scanf_s("%d", &d);
	printf("Оценка 5:");
	scanf_s("%d", &e);
	sr = (a + b + c + d + e)/5;
	printf("Средний бал: %d\n", sr);
	if (sr>=1 && sr<4)
	{
		printf("Не допущен к экзамену!\n");
	}
	else if (sr>=4&&sr<=5)
	{
		printf("Допущен к экзамену!\n");
	}
}
void task3()
{
	int a, b,c;
	int flag;
	printf("Введите первое число: ");
	scanf_s("%d", &a);
	printf("Введите второе число: ");
	scanf_s("%d", &b);
	printf("Введите номер арифметического действия:\n1-сложение;\n2-вычитание;\n3-умножение;\n4-деление;\n");
	scanf_s("%d", &flag);
	if (flag==1)
	{
		c = a + b;
		printf("Итог арифметического действия: %d\n", c);
	}
	if (flag == 2)
	{
		c = a - b;
		printf("Итог арифметического действия: %d\n", c);
	}
	if (flag == 3)
	{
		c = a * b;
		printf("Итог арифметического действия: %d\n", c);
	}
	if (flag == 4)
	{
		c = a / b;
		printf("Итог арифметического действия: %d\n", c);
	}

}
void task4()
{
	int a;
	int flag;
	start:
	printf("Введите число: ");
	scanf_s("%d", &a);
	printf("Введите степень,в которую хотите возвести: 0\n1\n2\n3\n4\n5\n6\n7\n");
	scanf_s("%d", &flag);
	if (flag==0)
	{
		a = pow(a, 0);
		printf("Итог: %d\n", a);
	}
	if (flag == 1)
	{
		a = pow(a, 1);
		printf("Итог: %d\n", a);
	}
	if (flag == 2)
	{
		a = pow(a, 2);
		printf("Итог: %d\n", a);
	}
	if (flag == 3)
	{
		a = pow(a, 3);
		printf("Итог: %d\n", a);
	}
	if (flag == 4)
	{
		a = pow(a, 5);
		printf("Итог: %d\n", a);
	}
	if (flag == 6)
	{
		a = pow(a, 6);
		printf("Итог: %d\n", a);
	}
	if (flag == 7)
	{
		a = pow(a, 7);
		printf("Итог: %d\n", a);
	}
}
void task5()
{
	int a, b, c,a1,b1,c1, s,need;
	printf("Количество в первой маршрутке: ");
	scanf_s("%d", &a);
	printf("Количество во второй маршрутке: ");
	scanf_s("%d", &b);
	printf("Количество в третьей маршрутке: ");
	scanf_s("%d", &c);
	if ((a+b+c)%3>0)
	{
		printf("Невозможно разделить!\n");
	}
	else
	{
		need = (a + b + c) / 3;
		printf("Среднее количество людей: %d\n", need);
		a1 = a - need;
		b1 = b - need;
		c1 = c - need;
		if (a1>0)
		{
			s = s + a1;
			printf("Количество пересаженных людей: %d\n", s);
		}
		if (b1 > 0)
		{
			s = s + b1;
			printf("Количество пересаженных людей: %d\n", s);
		}
		if (c1 > 0)
		{
			s = s + c1;
			printf("Количество пересаженных людей: %d\n", s);
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
	printf("Введите номер задания:");
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
	printf("Хотите продолжить? 1/0\n");
	scanf_s("%d", &flag);
	if (flag == 1)
		goto start;
	system("pause");
}
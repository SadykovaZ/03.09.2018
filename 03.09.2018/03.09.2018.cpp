// 03.09.2018.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include<iostream>
#include<iomanip>
#include<time.h>

using namespace std;

template<typename T>
void reverse(T* arr, int n)
{
	/*int *p1, *p2;
	p2 = arr + n - 1;


	for (p1=arr; p1<arr+n/2;p1++,p2--)
	{
		swap(*p1, *p2);
	}*/
	int *p1, *p2;
	p1 = arr;
	p2 = arr + n - 1;
	while (p1 < p2)
	{
		swap(*(p1), *(p2));
		p1++;
		p2--;
	}
}

void func(int *a, int n, int *b, int m, int *&c, int &k)
{
	int count = 0;
	bool f = false;
	for (int i = 0; i < n; i++)
	{
		f = false;
		for (int j = 0; j < m; j++)
		{
			if (a[i] == b[j])
			{
				if (f == false)
				{
					count++;
					f = true;
				}
			}
		}
	}
}

int main()
{
	srand(time(NULL));
	int n = 0;
	cin >> n;
	if (n == 1)
	{
		int **a;
		int n = 5, m = 6;
		a = new int*[n];

		for (int i = 0; i < n; i++)
		{
			a[i] = new int[m];
		}

		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				a[i][j] = 1 + rand() % 10;
				cout << setw(3) << a[i][j];
			}
			cout << endl;
		}

		for (int i = 0; i < n; i++)
		{
			delete[] a[i];
		}

		delete[] a;
	}

	else if (n == 2)
	{

		int **a;
		a = new int*[2];
		for (int i = 0; i < 2; i++)
		{
			a[i] = new int[10];
		}
	}

	else if (n == 3)
	{
		//Создать 2 целые переменные и определить «расстояние» между ними в памяти

		int *a, *b;
		a = new int;
		b = new int;
		cout << &a << endl << &b << endl;
		cout << (char*)(b)-(char*)a << endl;
		delete a;
		delete b;
	}

	else if (n == 4)
	{
		//Написать функцию, которая принимает указатель на массив и количество элементов. Пользуясь ДВУМЯ указателями на массив целых чисел, функция должна поменять порядок элементов передаваемого ей массива на обратный.

		const int n = 4;
		int arr[n] = { 1,2,3,4 };
		reverse(arr, n);
		for (int i = 0; i < n; i++)
		{
			cout << setw(3) << arr[i];
		}
		cout << endl;
	}

	else if (n == 5)
	{
		//38.Написать программу, которая осуществляет поиск введенного пользователем числа, используя ДВА указателя на массив целых чисел. Первый указатель двигается с начала массива, второй – с конца.
		int const n = 5;
		int arr[n] = { 1,2,3,4,5 };
		int z = 0;
		int *p1, *p2;
		p1 = arr;
		p2 = arr + n - 1;
		int number = 0;
		cin >> number;

		for (p1 = arr; p1 < arr + n; p1++, p2--)
		{
			if (number == *p1 || number == *p2)
			{
				z = 1;
				break;
			}
		}
		(z == 1) ? cout << "Number is in the array" << endl : cout << "false" << endl;
	}

	else if (n == 6)
	{
		//39.Написать программу, которая вычисляет сумму элементов массива, используя ДВА указателя на массив целых чисел. Первый указатель двигается с начала массива, второй – с конца.
		int const n = 5;
		int arr[n] = { 1,2,3,4,5 };
		int sum1 = 0, sum2 = 0;
		int *p1, *p2;
		p1 = arr;
		p2 = arr + n - 1;

		for (p1 = arr; p1 <= p2; p1++, p2--)
		{
			sum1 += *p1;
			if (p2 != p1)
				sum2 += *p2;
		}
		cout << sum1 + sum2 << endl;
	}
	else if (n == 7)
	{
		//40. Написать программу, которая вычисляет сумму четных  элементов массива, используя ДВА указателя на массив целых чисел. Первый указатель двигается с начала массива, второй – с конца
		int const n = 5;
		int arr[n] = { 1,2,4,4,5 };
		int sum1 = 0, sum2 = 0;
		int *p1, *p2;
		p1 = arr;
		p2 = arr + n - 1;

		for (p1 = arr; p1 <= p2; p1++, p2--)
		{
			if (*p1 % 2 == 0)
				sum1 += *p1;
			if ((p2 != p1) && (*p2 % 2 == 0))
				sum2 += *p2;
		}
		cout << sum1 + sum2 << endl;
	}
	else if (n == 8)
	{
		//41.Написать программу, которая вычисляет сумму элементов массива с четными номерами, используя ДВА указателя на массив целых чисел. Первый указатель двигается с начала массива, второй – с конца
		int const n = 7;
		int arr[n] = { 1,2,3,4,5,1,1 };
		int sum1 = 0, sum2 = 0;
		int *p1, *p2;
		p1 = arr;
		p2 = arr + n - 1;

		for (p1 = arr; p1 <= p2; p1++, p2--)
		{
			if ((p1 - arr) % 2 == 0)
				sum1 += *p1;
			if ((p2 != p1) && ((p2 - arr) % 2 == 0))
				sum2 += *p2;
		}
		cout << sum1 + sum2 << endl;

	}
	else if (n == 9)
	{
		//Даны два массива: А[M] и B[N] (M и  N вводятся с клавиатуры). Необходимо создать третий массив минимально возможного размера, в котором нужно собрать элементы массивов A и B, которые не являются общими для них

		int a[] = { 2,4,7,5,2,0 };
		int b[] = { 4,5,9,4,8 };

		int *pa, *pb;
		pa = a, pb = b;
		int n, m;
		cin >> n >> m;
		int k = 0;
		for (int i = 0; i < n; i++)
		{
			int sum = 0;
			for (int j = 0; j < m; j++)
			{
				if (a[i] == b[j]) sum++;
			}
			if (sum == 0) k++;
		}

		int k1 = 0;
		for (int i = 0; i < m; i++)
		{
			int sum = 0;
			for (int j = 0; j < n; j++)
			{
				if (b[i] == a[j]) sum++;
			}
			if (sum == 0) k1++;
		}

		int *c;
		c = new int[k + k1];
		int h = 0;
		for (int i = 0; i < n; i++)
		{
			int sum = 0;
			for (int j = 0; j < m; j++)
			{
				if (a[i] == b[j]) sum++;
			}
			if (sum == 0) c[h++] = a[i];
		}
		for (int i = 0; i < m; i++)
		{
			int sum = 0;
			for (int j = 0; j < n; j++)
			{
				if (b[i] == a[j]) sum++;
			}
			if (sum == 0) c[h++] = b[i];
		}
		for (int i = 0; i < k + k1; i++)
		{
			cout << setw(4) << c[i];
		}
		cout << endl;

		delete[] c;



	}
	else if (n == 10)
	{
		/*void *p;
		int a;
		double b;
		p = &a;

		cout << *((int*)p) << endl;
*/
/*int *p = new int[5];
int a[10];
delete[]p;
p = a;
*/
//int *p; //неконстаный указатель на неконстантную переменную
//int a;
//p = &a;

		//const int *p; //неконстаный указатель на константную переменную
		//int a;
		//p = &a;

		//*p = 10;
		int a, b;
		int  *const p=&a; //констаный указатель на неконстантную переменную
		*p = 10;

		int a, b;
		const int *const 


	}
	system("pause");
	return 0;
}


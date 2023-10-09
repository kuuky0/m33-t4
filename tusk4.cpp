#include <iostream>

/* Рекомендации

Для простоты можете реализовать подсчёт в массиве фиксированной длины.

Функцию ввода данных массива тоже рекомендуется реализовать как шаблонную.

Обе функции имеют похожую сигнатуру вида : */

/* поэтому я не буду делать универсального решения потому что в задаче не просят */

using namespace std;

template <typename T>
T average(T arr[10])
{
	T summ = 0;
	for (int i = 0; i < 10; i++)
	{
		summ += arr[i];
	}

	return summ / 10;
}

template <typename T>
void input(T arr[10])
{
	for (int i = 0; i < 10; i++)
	{
		T number;
		cout << "Input number: ";
		cin >> number;
		arr[i];
	}
}

int main()
{
	int array[10];
	input(array);
	cout << average(array) << endl;
	double array[10];
	input(array);
	cout << average(array) << endl;
}

#include <vector> 
// для использования cin, cout
#include <iostream>
// для использования функций min, max
#include <algorithm>

// стандартное пространство имен
using namespace std;

// заполнение вектора
void Fill(vector <int> &v)
{
	// N - кол-во элементов вектора, value - переменная для ввода с клавиатуры
	int N, value;
	cout << "Input N: ";
	cin >> N;
	cout << "Input X[i]:\n";
	for (int i = 0; i < N; i++)
	{
		cout << "X[" << i << "] = ";
		cin >> value;
		// добавление введенного элемента в конец вектора
		v.push_back(value);
	}
	cout << endl;
}

// нахождение макс элемента среди четных 
int FindMaxEven(vector <int> &v)
{
	int max_value = INT_MIN;
	for (int i = 0; i < v.size(); i++) {
		// если текущий элемент четный, то сохраняем максимальное значение
		if (v[i] % 2 == 0) max_value = max(max_value, v[i]);
	}

	return max_value;
}

// нахождение минимального среди всех
int FindMin(vector <int> &v)
{
	int min_value = INT_MAX;
	for (int i = 0; i < v.size(); i++) {
		// сохраняем минимальное значение
		min_value = min(min_value, v[i]);
	}

	return min_value;
}

// вывод вектора
void Show(vector <int> &v)
{
	cout << "X = ";
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "; ";
	}
	cout << "\n";
	cout << endl;
}

int main()
{
	// объявление ветора
	vector <int> v;
	// заполнение
	Fill(v);
	// вывод на экран
	Show(v);
	// вывод макс среди четных и мин среди всех
	cout << "Max of even: " << FindMaxEven(v) << endl;
	cout << "Min of all: " << FindMin(v) << endl;

	system("pause");

	return 0;
}
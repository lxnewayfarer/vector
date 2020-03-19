#include <vector> 
// ��� ������������� cin, cout
#include <iostream>
// ��� ������������� ������� min, max
#include <algorithm>

// ����������� ������������ ����
using namespace std;

// ���������� �������
void Fill(vector <int> &v)
{
	// N - ���-�� ��������� �������, value - ���������� ��� ����� � ����������
	int N, value;
	cout << "Input N: ";
	cin >> N;
	cout << "Input X[i]:\n";
	for (int i = 0; i < N; i++)
	{
		cout << "X[" << i << "] = ";
		cin >> value;
		// ���������� ���������� �������� � ����� �������
		v.push_back(value);
	}
	cout << endl;
}

// ���������� ���� �������� ����� ������ 
int FindMaxEven(vector <int> &v)
{
	int max_value = INT_MIN;
	for (int i = 0; i < v.size(); i++) {
		// ���� ������� ������� ������, �� ��������� ������������ ��������
		if (v[i] % 2 == 0) max_value = max(max_value, v[i]);
	}

	return max_value;
}

// ���������� ������������ ����� ����
int FindMin(vector <int> &v)
{
	int min_value = INT_MAX;
	for (int i = 0; i < v.size(); i++) {
		// ��������� ����������� ��������
		min_value = min(min_value, v[i]);
	}

	return min_value;
}

// ����� �������
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
	// ���������� ������
	vector <int> v;
	// ����������
	Fill(v);
	// ����� �� �����
	Show(v);
	// ����� ���� ����� ������ � ��� ����� ����
	cout << "Max of even: " << FindMaxEven(v) << endl;
	cout << "Min of all: " << FindMin(v) << endl;

	system("pause");

	return 0;
}
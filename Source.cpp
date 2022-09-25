#include <iostream>	
using namespace std;

class Numbers
{
	int size;
	double* arr;
public:
	Numbers(int size)
	{
		this->size = size;
		this->arr = new double[size];
		for (int i = 0; i < size; i++)
		{
			if (i % 2 == 0) arr[i] = i + 4.1;
			else arr[i] = i - 1.0;
		}
	}
	Numbers(const Numbers &other)
	{
		this->size = other.size;
		this->arr = new double[other.size];
		for (int i = 0; i < size; i++)
		{
			this->arr[i] = other.arr[i];
		}
		double result = 0;
		for (int i = 0; i < size; i++)
		{
			if (i % 2 == 0) result += this->arr[i];
		}
		cout << " Result = " << result;
	}
	~Numbers() 
	{
		delete[] arr;
	}
};

int main()
{
	Numbers a(15);
	Numbers b(a);
}
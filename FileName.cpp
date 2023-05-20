#include <iostream>
#include <string>
#include <chrono>
#include <thread>

void Function_1(int i);
void Function_2(int i);

using namespace std;
int main()
{
	for (int i = 1; ;i++)
	{
		this_thread::sleep_for(chrono::seconds(1));
		cout << i;
		
		if (i > 0 && i <= 99)
		{Function_1(i);}

		else if(i>=100&&i<999)
		{
			Function_2(i);
		}
	}

}


void Function_1(int i)
{
	if (i <= 10)
	{
		cout << "  ";
	}
	else if (i > 10)
	{
		cout << " ";
	}

	if (i == ((i / 10) * 10))
	{
		cout << "   ";
		cout << endl;
	}
	else if (i == ((i / 10) * 10))
	{
		cout << " ";
		cout << endl;
	}
}

void Function_2(int i)
{
	if (i <= 10)
	{
		cout << "  ";
	}
	else if (i > 10)
	{
		cout << " ";
	}

	if (i == ((i / 10) * 10))
	{
		cout << "   ";
		cout << endl;
	}
	else if (i == ((i / 10) * 10))
	{
		cout << " ";
		cout << endl;
	}
}
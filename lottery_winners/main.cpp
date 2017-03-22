#include <iostream>
#include <string>
#include <vector>
using namespace std;

int linearSearch(vector<string>, string);

int main()
{
	vector<string> tickets =
	{
		"13579", "26792", "26792", "33445", "55555",
		"62483", "77777", "79422", "85647", "93121"
	};

	string input;

	cout << "Enter this weeks lottery numbers\n>> ";
	cin >> input;

	if (linearSearch(tickets, input) != -1)
	{
		cout << "You won the lottery!" << endl;
	}
	else
	{
		cout << "You lost. Stop wasting your money." << endl;
	}
}

int linearSearch(vector<string> vec, string val)
{
	for (int i = 0; i < vec.size(); i++)
	{
		if (val == vec[i])
			return i;
	}
	return -1;
}
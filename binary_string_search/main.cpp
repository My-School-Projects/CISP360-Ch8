#include <iostream>
#include <string>
using namespace std;

int binarySearch(const string&, const char);

int main()
{
	char val = 'm';
	int position = binarySearch("abcdefghijklmnopqrstuvwxyz", val);
	if (position != -1)
	{
		cout << val << " is at position " << position << "." << endl;
	}
	else
	{
		cout << val << " was not found." << endl;
	}
}

int binarySearch(const string& s, const char c)
{
	int start = 0, end = s.size(), middle = end / 2;
	while (true)
	{
		if (s[middle] == c)
		{
			return middle;
		}
		else if (c > s[middle])
		{
			start = middle + 1;
		}
		else
		{
			end = middle - 1;
		}
		middle = (start + end) / 2;
		
		if (end < start)
			return -1;
	}
}

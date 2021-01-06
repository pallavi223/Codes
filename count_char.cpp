// C++ implementation of the approach
// count 1 or 2 bit character
#include <bits/stdc++.h>
using namespace std;

// Function to return the count
// of required characters
int countChars(string str, int n)
{

	int i = 0, cnt = 0;

	// While there are characters left
	while (i < n) {

		// Single bit character
		if (str[i] == '0')
			i++;

		// Two-bit character
		else
			i += 2;

		// Update the count
		cnt++;
	}

	return cnt;
}

// Driver code
int main()
{
	string str = "11010";
	int n = str.length();

	cout << countChars(str, n);

	return 0;
}

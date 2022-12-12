#include <iostream>

using namespace std;

int main()
{
	const int n = 20;
	int randomDigits[n]{};
	for (int i = 0; i < 20; i++)
	{
		randomDigits[i] = rand();
		cout << randomDigits[i] << endl;
	}
	int N;
	cout << "p >>";
	cin >> N;

	int index = 0;
	for (int i = 0; i < n; ++i)
		if (randomDigits[i] > N)
		{
			index++;
		}
	cout << endl;
	if (index > 0)
	{
		cout << index << "\n";
	}
	else
		cout << " Elements whose value is greater than " << N << "not found" << endl;
	return 0;
}
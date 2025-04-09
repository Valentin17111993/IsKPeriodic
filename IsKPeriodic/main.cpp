#include "IsKPeriodic.h"

using namespace std;

int main()
{
	string st;
	int K;
	cout << "Enter string :" << endl;
	getline(cin, st);
	cout << "Enter k periodic : " << endl;
	cin >> K;
	if (IsKPeriodic(K, st))
	{
		cout << "String is " << K << "-periodic." << endl;
	}
	else
	{
		cout << "String is NOT " << K << "-periodic." << endl;
	}

	return 0;
}
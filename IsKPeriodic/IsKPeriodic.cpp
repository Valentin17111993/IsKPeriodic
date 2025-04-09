#include "IsKPeriodic.h"
using namespace std;

bool prov(string& st, int& index, string& pat, int K)
{
	for (int i = 0; i < K; i++)
	{
		if (st[index] != pat[i])
		{
			return false;
		}
		index++;
	}

	return true;
}

bool IsKPeriodic(int k, string& st)
{
	if (st.size() % k != 0)
	{
		return false;
	}
	int count = st.size() / k;
	string pat = "";
	for (int i = 0; i < k; i++)
	{
		pat += st[i];
	}
	
	int index = 0;
	for (int i = 0; i < count; i++)
	{
		if (!prov(st, index, pat, k))
		{
			return false;
		}
	}

	return true;
}
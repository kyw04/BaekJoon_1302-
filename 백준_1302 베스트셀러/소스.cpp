#include <iostream>
#include <string>
using namespace std;

typedef struct dictionary
{
	string data;
	int cnt = 0;
}dictionary;

dictionary dic[1000];
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string str;
	string temp;
	int idx = 0, len = 0, max = 0;
	int i, j, t, r = 0;
	cin >> t;
	for (i = 0; i < t; i++)
	{
		cin >> str;
		for (j = 0; j < idx; j++)
		{
			if (dic[j].data == str)
			{
				dic[j].cnt++;
				break;
			}
		}
		if (j == idx)
		{
			dic[idx].data = str;
			dic[idx++].cnt = 1;
			len++;
		}
	}
	for (i = 0; i < len; i++)
		if (dic[i].cnt > max)
			max = dic[i].cnt;
	
	for (i = 0; i < len; i++)
	{
		if (dic[i].cnt == max && (temp > dic[i].data || r == 0))
		{
			r = 1;
			temp = dic[i].data;
		}
	}

	cout << temp;
}
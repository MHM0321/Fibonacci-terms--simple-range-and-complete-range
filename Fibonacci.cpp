#include<iostream>
using namespace std;
int main()
{
	int k = 0, a = 0, nt = 0, t1 = 0, t2 = 1;
	long double t = 0;
	cout << "Part I :" << endl;
	cout << "How many Fibonacci Numbers you want to ask : ";
	cin >> k;
	t = t1 + t2;
	for (k; k > 0; k--)
	{
		cout << "Which Fibonacci : ";
		cin >> nt;
		a = nt;
		t = 0, t1 = 0, t2 = 1;
		for (nt; nt > 0; nt--)
		{
			t1 = t2;
			t2 = t;
			t = t1 + t2;
		}
		cout << "F" << a << " : " << t << endl;
	}
	cout << "Part II :" << endl;
	int T = 0;
	cout << "You want to print upto :  ";
	cin >> T;
	cout << "The sequence upto " << T << " is :";
	t = 0, t1 = 0, t2 = 1;
	for (T; t <= T;)
	{
		cout << t ;
		t1 = t2;
		t2 = t;
		t = t1 + t2;
		if (t<=T)
		{
			cout << ',';
		}
	}

	cout << endl << "Part III:" << endl;
	int start = 0, end = 0, next_term = 0;
	cout << "Where to start :  ";
	cin >> start;
	cout << "Where to end :  ";
	cin >> end;
	cout << "The sequence between " << start << " and " << end << " is :" << endl;
	t1 = 0, t2 = 1, t = 0;
	for (t = t1; t < end;)
	{
		if (t > start)
		{
			cout << t;
		}
		next_term = t1 + t2;
		t1 = t2;
		t2 = next_term;
		t = next_term;
		if (t > start && t < end)
		{
			cout << ',';
		}
	}
	cout << endl;
	system("pause");
	return 0;
}
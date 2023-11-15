#include <fstream>
#define MODULO 666013
using namespace std;
int jump(int n);
int main()
{
	int n;
	ifstream fin("jump.in");
	fin >> n;
	fin.close();
	ofstream fout("jump.out");
	fout << jump(n);
	fout.close();
	return 0;
}
int jump(int k)
{
	int a = 1, b = 2, c = 4, d = 0;
	for (int i = 4; i <= k; i++)
	{
		d = (a + b + c) % MODULO;
		a = b, b = c, c = d;
	}
	if (!d)
	{
		if (k == 1)
			return a;
		if (k == 2)
			return b;
		if (k == 3)
			return c;
	}
	return d;
}

#include <iostream>

using namespace std;

int main()
{

	long long x;
	long long p;
	long long m;
	long long fact;
	long long sum;
	long long temp;
	long long t;
	long long ans;
	cin >> m;
	cin >> x;
	sum = 0;
	fact = 1;

	for(int i = 1; i <= m-1; i++) {
		
		fact = (fact * i) % m;
		temp = (fact * i) % m;
		sum += temp;
		sum = sum % m;
	}

	t = x/ 2;

	ans = ((x % m) * (t %m)) % m;
	ans = (ans * (x+1) % m)%m;

	ans = (ans + sum) % m;
	cout << ans<<endl;
}

	

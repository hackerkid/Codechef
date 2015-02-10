#include <bits/stdc++.h>

using namespace std;

int main()
{	
	int k;
	int p;
	int r;
	int t;
	for (int i = 10; i <= 20; i++) {
		for (int j = 30; j <= 35; j++) {
			k = i * j;
			k = k % 3;
			p = i % 3;
			r = j % 3;
			t = p * r;
			t = t % 3;
			if(t != k) {
				cout << "----"<<i<<" "<<j<<"xx";;
			}
		}

	}


}

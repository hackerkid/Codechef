#include <iostream>
#include <string.h>
using namespace std;

int main()
{

	char x[100005];
	char a[100005];
	char b[100005];

	int r;
	int s;
	int n;
	int t;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> x;

		n = strlen(x);
		r = 0;
		s = 0;

		for (int i = 0; i < n; i++) {
			if(i % 2) {
				if(x[i] != '+') {
					r++;
				}

				if(x[i] != '-') {
					s++;
				}
			}

			else {
				if(x[i] != '-') {
					r++;
				}

				if(x[i] != '+') {
					s++;
				}
			}


		}

		cout << min(r, s)<<endl;

	}

}




		



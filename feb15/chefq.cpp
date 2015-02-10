#include <iostream>
#include <limits.h>
#include <string.h>
using namespace std;

int main()
{


	int mini;
	int maxi;

	int mincount;
	int maxcount;
	int a[100005];
	int n;
	int t;
	int x;

	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;
		maxcount = 0;
		maxi = -1;
		mini = INT_MAX;

		memset(a, 0, sizeof(a));
		
		for (int i = 0; i < n; i++) {
			cin >> x;
			if(x > maxi) {
				maxi = x;
			}

			if(x < mini) {
				mini = x;
			}

			a[x]++;
		}

		for (int i = mini; i <= maxi; i++) {
			if(a[i] > maxcount) {
				maxcount = a[i];
			}

		}


		cout << n - maxcount<<endl;

	}

}






			


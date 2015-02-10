#include <iostream>       
#include <vector>
#include <algorithm>
using namespace std;

int closest(long long sum)
{

	int i = 0; 

	while(((i * (i+1))/2) < sum) {
		i++;
	}

	if(((i * (i+1))/2) > sum) {
		i--;
		return i;
	}

	return i;
}

int main()
{

	vector <int> a;
	long long sum;
	int n;
	int k;
	long long temp;
	int t;
	int count;

	cin >> t;
	
	for (int i = 0; i < t; i++) {
		vector <int> bro;
		swap(a, bro);
		cin >> n;
		cin >> sum;

		while(sum) {
			if(num == 1) {
				a.push_back(sum);
			}                                 
			
			k = closest(sum);
			cout << k << "k baby"<<endl;
			temp = (k * (k + 1))/2;
			sum = sum - temp;
			for (int j = 1; j <= k; j++) {
				a.push_back(j);
			}

		}

		sort(a.begin(), a.end());
		
		count = 0;

		for (int j = 1; j <= n; j++) {
			if(a[j-1] != j) {
				count++;
			}

		}

		cout << count << endl;


	}


}


		


	


#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <sstream>
#include <cstring>
#include <string>
#include <utility>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <algorithm>
#include <functional>
#include <cmath>
#include <list>
#include <set>
using namespace std;

typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
#define rep(i,a,b) for((i)=(a);(i)<=(b);(i)++)
vector<vii> adj_list;

vector<unsigned long> primes, primef;

//BEFORE SUBMISSION, COMMENT OUT THIS LINE--> freopen("text", "r", stdin);
void findprimes() {
	primes.push_back(2);
	unsigned long int i, j;
	bool found;
	rep(i,3,31623)
	{
		found = false;
		rep(j,0,(int)primes.size()-1)
			if (i % primes[j] == 0) {
				found = true;
				break;
			}
		if (found == false)
			primes.push_back(i);
	}
}

unsigned long int split(unsigned long int x) {
	unsigned long sum = 0;
	while (x > 0) {
		sum += x % 10;
		x /= 10;
	}
	return sum;
}

int main() {
	long int l, a, b, c, m, n, i, x, y, j, k, t, sum = 0, cases = 1, maximum,
			minimum, sum_n, sum_digits, count1 = 0;
	//freopen("text", "r", stdin);
	scanf("%ld", &t);
	findprimes();
	while (t--) {
		scanf("%ld", &m);
		k = m, n = m;
		while (1) {
			n = ++k;
			primef.clear();
			vector<unsigned long int>::iterator it = find(primes.begin(),
					primes.begin() + 3401, n);
			if ((it != primes.end())) {
				continue;
			}
			bool divisible = false;
			rep(i,0,(int)primes.size()-1)
				if (n % primes[i] == 0)
					divisible = true;
			if ((divisible == false))
				continue;
			while (n != 1) {
				bool divisible = false;
				rep(i,0,(int)primes.size()-1)
				{
					if (n % primes[i] == 0) {
						n /= primes[i];
						primef.push_back(primes[i]);
						divisible = true;
					}
					if (n == 1 || i > n)
						break;
				}
				if ((divisible == false)) {
					primef.push_back(n);
					break;
				}
			}
			sum_n = 0, sum_digits = 0;
			sum_n = split(k);
			rep(i,0,(int)primef.size()-1)
				sum_digits += split(primef[i]);
			if (sum_n == sum_digits) {
				printf("%ld\n", k);
				break;
			}
		}
	}
	return 0;
}

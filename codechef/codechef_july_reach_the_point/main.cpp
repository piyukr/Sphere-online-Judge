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
using namespace std;

typedef vector<int> vi;
#define ii pair<int,int>
#define vii vector<ii>
#define rep(i,a,b) for((i)=(a);(i)<=(b);(i)++)
vector<vii> adj_list;

vi dist;

int main() {
	long long int l, b, c, d, m, n, i, j, k, t, sum = 0, cases = 1, maximum,
			minimum, count1 = 0;
	long double a, lesser, x, y;
	scanf("%lld", &t);
	while (t--) {
		count1 = 0;
		scanf("%lld%lld", &m, &n);
		if (m < 0)
			m = -1 * m;
		if (n < 0)
			n = -1 * n;
		x = (long double) m;
		y = (long double) n;
		//printf("pts: %Lf,%Lf\n",x,y);
		while ((x > 0) && (y > 0)) {
			lesser = (x < y) ? x : y;
			a = floor(sqrt(lesser));
			x = x - a * a;
			y = y - a * a;
			count1 += 2 * a * a;
			//printf("a=% Lf ;pts: %Lf,%Lf\n", a, x, y);
		}
		c = (long long int) y;
		d = (long long int) x;
		count1 += (c / 2) * 4 + (c % 2);
		count1 += (d / 2) * 4 + (d % 2) * 3;
		printf("%lld\n", count1);
	}
	return 0;
}

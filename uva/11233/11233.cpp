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

vi dist;

//BEFORE SUBMISSION, COMMENT OUT THIS LINE--> freopen("text", "r", stdin);

int main() {
	unsigned long int l, a, b, c, m, n, i, x, y, j, k, t, sum = 0, cases = 1,
			maximum, minimum, count1 = 0;
	long double xa, xb, ya, yb, distance, temp;
	freopen("text", "r", stdin);
	while (scanf("%lu %lu", &a, &b) != EOF) {
		i = 0, j = 0;
		while (i * i <= a)
			i++;
		while (j * j <= b)
			j++;
		if (i > 0)
			i--;
		if (j > 0)
			j--;
		xa = i * sqrt(3) / 2;
		xb = j * sqrt(3) / 2;
		ya = (i * i + i - a) / 2;
		yb = (j * j + j - b) / 2;
		temp = (xa - xb) * (xa - xb) + (ya - yb) * (ya - yb);
		distance = sqrt(temp);
		printf(
				"a=%lu,i=%lu b=%lu,j=%lu xa=%.3Lf ya=%.3LF xb=%.3Lf yb=%.3LF distance=%.3Lf\n",
				a, i, b, xa, ya, xb, yb, j, distance);
	}
	return 0;
}

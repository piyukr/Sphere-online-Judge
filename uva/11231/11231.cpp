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
	//freopen("text", "r", stdin);
	while (1) {
		scanf("%lu %lu %lu", &a, &b, &c);
		if (a == 0 && b == 0 && c == 0)
			break;
		m = (a - 7) * (b - 7) / 2 + (c * ((a - 7) & 1) * ((b - 7) & 1));
		printf("%lu\n", m);
	}
	return 0;
}

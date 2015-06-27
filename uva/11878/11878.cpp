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
	int l, a, b, ans = 0, result, m, n, i, x, y, j, k, t, sum = 0, cases = 1,
			maximum, minimum, count1 = 0;
	char o, e;
	char c[100];
	//freopen("text", "r", stdin);
	while (scanf("%d%c%d=%s", &a, &o, &b, c) == 4) {
		result = atoi(c);
		//printf("result=%d\n", result);
		if (o == '+')
			if (a + b == result)
				ans++;
		if (o == '-')
			if (a - b == result)
				ans++;
	}
	printf("%d\n", ans);
	return 0;
}

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
	int l, a, n, b, c, m, i, x, y, j, k, t, sum = 0, cases = 1, maximum,
			minimum, count1 = 0;
	float ans;
	//freopen("text", "r", stdin);
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		if (n == 1) {
			printf("0.000\n");
			goto here;
		}
		if (n % 2 == 1) {
			ans = (n + 2) + (n - 2) * (n + 1.414);
		} else {
			ans = 4 * (n - 1) + (n - 2) * (n - 2);
		}
		printf("%.3f\n", ans);
		here: if (t != 0)
			printf("\n");
	}
	return 0;
}

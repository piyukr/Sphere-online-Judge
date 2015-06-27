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
	int l, nd, ns, a, b, c, m, n, i, x, y, j, k, t, sum = 0, cases = 1, maximum,
			minimum, count1 = 0;
	double q;
	//freopen("text", "r", stdin);
	while (1) {
		scanf("%d%d", &ns, &nd);
		if (ns == 0 && nd == 0)
			break;
		printf("Case %d: ", cases++);
		q = (double) ns / (double) nd;
		if (q <= 27.0)
			printf("%d\n", int(ceil(q)) - 1);
		else
			printf("impossible\n");
	}
	return 0;
}

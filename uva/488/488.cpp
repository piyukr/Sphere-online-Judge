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
	int l, a, b, c, m, n, i, x, y, j, k, t, sum = 0, cases = 1, maximum,
			minimum, count1 = 0;
	//freopen("text", "r", stdin);
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &m, &n);
		while (n--) {
			rep(i,1,m)
			{
				rep(j,1,i)
					printf("%d", i);
				printf("\n");
			}
			for (i = m - 1; i >= 1; i--) {
				for (j = 1; j <= i; j++)
					printf("%d", i);
				printf("\n");
			}
			if (n > 0)
				printf("\n");
		}
		if (t > 0)
			printf("\n");
	}
	return 0;
}

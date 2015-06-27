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
int grid[1000][1000];
int choices[1000], dead_state[1000];

int main() {
	int l, a, b, c, m, n, i, x, y, j, k, t, sum = 0, cases = 1, maximum,
			minimum, count1 = 0;
	bool first = true;
	while (scanf("%d", &t) != EOF) {
		if (first)
			first = false;
		else
			printf("\n");
		x = 0;
		memset(grid, 0, sizeof(grid));
		memset(choices, 0, sizeof(choices));
		memset(dead_state, 0, sizeof(dead_state));
		while (x < t) {
			i = 0;
			scanf("%d", &n);
			while (i < n) {
				scanf("%d", &a);
				grid[x][a] = 1;
				dead_state[x] = 1;
				i++;
			}
			x++;
		}
		scanf("\n");
		if (dead_state[0] == 0) {
			printf("0\n");
			continue;
		}
		rep(i,0,t-1)
			rep(j,0,t-1)
				if (grid[j][i] == 1)
					if (choices[j] == 0)
						choices[i]++;
					else
						choices[i] += choices[j];
		long int ans = 0;
		rep(i,0,t-1)
			if (dead_state[i] == 0)
				ans += choices[i];
		printf("%ld\n", ans);
	}
	return 0;
}

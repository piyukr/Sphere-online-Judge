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
priority_queue<ii, vector<ii>, greater<ii> > pq;
vi dist;

//BEFORE SUBMISSION, COMMENT OUT THIS LINE--> freopen("text", "r", stdin);

int main() {
	int l, b, c, m, n, i, a, x, y, j, k, t, sum = 0, cases = 1, maximum,
			minimum, start, count1 = 0;
	//freopen("text", "r", stdin);
	while (1) {
		scanf("%d", &n);
		if (n == 0)
			break;
		while (!pq.empty())
			pq.pop();
		scanf("%d", &start);
		adj_list.assign(n + 1, vii());
		while (1) {
			scanf("%d %d", &a, &b);
			if (a == 0 && b == 0)
				break;
			adj_list[a].push_back(ii(-1, b));
		}
		pq.push(ii(0, start));
		dist.assign(n + 1, 9999);
		dist[start] = 0;
		minimum = 9999;
		int minpt;
		while (!pq.empty()) {
			ii front = pq.top();
			pq.pop();
			int d = front.first, u = front.second;
			if (d > dist[u])
				continue;
			for (j = 0; j < (int) adj_list[u].size(); j++) {
				ii v = adj_list[u][j];
				if (dist[u] + v.first <= dist[v.second]) {
					dist[v.second] = dist[u] + v.first;
					pq.push(ii(dist[v.second], v.second));
					if (dist[v.second] < minimum) {
						minimum = dist[v.second];
						minpt = v.second;
					} else if (dist[v.second] == minimum) {
						if (minpt > v.second)
							minpt = v.second;
					}
				}
			}
		}
		printf(
				"Case %d: The longest path from %d has length %d, finishing at %d.\n\n",
				cases++, start, -1 * minimum, minpt);
	}
	return 0;
}

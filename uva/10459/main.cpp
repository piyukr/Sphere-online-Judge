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

vector<vi> adj_list;
map<int, vi> heights;
vi dist, a, visited, degree, worst, best;
queue<int> q;

//BEFORE SUBMISSION, COMMENT OUT THIS LINE--> freopen("text", "r", stdin);

int main() {
	int l, b, c, m, n, i, x, y, j, k, t, sum = 0, cases = 1, maximum = 0,
			minimum = 9999, count1 = 0;
	freopen("text", "r", stdin);
	while (scanf("%d", &t) != EOF) {
		//printf("t=%d\n", t);
		best.clear();
		heights.clear();
		x = 1;
		adj_list.assign(t + 1, vi());
		degree.assign(t + 1, 0);
		while (x <= t) {
			scanf("%d", &n);
			//printf("n=%d x=%d\n", n, x);
			degree[x] = n;
			while (n--) {
				scanf("%d", &m);
				adj_list[x].push_back(m);
			}
			//printf("degree[%d]=%d\n", x, degree[x]);
			x++;
		}
		maximum = 0;
		//First, finding worst Roots
		rep(i,1,t)
		{

			if (degree[i] != 1)
				continue;
			dist.assign(t + 1, 0);
			visited.assign(t + 1, 0); //0 means not visited , 1 means visited
			while (!q.empty())
				q.pop();
			dist[i] = 0;
			q.push(i);
			int u, v;
			while (!q.empty()) {
				u = q.front();
				q.pop();
				visited[u] = 1;
				rep(j,0,(int)adj_list[u].size()-1)
				{
					v = adj_list[u][j];
					if (visited[v] != 1) {
						dist[v] = dist[u] + 1;
						q.push(v);
					}
				}
			}
			int height = *max_element(dist.begin() + 1, dist.end());
			maximum = max(maximum, height);
			heights[height].push_back(i);
		}
		// Now, best roots
		while (!q.empty())
			q.pop();
		int u, v;
		rep(i,1,t)
			if (degree[i] == 1)
				q.push(i);
		while (1) {
			u = q.front();
			degree[u]--;
			q.pop();
			rep(i,0,(int)adj_list[u].size()-1)
			{
				v = adj_list[u][i];
				if (degree[v] > 0)
					degree[v]--;
				if (degree[v] == 1)
					q.push(v);
			}
			if (q.size() == 1)
				break;
		}
		while (!q.empty()) {
			best.push_back(q.front());
			q.pop();
		}
		rep(i,0,(int)heights[maximum].size()-1)
			printf(" %d", heights[maximum][i]);
		printf("\nbest:");
		rep(i,0,(int)best.size()-1)
			printf(" %d", best[i]);
		printf("\n");
	}
	return 0;
}

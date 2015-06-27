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

vi dist, visited, next_pos, cycle_sizes;

unsigned long long int get_hcf(unsigned long long int a, unsigned long long int b) {
	if (a > b)
		swap(a, b);
	if (a == 0)
		return b;
	if (b % a == 0)
		return a;
	else
		return (get_hcf(b, b % a));
}
unsigned long long int get_lcm(unsigned long long int a, unsigned long long int b) {
	unsigned long long int x = get_hcf(a, b);
	return ((a * b) % 1000000007 / x);
}
int main() {
	unsigned long long int l, b, c, m, n, i, x, y, j, k, t, sum = 0, cases = 1, lcm,
			length, maximum, minimum, count1 = 0;
	scanf("%Lu", &t);
	while (t--) {
		//printf("-->\n");
		scanf("%Lu", &n);
		visited.assign(n + 1, 0), next_pos.assign(n + 1, 0), cycle_sizes.clear();
		cycle_sizes.push_back(1);
		for (i = 1; i <= n; i++) {
			scanf("%Lu", &x);
			next_pos[i] = x;
		}
		for (i = 1; i <= n; i++) {
			if (visited[i] == 1)
				continue;
			length = 1, visited[i] = 1;
			y = next_pos[i];
			while (visited[y] != 1) {
				visited[y] = 1;
				y = next_pos[y];
				length++;
			}
			//printf("length to be pushed= %lu\n", length);
			cycle_sizes.push_back(length % 1000000007);
			//printf("pushed %lu\n", length);
		}
		lcm = get_lcm(cycle_sizes[0], cycle_sizes[1]);
		for (i = 2; i < cycle_sizes.size(); i++)
			lcm = get_lcm(lcm, cycle_sizes[i]);
		printf("%Lu\n", lcm % 1000000007);
	}
	return 0;
}

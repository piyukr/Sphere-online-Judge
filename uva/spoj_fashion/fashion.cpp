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

vi m_hotness, f_hotness;

//BEFORE SUBMISSION, COMMENT OUT THIS LINE--> freopen("text", "r", stdin);

int main() {
	long int l, a, b, c, m, n, i, x, y, j, k, t, sum = 0, cases = 1, maximum,
			minimum, count1 = 0;
	//freopen("text", "r", stdin);
	scanf("%ld", &t);
	while (t--) {
		sum = 0;
		scanf("%ld", &l);
		rep(i,1,l)
		{
			scanf("%ld", &a);
			m_hotness.push_back(a);
		}
		rep(i,1,l)
		{
			scanf("%ld", &a);
			f_hotness.push_back(a);
		}
		sort(m_hotness.begin(), m_hotness.end());
		sort(f_hotness.begin(), f_hotness.end());
		rep(i,0,l-1)
			sum += m_hotness[i] * f_hotness[i];
		printf("%ld\n", sum);
		m_hotness.clear(), f_hotness.clear();
	}
	return 0;
}

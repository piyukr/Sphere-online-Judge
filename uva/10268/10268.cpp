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

typedef pair<long long, long long> ii;
typedef vector<long long> vi;
typedef vector<ii> vii;
#define rep(i,a,b) for((i)=(a);(i)<=(b);(i)++)
vector<vii> adj_list;

vi dist, c;
long long res;
string buff;
//BEFORE SUBMISSION, COMMENT OUT THIS LINE--> freopen("text", "r", stdin);

int main() {
	long long l, a, b, m, n, i, x, y, j, k, t, sum = 0, cases = 1, maximum, minimum,
			count1 = 0;
	/*freopen("text", "r", stdin);
	 freopen("output", "w+", stdout);
	 */while (cin >> a) {
		scanf("\n");
		getline(cin, buff);
		istringstream in(buff);
		c.clear();
		while (in >> t)
			c.push_back(t);
		n = c.size() - 1;
		res = n * c[0];
		rep(i,1,(long long)c.size()-2)
		{
			res *= a;
			res += (--n) * c[i];
		}
		printf("%lld\n", res);
	}
	return 0;
}

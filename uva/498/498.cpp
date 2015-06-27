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

vi dist, c;
long long res;
string buff;
//BEFORE SUBMISSION, COMMENT OUT THIS LINE--> freopen("text", "r", stdin);

int main() {
	int l, a, b, m, n, i, x, y, j, k, t, sum = 0, cases = 1, maximum, minimum,
			count1 = 0;
	//freopen("text", "r", stdin);
	while (getline(cin, buff)) {
		istringstream in(buff);
		c.clear();
		while (in >> t)
			c.push_back(t);
		bool first = true;
		getline(cin, buff);
		istringstream in2(buff);
		while (in2 >> t) {
			res = c[0];
			rep(i,1,(int)c.size()-1)
			{
				res *= t;
				res += c[i];
			}
			if (first)
				first = false;
			else
				printf(" ");
			printf("%lld", res);
		}
		printf("\n");
	}
	return 0;
}

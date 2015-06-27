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
string a, b, c;
//BEFORE SUBMISSION, COMMENT OUT THIS LINE--> freopen("text", "r", stdin);
map<string, int> freq;
int main() {
	int l, m, n, i, x, y, j, k, t, sum = 0, cases = 1, maximum, minimum,
			count1 = 0;
	//freopen("text", "r", stdin);
	while (cin >> n >> a) {
		maximum = 0;
		rep(i,0,(int)a.length() -n)
		{
			b = a.substr(i, n);
			freq[b]++;
			if (freq[b] > maximum) {
				maximum = freq[b];
				c = b;
			}
		}
		cout << c << endl;
	}
	return 0;
}

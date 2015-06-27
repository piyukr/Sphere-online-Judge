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
	unsigned long int diff, l, a, b, c, m, n, i, x, y, j, k, t, sum = 0, cases =
			1, ansx, ansy, maximum, minimum, count1 = 0;
	//freopen("text", "r", stdin);
	bool first = true;
	while (scanf("%lu", &n) != EOF) {
		/*if (first)
		 first = false;
		 else
		 printf("\n");*/
		x = 1;
		sum = x * (x + 1) / 2;
		while (sum <= n) {
			x++;
			sum = x * (x + 1) / 2;
		}
		x--;
		sum = x * (x + 1) / 2;
		diff = n - sum;
		if ((x & 1) == 0) {
			ansx = 1;
			ansy = x;
		} else {
			ansx = x;
			ansy = 1;
		}
		if (diff != 0) {
			if ((x & 1) == 0) {
				diff--;
				ansy++;
			} else {
				diff--;
				ansx++;
			}
		}
		if ((x & 1) == 0) {
			ansx += diff;
			ansy -= diff;
		} else {
			ansx -= diff;
			ansy += diff;
		}
		printf("TERM %lu IS %lu/%lu\n", n, ansy, ansx);
	}
	return 0;
}

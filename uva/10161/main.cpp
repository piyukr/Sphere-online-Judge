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
	unsigned long int l, a, b, c, tn, m, n, i, x, y, j, k, t, sum = 0, tn1, tn2,
			cases = 1, maximum, minimum, count1 = 0, ansx, ansy;
	//freopen("text", "r", stdin);
	while (1) {
		scanf("%lu", &x);
		if (x == 0)
			break;
		n = 1;
		while ((tn1 = n * n - n + 1) <= x)
			n++;
		if (tn1 == x) {
			ansx = n, ansy = n;
			goto here;
		}
		n--;
		tn2 = n * n - n + 1;
		k = tn1 - x, j = tn2 - x;
		m = labs(k), i = labs(j);
		//printf("*%lu,%lu*", m, i);
		if (m > i) {
			tn = tn2;
		} else {
			tn = tn1;
			n++;
		}
		//printf("tn1=%lu,tn2=%lu, tn=%lu: ", tn1, tn2, tn);
		if (n % 2 == 1)
			if (x > tn)
				ansx = n - x + tn, ansy = n;
			else
				ansx = n, ansy = n + x - tn;
		else {
			if (x > tn)
				ansy = n - x + tn, ansx = n;
			else
				ansy = n, ansx = n + x - tn;
		}
		here: printf("%lu %lu\n", ansx, ansy);
	}
	return 0;
}

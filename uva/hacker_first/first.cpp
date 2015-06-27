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
char s[100009];
//BEFORE SUBMISSION, COMMENT OUT THIS LINE--> freopen("text", "r", stdin);

int main() {
	int l, a, b, c, m, n, i, x, y, j, k, t, sum = 0, cases = 1, maximum=0,
			minimum, count1 = 0;
	//freopen("text", "r", stdin);
	scanf("%s", s);
	l = strlen(s);
	rep(i,0,l-1)
	{
		if (s[i] == 'a') {
			count1++;
			maximum = max(maximum, count1);
		} else
			count1 = 0;
	}
	if (maximum != 0)
		rep(i,0,maximum)
			printf("a");
	else
		printf("a");
	printf("\n");
	return 0;
}

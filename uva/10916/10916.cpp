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
	int l, Y, a, b, c, m, n, i, y, j, k, t, cases = 1, maximum, minimum,
			count1 = 0;
	//freopen("text", "r", stdin);
	double sum;
	int x;
	while (1) {
		scanf("%d", &Y);
		if (Y == 0)
			break;
		sum = 0;
		x = pow(2, int((Y - 1960) / 10) + 2);
		//printf("->%d\n", x);
		i = 0;
		while (true) {
			i++;
			sum += log(i) / log(2);
			if (sum > x)
				break;
		}
		i--;
		printf("%d\n", i);
	}
	return 0;
}

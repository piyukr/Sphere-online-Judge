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

vector<unsigned long int> dist, in, fib;

//BEFORE SUBMISSION, COMMENT OUT THIS LINE--> freopen("text", "r", stdin);

int main() {
	int val, pos, l, a, b, c, m, n, i, x, y, j, k, t, sum = 0, cases = 1,
			maximum, minimum, count1 = 0;
	//freopen("text", "r", stdin);
	scanf("%d", &t);
	fib.resize(100);
	fib[0] = 1, fib[1] = 2;
	i = 2;
	while (i < 100) {
		fib[i] = fib[i - 1] + fib[i - 2];
		i++;
	}
	while (t--) {
	//printf("==>\n");
		maximum = 0;
		scanf("%d", &n);
		in.assign(100, 0);
		rep(i,0,n-1)
			scanf("%lu", &in[i]);
		getchar();
		char s[101], output[101];
		gets(s); // input string
		x = -1;
		memset(output, '\0', (sizeof(output)));
		rep(i,0,n-1)
		{
			val = in[i];
			pos = (lower_bound(fib.begin(), fib.end(), val) - fib.begin());
			x++;
			maximum = max(maximum, pos);
			while ((s[x] < 'A' || s[x] > 'Z') && x< strlen(s))
				x++;
			output[pos] = s[x];
		}
		//printf("max=%d\n", maximum);
		rep(i,0,maximum)
			if (!isupper(output[i]))
				output[i] = ' ';
		printf("%s\n", output);
	}
	return 0;
}

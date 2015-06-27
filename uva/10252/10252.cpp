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
int LCS[1001][1001];
//BEFORE SUBMISSION, COMMENT OUT THIS LINE--> freopen("text", "r", stdin);

int main() {
	int l, m, n, i, x, y, j, k, t, sum = 0, cases = 1, maximum, minimum,
			count1 = 0;
	//freopen("text", "r", stdin);
	// i HAVE USED 2 WAYS TO DO THIS PROBLEM:
	char a[1001], b[1001], lcs[1001], c[1001];
	while (gets(a)) {
		gets(b);
		memset(lcs, '\0', sizeof(lcs));
		m = strlen(a), n = strlen(b);
		sort(a, a + m), sort(b, b + n);
		//METHOD -1 STARTS BELOW:
		/*rep(i,0,m)
		 rep(j,0,n)
		 {
		 if (i == 0 || j == 0) {
		 LCS[i][j] = 0;
		 continue;
		 }
		 if (a[i - 1] == b[j - 1])
		 LCS[i][j] = LCS[i - 1][j - 1] + 1;
		 else
		 LCS[i][j] = max(LCS[i - 1][j], LCS[i][j - 1]);
		 }
		 int index = LCS[m][n];
		 char lcs[index];
		 lcs[index] = '\0';
		 i = m, j = n;
		 while (i > 0 && j > 0) {
		 if (a[i - 1] == b[j - 1]) {
		 lcs[index - 1] = a[i - 1];
		 index--, i--, j--;
		 } else if (LCS[i][j - 1] > LCS[i - 1][j])
		 j--;
		 else
		 i--;
		 }
		 //sort(lcs, lcs + x);
		 printf("%s\n", lcs);*/
		 
		 //METHOD-2 STARTS BELOW
		x = 0, y = 0;
		int index = 0;
		while (x < m && y < n) {
			while (a[x] < b[y]) {
				x++;
				if (x == m)
					goto here;
			}
			while (a[x] > b[y]) {
				y++;
				if (y == n)
					goto here;
			}
			if (a[x] == b[y]) {
				c[index++] = a[x];
				x++, y++;
			}
			here: ;
		}
		c[index] = '\0';
		printf("%s\n", c);
	}
	return 0;
}

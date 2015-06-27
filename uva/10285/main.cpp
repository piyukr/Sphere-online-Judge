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
int r, c, matrix[101][101], mem[101][101];
vi dist;


int bktk(int x, int y) {
	printf("->(%d,%d)",x,y);
	if (mem[x][y] != -1)
		return mem[x][y];
	int up = 0, down = 0, left = 0, right = 0;
	if (x != 0 && matrix[x - 1][y] < matrix[x][y])
		up = bktk(x - 1, y) + 1;
	printf("\n");
	if (x!= r - 1 && matrix[x + 1][y] < matrix[x][y])
		down = bktk(x + 1, y) + 1;
	printf("\n");
	if (y != 0 && matrix[x][y - 1] < matrix[x][y])
		left = bktk(x, y - 1) + 1;
	printf("\n");
	if (y != c - 1 && matrix[x][y + 1] < matrix[x][y])
		right = bktk(x, y + 1) + 1;
	printf("\n");
	return (mem[x][y] = max(up, max(down, max(left, right))));
}


/*
int bktk (int x, int y)
{
    if ( mem [x] [y] != -1 ) return mem [x] [y];

    int up = 0, down = 0, right = 0, left = 0;

    if ( x > 0 && matrix [x - 1] [y] < matrix [x] [y] )
        up = bktk (x - 1, y) + 1;

    if ( x < r - 1 && matrix [x + 1] [y] < matrix [x] [y] )
        down = bktk (x + 1, y) + 1;

    if ( y > 0 && matrix [x] [y - 1] < matrix [x] [y] )
        left = bktk (x, y - 1) + 1;

    if ( y < c - 1 && matrix [x] [y + 1] < matrix [x] [y] )
        right = bktk (x, y + 1) + 1;

    return mem [x] [y] = max (up, max (down, max (right, left)));
}
*/

int main() {
	string s;
	int l, b, c, r, m, n, i, x, y, j, k, t, sum = 0, cases = 1, maximum,
			minimum, count1 = 0;
	scanf("%d", &t);
	while (t--) {
		cin >> s >> r >> c;
		memset(mem, -1, sizeof(mem));
		for (i = 0; i < r; i++) {
			for (j = 0; j < c; j++) {
				scanf("%d", &matrix[i][j]);
			}
		}
		maximum = 0;
		for (i = 0; i < r; i++)
			for (j = 0; j < c; j++) {
				printf("**");
				int len = bktk(i, j);
				//printf("(%d,%d):%d\n", i, j, len);
				maximum = max(maximum, len);

			}
		cout << s + ": " << maximum << endl;
	}
	return 0;
}

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
	long int l, a, b, c, m, n, i, x, y, j, k, t, sum = 0, cases = 1, ansx, left,
			ansy, maximum, minimum, count1 = 0;
	//	freopen("text", "r", stdin);
	while (scanf("%ld", &n) != EOF) {
		//printf("n=%ld:\n", n);
		i = 1;
		sum = 3 * i * (i - 1) + 1;
		while (sum <= n) {
			i++;
			sum = 3 * i * (i - 1) + 1;
			//printf("i=%ld,sum=%ld\n", i, sum);
		}
		i--;
		//printf("i=%ld\n", i);
		sum = 3 * i * (i - 1) + 1;
		left = n - sum;
		ansx = i - 1;
		ansy = 0;
		one: if (left != 0) //up
				{
			ansy++;
			left--;
		}
		//printf("after 1:ansx=%ld,ansy=%ld,left=%ld\n", ansx, ansy, left);
		x = i - 1;
		two: while ((left != 0) && (x != 0)) { //north-west diagonal
			left--;
			ansx--;
			ansy++;
			x--;
		}
		//printf("after 2:ansx=%ld,ansy=%ld,left=%ld\n", ansx, ansy, left);
		x = i;
		three: while ((left != 0) && (x != 0)) { //west
			left--;
			x--;
			ansx--;
		}
		//printf("after 3:ansx=%ld,ansy=%ld,left=%ld\n", ansx, ansy, left);
		x = i;
		four: while ((left != 0) && (x != 0)) { //down
			left--;
			x--;
			ansy--;
		}
		//printf("after 4:ansx=%ld,ansy=%ld,left=%ld\n", ansx, ansy, left);
		x = i;
		five: while ((left != 0) && (x != 0)) { //south-east diagonal
			left--;
			x--;
			ansx++;
			ansy--;
		}
		//printf("after 5:ansx=%ld,ansy=%ld,left=%ld\n", ansx, ansy, left);
		x = i;
		six: while ((left != 0) && (x != 0)) { //east
			left--;
			x--;
			ansx++;
		}
		//printf("after 6:ansx=%ld,ansy=%ld,left=%ld\n", ansx, ansy, left);
		x = i;
		seven: while ((left != 0) && (x != 0)) { //up
			left--;
			x--;
			ansy++;
		}
		//printf("after 7:ansx=%ld,ansy=%ld,left=%ld\n", ansx, ansy, left);
		printf("%ld %ld\n", ansx, ansy);
	}
	return 0;
}

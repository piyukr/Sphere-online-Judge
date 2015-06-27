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

vector<unsigned long> dist;
set<unsigned long> humble_nos;

//BEFORE SUBMISSION, COMMENT OUT THIS LINE--> freopen("text", "r", stdin);

int main() {
	unsigned long int l, a, b, c, m, n, i, x, y, j, k, t, sum = 0, cases = 1,
			maximum, minimum, count1 = 0;
	//freopen("text", "r", stdin);
	humble_nos.insert(1);
	set<unsigned long>::iterator it = humble_nos.begin();
	while (humble_nos.size() < 9000) {
		humble_nos.insert(*it * 2);
		humble_nos.insert(*it * 3);
		humble_nos.insert(*it * 5);
		humble_nos.insert(*it * 7);
		it++;
	}
	vector<unsigned long> h(humble_nos.begin(), humble_nos.end());
	while (1) {
		scanf("%lu", &n);
		if (n == 0)
			break;
		int rem = n % 10;
		if (n % 100 == 11) {
			printf("The %luth humble number is ", n);
			goto here;
		}
		if (n % 100 == 12) {
			printf("The %luth humble number is ", n);
			goto here;
		}
		if (n % 100 == 13) {
			printf("The %luth humble number is ", n);
			goto here;
		}
		switch (rem) {
		case 1: {
			printf("The %lust humble number is ", n);
			break;
		}
		case 2: {
			printf("The %lund humble number is ", n);
			break;
		}
		case 3: {
			printf("The %lurd humble number is ", n);
			break;
		}
		default:
			printf("The %luth humble number is ", n);
		}
		here: printf("%lu.\n", h[n - 1]);
	}
	return 0;
}

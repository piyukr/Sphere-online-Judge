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
set<int> s;
vector<unsigned long int> vect, input;
map<unsigned long int, unsigned long int> its_set, set_size;
unsigned long int ar[100005], a, b;
void do_union(int x, int y) {
	int i, j;
	for (i = x; i != its_set[i]; i = its_set[its_set[i]])
		;
	for (j = y; j != its_set[j]; j = its_set[its_set[j]])
		;
	if (set_size[i] > set_size[j]) {
		set_size[i] += set_size[j];
		its_set[j] = its_set[i];
	} else {
		set_size[j] += set_size[i];
		its_set[i] = its_set[j];
	}
}

int main() {
	unsigned long int p, l, c, m, n, i = 1, x, y, j, k, t, sum = 0, cases = 1,
			pos, maximum = 0, minimum, counter = 1;
	scanf("%lu %lu %lu", &n, &k, &p);
	input.resize(n + 1);
	while (i <= n) {
		scanf("%lu", &x);
		input[i++] = x;
		maximum = max(maximum, x);
	}
	unsigned size = input.size();
	for (unsigned i = 0; i < size; ++i)
		s.insert(input[i]);
	vect.assign(s.begin(), s.end());
	for (i = 0; i < vect.size(); i++)
		its_set[vect[i]] = vect[i];
	for (i = 1; i <= n; i++) {
		pos = lower_bound(vect.begin(), vect.end(), input[i]) - vect.begin();
		if (vect[pos] - vect[pos - 1] <= k)
			do_union(vect[pos], vect[pos - 1]);
		else
			its_set[vect[pos]] = vect[pos];

	}
	while (p--) {
		scanf("%lu%lu", &a, &b);
		for (i = its_set[input[a]]; its_set[i] != i; i = its_set[its_set[i]])
			;
		for (j = its_set[input[b]]; its_set[j] != j; j = its_set[its_set[j]])
			;
		if (i == j)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}

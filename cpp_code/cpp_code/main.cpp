#include <iostream>
#include <map>
#include <vector>

#include "factorization.h"

using std::cin;
using std::cout;
using std::endl;

using std::map;
using std::vector;

int main() {
  base n = 0;
	cin >> n;

	map <base, unsigned> m;
	factorize (n, m, (base) 0);

	for (map <base, unsigned>::iterator i = m.begin(); i != m.end(); ++i) {
    cout << i->first << ' ' << i->second << endl;
  }

  return 0;
}

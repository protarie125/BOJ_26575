#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n; cin >> n;
	while (0 < (n--)) {
		double d; cin >> d;
		double f, p; cin >> f >> p;

		const auto& x = d * f * p;
		cout << '$' << fixed << setprecision(2) << round(x * 100) / 100 << '\n';
	}

	return 0;
}
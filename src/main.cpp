#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	auto n = int{};
	cin >> n;

	for (auto i = 0; i < n; ++i) {
		if (1 == i % 2) {
			cout << ' ';
		}
		for (auto j = 0; j < n; ++j) {
			cout << "* ";
		}
		cout << '\n';
	}

	return 0;
}
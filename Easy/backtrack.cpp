#include <iostream>
#include <functional>

using namespace std;

class solution {
  public:
    void backtrack() {
        int arr[5] = {10, 20, 30, 40, 50};
        // Recursive backtracking function
        function<void(int, int)> recurse = [&](int sum, int depth) {
            if (depth == 3) {
                cout << sum << endl;
                return;
            }
            // Going right: add +5
            recurse(sum + 5, depth + 1);
            // Going back: subtract 10 (add -10)
            recurse(sum - 10, depth + 1);
        };
        // Start with sum = 0, depth = 0
        recurse(0, 0);
    }
};
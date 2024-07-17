#include <iostream>
#include <vector>
using namespace std;

vector<int> block(int x) {
    vector<int> v;
    while (x > 0) {
        v.push_back(x % 2);
        x /= 2;
    }
    return v;
}

vector<vector<int>> make_grid(const int n_row) {
    vector<vector<int>> grid(n_row);

    for (int num = 1; num <= (1 << n_row) - 1; ++num) {
        vector<int> binary_digits = block(num);
        for (size_t column = 0; column < binary_digits.size(); ++column) {
            if (binary_digits[column] == 1) {
                grid[column].push_back(num);
            }
        }
    }

    return grid;
}

void cout_grid(const vector<vector<int>>& grid) {
    for (const auto& col : grid) {
        for (int num : col) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    int n_row;
    cout << "Number of rows: ";
    cin >> n_row;

    cout_grid(make_grid(n_row));

    return 0;
}

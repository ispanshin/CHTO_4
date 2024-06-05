#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <ctime>
#include <cassert>
#include <random>
#include <unordered_map>
#include <chrono>
#include <utility>
#include <numeric>
#include <bitset>
#include <unordered_set>
#include <queue>

using namespace std;

#define all(x) (x).begin(), (x).end()



int main(int argc, char *argv[]) {
    if (argc != 3) {
        throw std::invalid_argument("Too much arguments");
    }
    int n = stoi(argv[1]);
    int m = stoi(argv[2]);
    vector<vector<char>> v(n, vector<char> (m, '#'));
    for (int i = 0; i < m; ++i) {
        v[1][i] = ' ';
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << v[i][j];
        }
        cout << '\n';
    }
}

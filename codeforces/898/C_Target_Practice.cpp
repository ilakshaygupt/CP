#include <iostream>
#include <vector>

using namespace std;

int calculatePoints(vector<string>& grid) {
    int points = 0;
    for (int i = 0; i < 10; ++i) {
        for (int j = 0; j < 10; ++j) {
            if (grid[i][j] == 'X') {
                int distance = min(min(i, 9 - i),min( j, 9 - j)); 
                points +=  1+distance;
            }
        }
    }
    return points;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        vector<string> grid(10);
        for (int i = 0; i < 10; ++i) {
            cin >> grid[i];
        }

        int totalPoints = calculatePoints(grid);
        cout << totalPoints << endl;
    }

    return 0;
}

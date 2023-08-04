#include <iostream>
#include <vector>
using namespace std;

bool isBlack(char cell) {
    return cell == '#';
}

bool isWhite(char cell) {
    return cell == '.';
}

bool isValidBlock(const vector<string>& grid, int row, int col) {
    // Check if the block is a 3x3 region of black cells
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (!isBlack(grid[row + i][col + j])) {
                return false;
            }
        }
    }

    // Check if there are no black cells adjacent to the block
    int adjacent_r[] = {-1, -1, -1, 0, 0, 1, 1, 1};
    int adjacent_c[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            for (int k = 0; k < 8; ++k) {
                int r = row + i + adjacent_r[k];
                int c = col + j + adjacent_c[k];
                if (r >= 0 && r < grid.size() && c >= 0 && c < grid[0].size() && isBlack(grid[r][c])) {
                    return false;
                }
            }
        }
    }

    return true;
}


int main() {
    int N, M;
    cin >> N >> M;
    vector<string> grid(N);
    for (int i = 0; i < N; ++i) {
        cin >> grid[i];
    }

        
    for (int i = 0; i <= N - 9; ++i) {
        for (int j = 0; j <= M - 9; ++j) {
            if (isBlack(grid[i][j]) && isValidBlock(grid, i, j) && isValidBlock(grid, i + 6, j + 6)) {
                cout<<i+1<<" "<<j+1<<endl;
            }
        }
    }


   

    return 0;
}

def is_black(cell):
    return cell == '#'

def is_white(cell):
    return cell == '.'

def is_tak_code_region(grid, row, col):
    # Check condition 1: All 18 cells in the top-left and bottom-right three-by-three regions are black.
    if not all(all(is_black(grid[row + i][col + j]) for j in range(3)) for i in range(3)):
        return False

    if not all(all(is_black(grid[row + i][col + j]) for j in range(6, 9)) for i in range(6, 9)):
        return False

    # Check condition 2: All 14 cells adjacent to the top-left or bottom-right three-by-three region are white.
    adjacent_cells = [
        (row - 1, col - 1), (row - 1, col), (row - 1, col + 1),
        (row, col - 1), (row, col + 1),
        (row + 1, col - 1), (row + 1, col), (row + 1, col + 1)
    ]
    for r, c in adjacent_cells:
        if not is_white(grid[r][c]):
            return False

    return True

def find_tak_codes(N, M, grid):
    tak_codes = []
    for i in range(N - 8):
        for j in range(M - 8):
            if is_tak_code_region(grid, i, j):
                tak_codes.append((i + 1, j + 1))  # Adjusting to 1-based indexing

    return tak_codes

# Read input
N, M = map(int, input().split())
grid = [input() for _ in range(N)]

# Find TaK Codes
result = find_tak_codes(N, M, grid)

# Output the result
for i, j in result:
    print(i, j)

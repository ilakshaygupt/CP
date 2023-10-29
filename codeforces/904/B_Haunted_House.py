def min_operations_to_divisible(t, test_cases):
    results = []

    for _ in range(t):
        n, binary_str = test_cases[_]
        prefix_sum = [0] * (n + 1)

        # Calculate the prefix sum of 1s in the binary string
        for i in range(n):
            prefix_sum[i + 1] = prefix_sum[i] + int(binary_str[i])

        min_operations = [-1] * n

        for i in range(1, n + 1):
            if n % i == 0:
                min_swaps = 0
                target_ones = i // 2

                for j in range(1, n):
                    if prefix_sum[j] != target_ones:
                        min_swaps += 1

                min_operations[i - 1] = min_swaps

        results.append(min_operations)

    return results

# Input
t = int(input())
test_cases = []
for _ in range(t):
    n = int(input())
    binary_str = input()
    test_cases.append((n, binary_str))

# Calculate and print results
results = min_operations_to_divisible(t, test_cases)
for result in results:
    print(" ".join(map(str, result)))

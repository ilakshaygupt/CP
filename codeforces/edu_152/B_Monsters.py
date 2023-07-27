import heapq

def monster_killing_order(n, k, health_points):
    # Create a priority queue with pairs of health points and monster indices
    priority_queue = [(-health_points[i], i) for i in range(n)]
    heapq.heapify(priority_queue)

    order_of_death = []
    while priority_queue:
        # Extract the monster with the highest health points
        current_health, monster_index = heapq.heappop(priority_queue)
        order_of_death.append(monster_index + 1)  # +1 to convert 0-based index to 1-based index

        # Update the monster's health points
        current_health += k

        # Re-insert the monster back into the priority queue if it's still alive
        if current_health > 0:
            heapq.heappush(priority_queue, (current_health, monster_index))

    return order_of_death

# Input
t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    health_points = list(map(int, input().split()))

    # Output
    result = monster_killing_order(n, k, health_points)
    print(*result)

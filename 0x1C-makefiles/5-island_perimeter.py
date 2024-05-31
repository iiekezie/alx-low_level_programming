#!/usr/bin/python3
"""
Module to calculate the perimeter of an island in a grid.
"""

def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.

    Args:
        grid (list of list of int): A list of list of integers where 0 represents a water zone
                                    and 1 represents a land zone.

    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0
    rows = len(grid)
    cols = len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # Check for top
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                # Check for bottom
                if i == rows - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                # Check for left
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                # Check for right
                if j == cols - 1 or grid[i][j + 1] == 0:
                    perimeter += 1

    return perimeter

# Uncomment the following lines to test the function with the given example
"""
grid = [
    [0, 0, 0, 0, 0, 0],
    [0, 1, 0, 0, 0, 0],
    [0, 1, 0, 0, 0, 0],
    [0, 1, 1, 1, 0, 0],
    [0, 0, 0, 0, 0, 0]
]
print(island_perimeter(grid))
"""
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
    cols = len(grid[0]) if rows > 0 else 0

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # Each land cell contributes 4 to perimeter
                perimeter += 4
                # If the cell above is also land, remove 2 from perimeter (shared edge)
                if i > 0 and grid[i-1][j] == 1:
                    perimeter -= 2
                # If the cell to the left is also land, remove 2 from perimeter (shared edge)
                if j > 0 and grid[i][j-1] == 1:
                    perimeter -= 2

    return perimeter

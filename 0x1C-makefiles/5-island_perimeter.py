#!/usr/bin/python3
"""
Function that returns the perimeter of the island described in grid.
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.

    Parameters:
    grid (list of list of integers): A 2D grid where 1 represents
    land and 0 represents water.

    Returns:
    int: The perimeter of the island.
    """
    perimeter = 0

    # Loop through each cell in the gridi
    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                # Check the four neighbors (up, down, left, right)
                # Up (i-1, j)
                if i == 0 or grid[i-1][j] == 0:
                    perimeter += 1
                # Down (i+1, j)
                if i == len(grid) - 1 or grid[i+1][j] == 0:
                    perimeter += 1
                # Left (i, j-1)
                if j == 0 or grid[i][j-1] == 0:
                    perimeter += 1
                # Right (i, j+1)
                if j == len(grid[i]) - 1 or grid[i][j+1] == 0:
                    perimeter += 1

    return perimeter

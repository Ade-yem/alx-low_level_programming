#!/usr/bin/python3
"""module for the function to determine the perimeter of the island"""


def island_perimeter(grid):
    """Function to determine the perimeter of an island
    Args:
        grid (list): a list of integers
    Returns:
        the perimeter of the grid
    """
    width = len(grid[0])
    height = len(grid)
    perimeter = 0

    for h in range(height):
        for w in range(width):
            if grid[h][w] == 1:
                if h - 1 == -1 or grid[h - 1][w] == 0:
                    perimeter += 1
                if h + 1 == height or grid[h + 1][w] == 0:
                    perimeter += 1
                if w - 1 == -1 or grid[h][w - 1] == 0:
                    perimeter += 1
                if w + 1 == width or grid[h][w + 1] == 0:
                    perimeter += 1
    return perimeter

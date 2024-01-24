#!/usr/bin/python3
"""Returns the perimeter of the island described in grid."""


def island_perimeter(grid):
    """Returns perimiter.

     water represented by 0 and land by 1.

    Args:
        grid (list): list of numbers representing an island.
    Returns:
     perimeter of the island defined in grid.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for x in range(height):
        for y in range(width):
            if grid[x][y] == 1:
                size += 1
                if (y > 0 and grid[x][y - 1] == 1):
                    edges += 1
                if (x > 0 and grid[x - 1][y] == 1):
                    edges += 1
    return size * 4 - edges * 2

#!/usr/bin/python3
"""Technical Interview Preparation."""


def island_perimeter(grid):
    """Find perimeter of an Island.

    Args:
        @grid (list): Describes the perimeter

    Description:
        grid is a list of integers where:
            0: Water Zone
            1: Land Zone
            side(cell) = 1 unit length
            Vertical&Horizontally connected grid
            Rectangular grid; width/height <= 100
        Island--Grid surrounded by water
        No lakes in grid/Island
    Return:
        Perimeter of the Island.
    """
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2

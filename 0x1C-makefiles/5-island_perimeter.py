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
    flag, perimeter = 0, 0

    if not isinstance(grid, list) or not isinstance(grid[0], list):
        return 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if j == 1:
                flag = 1
            try:
                if grid[i][j] == 0:
                    if grid[i][j + 1] == 1:
                        perimeter += 1
                    if grid[i][j - 1] == 1:
                        perimeter += 1
                    if grid[i - 1][j] == 1:
                        perimeter += 1
                    if grid[i + 1][j] == 1:
                        perimeter += 1
                else:
                    temp = grid[i][j + 1]
                    temp = grid[i][j - 1]
                    temp = grid[i + 1][j]
                    temp = grid[i - 1][j]
            except IndexError as e:
                if grid[i][j] == 1:
                    perimeter += 1

    if perimeter == 0 and flag == 1:
        perimeter = (2 * len(grid)) + (2 * len(grid[1]))
    return perimeter

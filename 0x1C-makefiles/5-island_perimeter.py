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
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
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
            except IndexError as e:
                # print(e)
                pass
    return perimeter
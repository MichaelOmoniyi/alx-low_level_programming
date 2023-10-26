#!/usr/bin/python3

""" This module calculates the perimeter of an island """


def island_perimeter(grid):
    """ The function returns the perimeter of the island described in grid """

    row = len(grid)
    col = len(grid[0])
    perimeter = 0

    for i in range(row):
        for j in range(col):
            if grid[i][j] == 1:
                perimeter += 4  # Assume 4 sides initially

                # Check neighboring cells and subtract 1 for each adjacent land cell
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 1
                if i < row - 1 and grid[i + 1][j] == 1:
                    perimeter -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 1
                if j < col - 1 and grid[i][j + 1] == 1:
                    perimeter -= 1

    return perimeter

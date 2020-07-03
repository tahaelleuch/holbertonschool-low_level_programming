#!/usr/bin/python3
"""island module"""


def island_perimeter(grid):
    """get the perimter of the island"""
    if not grid:
        return 0

    peri = 0
    one_per = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if (grid[i][j] == 1):
                one_per = get_perimeter(grid, i, j)
                if one_per == 4:
                    continue
                else:
                    peri = peri + one_per
    if peri == 0 and one_per == 4:
        peri = 4
    return peri

def get_perimeter(grid, i, j):
    """get the perimeter of one cell"""
    count = 0
    if grid[i-1][j] == 0 or i == 0:
        count += 1
    try:
        if grid[i+1][j] == 0 or i == len(grid)-1 :
            count += 1
    except IndexError:
        count += 1
    if grid[i][j-1] == 0 or j == 0:
        count += 1
    try:
        if grid[i][j+1] == 0 or j == len(grid):
            count += 1
    except IndexError:
        count += 1
    return count

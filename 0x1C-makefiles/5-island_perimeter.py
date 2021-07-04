#!/usr/bin/python3
""" This module contains an only func to describe a perimeter """


def island_perimeter(grid):
    """ Returns perimeter of island described in grid. """
    sum = 0

    for line in range(len(grid)):
        for column in range(len(grid[line])):
            value = grid[line][column]
            water_borders = 4
            if value == 1:
                if line != len(grid) - 1 and grid[line + 1][column] == 1:
                    water_borders -= 1
                if line != 0 and grid[line - 1][column] == 1:
                    water_borders -= 1
                if column != len(grid[0]) - 1 and grid[line][column + 1] == 1:
                    water_borders -= 1
                if column != 0 and grid[line][column - 1] == 1:
                    water_borders -= 1
                sum += water_borders
    return sum

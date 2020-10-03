# Rubiks-cube-solver

This is a program that will solve any scramble of a Rubiks cube and print the solution on the screen.
It is intended to be used with a physical robot that solves a (physical) Rubiks cube but it can be used just as a tool to get a solution for a cube which you then solve yourself.

## Prerequisites

In order to use the program it is needed to understand basic notation of a Rubiks cube.
Here is a link to Ruwix.com for a full explanation on how notation works:https://ruwix.com/the-rubiks-cube/notation/
There is however one change that has been made regarding the notation for this program.
Instead of using a
```
'
```
after a character to get a counterclockwise move the charcater is written in lowercase.
So this:
```
F'R'U'L'B'D'
```
becomes this:
```
frulbd
```
this makes the only characters allowed to:
```
FRULBD
```
and
```
frulbd
```

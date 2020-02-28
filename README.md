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

## Download

This program is built for windows use only since the (very basic) GUI is built using the Win32 API.
To get the files, simply download or clone them to a local repository. Then use a debugger of choice to run the code.

## Usage

Once the code is up and running it will generate the following window:
![Image of app window](https://raw.githubusercontent.com/LucasGaddnas/Rubiks-cube-solver/master/images/GUI.png)

The upper box is for inputting the scramble and the lower box prints the solution.
The scramble must solely consist of characters that are used for scrambles, if a character that is not recognized by the program is input an error message will be printed (this includes spaces and new lines).

In the 'File' dropdown menu there is a 'Save' and an 'Open' button. These do not yet have any functionality.

## Note

This is not a completed project. It is just a playfull project that probably will be remade in the future.

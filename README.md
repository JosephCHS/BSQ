# BSQ
Find the Biggest Square

## Description
BSQ is a program that finds the largest possible square on a map while avoiding obstacles. The program reads a map from a file where:
- First line contains the number of rows
- Empty places are represented by '.'
- Obstacles are represented by 'o'
- The program marks the largest square with 'x'

## Usage
```bash
make
./bsq map_file
```

## Map Format Example
```
4
o...
....
....
....
```
Will output:
```
o...
.xxx
.xxx
.xxx
```

## Authorized Functions
- open
- read
- write
- close
- malloc
- free
- exit
- stat

## Build
The project uses a Makefile with the following commands:
- `make`: Build the project
- `make clean`: Remove object files
- `make fclean`: Remove object files and binary
- `make re`: Rebuild the project

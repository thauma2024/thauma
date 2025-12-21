#include <stdio.h>
#include <string.h>
#include "robots.h"

//{N,E,S,W}

/* Direction tables for convenience (do NOT modify) */
static const int DX[4] = {0, 1, 0, -1};  // step in x for N,E,S,W(delta x)
static const int DY[4] = {1, 0, -1, 0};  // step in y for N,E,S,W
static const Direction LEFT_OF[4] = {DIR_W, DIR_N, DIR_E, DIR_S};//the direction after turning left(eg.N -> W)
static const Direction RIGHT_OF[4] = {DIR_E, DIR_S, DIR_W, DIR_N};

/* Convert a direction character ('N','E','S','W') to a Direction value
   If c is not one of these, return DIR_N by default. */
Direction dir_from_char(char c) {
    switch (c) {
        case 'N': return DIR_N;
        case 'E': return DIR_E;
        case 'S': return DIR_S;
        case 'W': return DIR_W;
        default: return DIR_N;
    }
}

/* Convert a Direction value to the corresponding character ('N','E','S','W'). */
char char_from_dir(Direction d) {
    switch (d) {
        case DIR_N: return 'N';
        case DIR_E: return 'E';
        case DIR_S: return 'S';
        case DIR_W: return 'W';
        default: return 'N';
    }
}

/* Rotate the robot 90 degrees to the left (counterclockwise). */
void turn_left(Robot *r) {
    r->dir = LEFT_OF[r->dir];//change dir by being access to direction left of (eg. r->dir was N, left of process , return W, so now r -> dir is W)
}

/* Rotate the robot 90 degrees to the right (clockwise). */
void turn_right(Robot *r) {
    r->dir = RIGHT_OF[r->dir];
}

/* Compute the forward step for a given direction.
   After calling this, (*dx,*dy) should hold the change in (x,y)
   if a robot moves one cell forward while facing d. */
void forward_delta(Direction d, int *dx, int *dy) {
    *dx = DX[d];
    *dy = DY[d];//store the delta x,y in pointers
}

/* Return 1 if (x,y) is inside the N x N grid (0 <= x < N, 0 <= y < N),
   otherwise return 0. */
int inside(int N, int x, int y) {
    return (x >= 0 && x < N && y >= 0 && y < N);//true 1 ; false 0;
}

/* Find the index of the robot whose name matches 'name' in rs[0..m-1].
   Return the index if found, or -1 if there is no such robot. */
int find_robot(Robot *rs, int m, const char *name) {//array of robots, number of robots, their names
    for (int i = 0; i < m; i++) {//check one by one
        if (strcmp(rs[i].name, name) == 0) {// same 0; different 1;
            return i;
        }
    }
    return -1;//fail to find
}

/* Move R[idx] according to the defined rule.
   - occ[y][x] is either EMPTY or a robot's index. */
void step_forward(int N, int occ[][MAXN], Robot R[], int idx) {//occupation, robot array(defined in main), index
    int dx, dy;
    forward_delta(R[idx].dir, &dx, &dy);
    
    int nx = R[idx].x + dx;//add dx to original x
    int ny = R[idx].y + dy;
    
    if (!inside(N, nx, ny)) {
        return;
    }
    
    if (occ[ny][nx] != EMPTY) {
        printf("COLLISION %s %s\n", R[idx].name, R[occ[ny][nx]].name);//original robot here & newly moving robot here
        return;
    }
    
    occ[R[idx].y][R[idx].x] = EMPTY;//remove mark
    R[idx].x = nx;
    R[idx].y = ny;
    occ[ny][nx] = idx;//set new mark
}
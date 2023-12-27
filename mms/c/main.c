#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <math.h>
#include "API.h"

void log(char *text);
int manhattan_distance(node *a, node *b);
float euclidean_distance(node *a, node *b);

typedef struct node 
{
    int x, y;
    float f_cost, g_cost, h_cost;
    struct node *neighbours;
} node;

int main(int argc, char *argv[])
{
    log("Running...");
    API_setColor(0, 0, 'G');
    API_setText(0, 0, "abc");

    int width = API_mazeWidth;
    int height = API_mazeHeight;

    char maze[height][width];
    for (int x = 0; x < width; x++)
    {
        for (int y = 0; y < height; y++)
        {
            maze[y][x] = " ";
        }
    }

    node *start = malloc(sizeof(node));
    start->x = 0;
    start->y = 0; 
}

int manhattan_distance(node *a, node *b) 
{
    int dx = b->x - a->x;
    int dy = b->y - a->y;

    return abs(dx) + abs(dy);
}

float euclidean_distance(node *a, node *b)
{
    int dx = b->x - a->x;
    int dy = b->y - a->y;

    return sqrt(pow(dx, 2) + pow(dy, 2) * 1.0);
}

void log(char *text)
{
    frprint(stderr, "%s\n", text);
    fflush(stderr);
}
#include <stdio.h>
#include <math.h>
#include <iostream>

const int WIDTH = 60;
const int HEIGHT = 20;
int X = WIDTH / 2;
int Y = HEIGHT / 2;
int XMAX = WIDTH - X;
int XMIN = -WIDTH + X;
int YMAX = HEIGHT - Y;
int YMIN = -HEIGHT + Y;
using namespace std;
char graph[HEIGHT][WIDTH];
int set(int x, int y)
{
    graph[Y - y][X + x] = '*';
    return(1);
}
int main()
{
    
    int x, y;

    for (y = 0; y < HEIGHT; y++)
        for (x = 0; x < WIDTH; x++)
            graph[y][x] = ' ';
    for (y = 0; y < HEIGHT; y++)
        graph[y][X] = '|';
    for (x = 0; x < WIDTH; x++)
        graph[Y][x] = '-';

    float x1, y1;
    for (x1 = -3.14159; x1 <= 3.14159; x1 += 0.1)
    {
        y1 = sin(x1);
        set(rintf(x1 * 10), rintf(y1 * 8));
    }
    for (y = 0; y < HEIGHT; y++)
    {
        for (x = 0; x < WIDTH; x++)
            cout << (graph[y][x]);
        cout << ('\n');
    }

    return(0);
}

#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <queue>

using namespace std;

bool gameOver;
const int width = 20;
const int height = 20;
enum dir {stop = 0, left_, up_, right_, down_};
dir e;

int sizeSnake;

queue<int> coordsX;
queue<int> coordsY;
int x, y, dotX, dotY, score;


void setup(){
    gameOver = false;
    sizeSnake = 3;
    e = stop;

    x = width / 2 - 1;
    y = height / 2 - 1;

    dotX = rand()%width;
    dotY = rand()%height;

    score = 0;
}

void draw(){
    system("cls");  //clear window
    for(int i = 0;i<width; i++){
        cout<<"#";
    }
    cout<<endl;

    for(int i = 0;i<height; i++){
        for(int j = 0;j<width;j++){
            if(j == 0 || j == width-1){
                cout<<"#";
            }else if(i == y&&j == x){
                for(int t = 0; t<sizeSnake;t++){
                    cout<<"o";
                }
                cout<<"O";
            }else if(i == dotY && j == dotX){
                cout<<"X";
            }else{
                cout<<" ";
            }
        }
        cout << endl;
    }

    for(int i = 0;i<width; i++){
        cout<<"#";
    }
    cout<<endl;
    cout << "Score: "<< score<< endl;
    //cout << x<<" "<<y<<endl;
    //cout << dotX<<" "<<dotY<<endl;
}

void inKey(){
    if(_kbhit()){
        switch(_getch()){
            case 'a':
                e = left_;
                break;
            case 'd':
                e = right_;
                break;
            case 'w':
                e = up_;
                break;
            case 's':
                e = down_;
                break;
            case 'x':
                gameOver = true;
                break;
        }
    }
}

void gamePlay(){
    switch(e){
        case left_:
            x--;
            break;
        case right_:
            x++;
            break;
        case up_:
            y--;
            break;
        case down_:
            y++;
            break;
    }

    if (x > width-2)
        x = 0;
    if (x < 0)
        x = width-2;
    if (y > height-1)
        y = 0;
    if (y < 0)
        y = height-1;

    if(x == dotX && y == dotY){
        score += 20;

        dotX = rand() % width;
        dotY = rand() % height;
    }

}

int main()
{
    setup();
    while(!gameOver){
        inKey();
        gamePlay();
        draw();
        Sleep(250);
    }
    return 0;
}

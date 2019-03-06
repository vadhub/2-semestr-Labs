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

int tX[100];
int tY[100];
int sizeSnake;
int x, y, dotX, dotY, score;
int chit;


void setup(){
    gameOver = false;

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
                cout<<"O";
            }else if(i == dotY && j == dotX){
                cout<<"X";
            }else{
                bool print = false;
                for(int k = 0;k<sizeSnake; k++){
                    if(tX[k] == j && tY[k] == i){
                        cout<<"o";
                        print = true;
                    }
                }
                if(!print){
                    cout<<" ";
                }
            }
        }
        cout << endl;
    }

    for(int i = 0;i<width; i++){
        cout<<"#";
    }
    cout<<endl;
    cout << "Score: "<< score<< endl;
    cout << chit<< endl;
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
            case 'b':
                chit +=1;
            case 'i':
                chit +=-2;
            case 'g':
                chit +=3;
        }
    }
}

void gamePlay(){
    int startX = tX[0];
    int startY = tY[0];
    int nextX, nextY;
    tX[0] = x;
    tY[0] = y;

    for(int i = 0;i<sizeSnake; i++){
            nextX = tX[i];
            nextY = tY[i];
            tX[i] = startX;
            tY[i] = startY; //321>  213>
            startX = nextX;
            startY = nextY;
    }

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

    if (x > width)
        x = 1;
    if (x < 0)
        x = width;
    if (y > height-1)
        y = 0;
    if (y < 0)
        y = height-1;

    if(x == dotX && y == dotY){
        score += 20;
        sizeSnake++;
        dotX = rand() % width;
        dotY = rand() % height;
    }
    for(int i = 0; i<sizeSnake; i++){
        if(tX[i]== x && tY[i] == y){
            gameOver = true;
        }
    }

    if(chit == 2){
        score += 100000000;
        chit = 0;
    }
    if(chit == 6){
        sizeSnake += 20;
        chit = 0;
    }
}

int main(){
    setup();
    while(!gameOver){
        inKey();
        gamePlay();
        draw();
        Sleep(250);
    }
    return 0;
}

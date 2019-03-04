#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>

using namespace std;

bool gameOver;
const int width = 20;
const int height = 20;
enum eNum {stop, left_, up_, right_, down_};
eNum switching;

int x, y, dotX, dotY, score;


void setup(){
    gameOver = false;

    switching = stop;

    x = width / 2;
    y = height / 2;

    dotX = rand()%width-1;
    dotY = rand()%height-1;

    score = 0;
}

void draw(){
    system("cls");  //clear window
    for(int i = 0;i<width+1; i++){
        cout<<"#";
    }
    cout<<endl;

    for(int i = 0;i<height; i++){
        for(int j = 0;j<width;j++){
            if(j == 0 || j == width-1){
                cout<<"#";
            }

            if(i==y&&j==x){
                cout<<"O";
            }else if(i == dotX && j == dotY){
                cout<<"@";
            }else{
                cout<<" ";
            }
        }
        cout << endl;
    }

    for(int i = 0;i<width+1; i++){
        cout<<"#";
    }
    cout<<endl;

}

void inKey(){
    if(_kbhit()){
        switch(_getch()){
            case 'a':
                switching = left_;
                break;
            case 'd':
                switching = right_;
                break;
            case 'w':
                switching = up_;
                break;
            case 's':
                switching = down_;
                break;
            case 't':
                gameOver = true;
                break;
        }
    }
}

void gamePlay(){
    switch(switching){
        case left_:
            x--;
            break;
        case up_:
            y--;
            break;
        case right_:
            x++;
            break;
        case down_:
            y++;
            break;
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
    cout<<left;
    return 0;
}

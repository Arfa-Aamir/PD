#include<iostream>
#include<windows.h>
using namespace std;
void gotoxy(int x,int y);
char getCharAtxy(short int x, short int y);
void printenemy();
void eraseenemy();
void printenemy2();
void eraseenemy2();
void moveEnemy2();
void eraseplayer();
void printplayer();
void moveplayerleft();
void moveplayerright();
void moveplayerup();
void moveplayerdown();
void moveenemy();
void printmaze();
int ex=20, ey=2;
int exa=30, eya=2;
int px=20, py=18;
main()
{
    system("cls");
    printmaze();
    printenemy();
    printplayer();
    while(true)
    {
        if(GetAsyncKeyState(VK_LEFT))
        {
            moveplayerleft();
        }
        if(GetAsyncKeyState(VK_RIGHT))
        {
            moveplayerright();
        }
        if(GetAsyncKeyState(VK_UP))
        {
            moveplayerup();
        }
        if(GetAsyncKeyState(VK_DOWN))
        {
            moveplayerdown();
        }
        moveenemy();
        Sleep(400);
        moveEnemy2();
        Sleep(200);
    
    }
}
void gotoxy(int x,int y)
{
    COORD coordinates;
    coordinates.X=x;
    coordinates.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}
void printmaze()
{
    cout<<"#######################################################################################################"<<endl;
    cout<<"#                                                                                                     #"<<endl;
    cout<<"#                                                                                                     #"<<endl;
    cout<<"#                                                                                ######################"<<endl;
    cout<<"#                                                                                #                    #"<<endl;
    cout<<"#                                                                                ################     #"<<endl;
    cout<<"##############                                                                              #   ##    #"<<endl;
    cout<<"#            #                                                                              #   ##    #"<<endl;
    cout<<"#       #    #                                                                              ######    #"<<endl;
    cout<<"#       #    #                                                                                        #"<<endl;
    cout<<"#       #    #                                                                                        #"<<endl;
    cout<<"#       #    #                                                                                        #"<<endl;
    cout<<"#       ######                                                                                        #"<<endl;
    cout<<"#                                                                                                     #"<<endl;
    cout<<"#                                                                                       ######        #"<<endl;
    cout<<"#                                                                                       #    #        #"<<endl;
    cout<<"#                                                                                       #    ##       #"<<endl;
    cout<<"#                                                                                       #    ##       #"<<endl;
    cout<<"#                                                                                       #             #"<<endl;
    cout<<"#                                                                                       ###############"<<endl;
    cout<<"#                                                                                                     #"<<endl;
    cout<<"#                                                                                                     #"<<endl;
    cout<<"#                                                                                                     #"<<endl;
    cout<<"#      ######                                                                                         #"<<endl;
    cout<<"#      #    #                                                                                         #"<<endl;
    cout<<"#      #    #                                                                                         #"<<endl;
    cout<<"#############                                                                                         #"<<endl;
    cout<<"#                                                                                                     #"<<endl;
    cout<<"#######################################################################################################"<<endl;                      
      
}
void printplayer()
{
    gotoxy(px, py);
    cout<<"   /~\\ ";
    gotoxy(px, py+1);
    cout<<"  | 00] ";
    gotoxy(px, py+2);
    cout<<"  \\ = / ";
    gotoxy(px, py+3);
    cout<<" --   -- ";
    gotoxy(px, py+4);
    cout<<"||     ||";
    gotoxy(px, py+5);
    cout<<"---------";
    gotoxy(px, py+6);
    cout<<"| |    | |";
    gotoxy(px, py+7);
    cout<<"[ ]    [ ]";
    gotoxy(px, py+8);
    cout<<"/ \\    / \\";

}
void eraseplayer()
{
    gotoxy(px, py);
    cout<<"             ";
    gotoxy(px, py+1);
    cout<<"             ";
    gotoxy(px, py+2);
    cout<<"             ";
    gotoxy(px, py+3);
    cout<<"             ";
    gotoxy(px, py+4);
    cout<<"             ";
    gotoxy(px, py+5);
    cout<<"             ";
    gotoxy(px, py+6);
    cout<<"             ";
    gotoxy(px, py+7);
    cout<<"             ";
    gotoxy(px, py+8);
    cout<<"             ";

}
    void moveplayerleft()
    {
        if(getCharAtxy(px - 1, py)== ' ')
        {
            eraseplayer();
            px= px - 1;
            printplayer();
        }
    }
    void moveplayerright()
    {
        if(getCharAtxy(px + 15, py)== ' ')
        {
            eraseplayer();
            px= px + 1;
            printplayer(); 
        }
    }
        void moveplayerup()
        {
            if(getCharAtxy(px, py - 1)== ' '){
                if(getCharAtxy(px + 1, py - 1)== ' '){
                    if(getCharAtxy(px + 2, py - 1)== ' '){
                        if(getCharAtxy(px + 3, py - 1)== ' '){
                             if(getCharAtxy(px + 4, py - 1)== ' '){
                                if(getCharAtxy(px + 5, py - 1)== ' '){
                                     if(getCharAtxy(px + 6, py - 1)== ' '){
                                         if(getCharAtxy(px + 7, py - 1)== ' '){
                                             if(getCharAtxy(px + 8, py - 1)== ' '){
                                                 if(getCharAtxy(px + 9, py - 1)== ' '){
                                                     if(getCharAtxy(px + 10, py - 1)== ' '){
                                                     eraseplayer();
                                                            py=py - 1;
                                                            printplayer();

                                                     }
                                                 }
                                             }
                                         }
                                     }
                                }
                             }

                        }
                    }
                }
            }
           
        }
        void moveplayerdown()
        {
            if(getCharAtxy(px, py + 9 )== ' '){
                if(getCharAtxy(px + 1 , py + 9)== ' '){
                    if(getCharAtxy(px + 2, py + 9)== ' '){
                        if(getCharAtxy(px + 3 , py + 9)== ' '){
                             if(getCharAtxy(px + 4 , py +9)== ' '){
                                if(getCharAtxy(px + 5 , py + 9)== ' '){
                                     if(getCharAtxy(px + 6 , py + 9)== ' '){
                                         if(getCharAtxy(px + 7, py + 9)== ' '){
                                             if(getCharAtxy(px + 8 , py + 9)== ' '){
                                                            eraseplayer();
                                                            py= py + 1;
                                                            printplayer();
                                             }
                                         }
                                     }
                                }
                             }

                        }
                    }
                }
            }
           
        }
        
        
           
    
    void printenemy()
    {
        gotoxy(ex, ey);
        cout<<" ____ ";
        gotoxy(ex, ey + 1);
        cout<<"(    ) ";
        gotoxy(ex, ey + 2);
        cout<<"( 00 )";
        gotoxy(ex, ey + 3);
        cout<<" ----- ";
        gotoxy(ex,  ey + 4);
        cout<<"||   ||";
        gotoxy(ex,  ey + 5);
        cout<<"||   ||";
        gotoxy(ex, ey + 6);
        cout<<"/_\\ /_\\";
    }
    void eraseenemy()
    {
        gotoxy(ex, ey);
        cout<<"         ";
        gotoxy(ex, ey + 1);
        cout<<"         ";  
        gotoxy(ex, ey + 2);
        cout<<"         ";  
        gotoxy(ex, ey + 3);
        cout<<"         "; 
        gotoxy(ex, ey + 4);
        cout<<"         ";  
        gotoxy(ex, ey + 5);
        cout<<"         ";  
        gotoxy(ex, ey + 6);
        cout<<"         ";       
    }
    void moveenemy()
    {
        eraseenemy();
        ex= ex + 1;
        if(ex==50)
        {
            ex=20;      
        }
        printenemy();
        
    }
    char getCharAtxy(short int x, short int y)
    {
        CHAR_INFO ci;
        COORD xy= {0,0};
        SMALL_RECT rect = {x, y, x , y};
        COORD coordBufSize;
        coordBufSize.X= 1;
        coordBufSize.Y= 1;
        return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar: ' ';
    }
    void printenemy2()
    {
        gotoxy(exa, eya);
        cout<<" __________";
        gotoxy(exa + 1, eya + 1);
        cout<<"|   00    |";
        gotoxy(exa + 2, eya + 2);
        cout<<"|         |";
        gotoxy(exa + 3, eya + 3);
        cout<<"/--\\   /--\\";

    }
    void eraseenemy2()
    {
         gotoxy(exa, eya);
        cout<<"           ";
        gotoxy(exa + 1, eya + 1);
        cout<<"           ";
        gotoxy(exa + 2, eya + 2);
        cout<<"           ";
        gotoxy(exa + 3, eya + 3);
        cout<<"           ";
    }
    void moveEnemy2()
    {
        eraseenemy2();
        eya= eya + 1;
        if(eya==6)
        {
            eya=2 ;
        }
        exa= exa + 1;
        if(exa==40)
        {
            exa= 15;
        }
        printenemy2();
    }
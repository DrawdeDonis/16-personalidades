#include<iostream>
#include<conio.h>
#include<cstring>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#define color SetConsoleTextAttribute
using namespace std;

void gotoxy(int x, int y)
{
	HANDLE hcon;
	hcon=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X=x;
	dwPos.Y=y;
	SetConsoleCursorPosition(hcon,dwPos);
}

struct per16{
	string tipo;
}per[15];

int main()
{
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	system("cls");
	char visualizacion[16][16], flag1=0;
	int colores[16][16]={0,11,11,2,11,14,2,14,14,4,4,4,11,14,4,2,11,0,14,11,2,11,4,2,11,14,4,14,4,4,4,4,
						11,2,0,11,2,4,11,14,4,4,4,14,14,4,14,11,2,11,2,0,14,2,14,11,14,4,14,11,4,4,4,14,
						11,14,2,14,0,11,11,2,4,14,4,4,14,2,14,14,14,2,4,2,11,0,14,11,2,2,14,4,4,14,4,4,
						2,14,11,2,11,2,0,11,4,4,14,4,14,14,2,14,14,2,2,11,2,11,2,0,4,14,2,14,4,4,14,4,
						14,11,14,14,4,14,4,4,0,11,2,11,2,2,14,14,4,14,4,4,4,2,4,14,11,0,11,2,2,11,2,4,
						4,14,4,14,14,2,2,2,2,11,0,11,14,2,11,2,4,2,14,2,4,14,14,2,11,2,11,0,2,14,2,2,
						2,4,2,4,14,4,14,4,2,2,14,2,0,11,2,11,14,4,4,4,2,14,4,4,2,11,2,14,11,0,11,2,
						4,4,14,4,4,4,11,14,14,2,11,2,2,11,0,11,2,4,11,14,14,4,2,4,14,14,2,2,11,2,11,0};

	per[0].tipo="*ISFJ";  
	per[1].tipo="*ISTJ";  
	per[2].tipo="*ESTJ";  
	per[3].tipo="*ESFJ"; 
	per[4].tipo="*ISTP";  
	per[5].tipo="*ISFP";
	per[6].tipo="*ESTP";  
	per[7].tipo="*ESFP";  
	per[8].tipo="*INFJ"; 
	per[9].tipo="*INFP"; 
	per[10].tipo="*ENFP"; 
	per[11].tipo="*ENFJ";
	per[12].tipo="*INTJ"; 
	per[13].tipo="*INTP"; 
	per[14].tipo="*ENTP"; 
	per[15].tipo="*ENTJ";
		
	system("cls");
	
	for(int i=0;i<16;i++)
	{
		for(int j=0;j<16;j++)
		{
			//celeste(11) verde(2) amarillo(14) naranja(4)
			if(colores[i][j]==11)
			{
				visualizacion[i][j]='B';
			}
			else if(colores[i][j]==2)
			{
				visualizacion[i][j]='G';
			}
			else if(colores[i][j]==14)
			{
				visualizacion[i][j]='Y';
			}
			else if(colores[i][j]==4)
			{
				visualizacion[i][j]='O';
			}
			else
			{
				visualizacion[i][j]='W';
			}									
		}
	}

	for(int i=0, aux=5;i<16,aux<100;i++,aux=aux+6)
	{
		for(int j=0;j<16;j++)
		{
			flag1=0;
			color(hConsole, 7);
			gotoxy(aux,0);
			cout<<per[i].tipo;	
			color(hConsole, 7);
			gotoxy(0,i+1);
			cout<<per[i].tipo;	

			if (i==j)
			{
				color(hConsole, 7);
				gotoxy(aux+2,j+1);	
				cout<<visualizacion[i][j]; 					
			}
			else
			{
				color(hConsole, colores[i][j]);
				gotoxy(aux+2,j+1);	
				cout<<visualizacion[i][j]; 	
			}


		}	 
	}	

	getch();
	return 0;
}
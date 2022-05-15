// Una visualización de 5 colores blanco(7) azul(11) verde(2) amarillo(14) naranja(4)
// Personalidades: ISTJ ISFJ ESTJ ESFJ ISTP ISFP ESTP ESFP INFJ INFP ENFP ENFJ INTJ INTP ENTP ENTJ
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

struct colores{
	
	string arq1;
	string arq2;
	char text;
	int color;
	int p1=0, p2=0;
};

struct personalidades{
	string arq;
}per[15];

int main()
{
	
	HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );
	system("cls");
	int bcount=0, azcount=0, vcount=0, amcount=0, ncount=0; 
	
	int flag1=0;
	int matriz2[16][16]=
	{
	7,11,11,2,11,14,2,14,14,4,4,4,11,14,4,2,
	11,7,14,11,2,11,4,2,11,14,4,14,4,4,4,4,
	11,2,7,11,2,4,11,14,4,4,4,14,14,4,14,11,
	2,11,2,7,14,2,14,11,14,4,14,11,4,4,4,14,
	11,14,2,14,7,11,11,2,4,14,4,4,14,2,14,14,
	14,2,4,2,11,7,14,11,2,2,14,4,4,14,4,4,
	2,14,11,2,11,2,7,11,4,4,14,4,14,14,2,14,
	14,2,2,11,2,11,2,7,4,14,2,14,4,4,14,4,
	14,11,14,14,4,14,4,4,7,11,2,11,2,2,14,14,
	4,14,4,4,4,2,4,14,11,7,11,2,2,11,2,4,
	4,14,4,14,14,2,2,2,2,11,7,11,14,2,11,2,
	4,2,14,2,4,14,14,2,11,2,11,7,2,14,2,2,
	2,4,2,4,14,4,14,4,2,2,14,2,7,11,2,11,
	14,4,4,4,2,14,4,4,2,11,2,14,11,7,11,2,
	4,4,14,4,4,4,11,14,14,2,11,2,2,11,7,11,
	2,4,11,14,14,4,2,4,14,14,2,2,11,2,11,7
	};

	per[0].arq=">ISFJ";  per[1].arq=">ISTJ";  per[2].arq=">ESTJ";  per[3].arq=">ESFJ"; per[4].arq=">ISTP";  per[5].arq=">ISFP";
	per[6].arq=">ESTP";  per[7].arq=">ESFP";  per[8].arq=">INFJ";  per[9].arq=">INFP"; per[10].arq=">ENFP"; per[11].arq=">ENFJ";
	per[12].arq=">INTJ"; per[13].arq=">INTP"; per[14].arq=">ENTP"; per[15].arq=">ENTJ";
		
	system("cls");
	
    int azsize=1;
	colores *azul = new colores[azsize];
	int vsize=1;
	colores *verde = new colores[vsize];
	int amsize=1;
	colores *amarillo = new colores[amsize];
	int nsize=1;
	colores *naranja = new colores[nsize];
	int bsize=1;
	colores *blanco = new colores[bsize];	


	for(int i=0;i<16;i++)
	{
		for(int j=0;j<16;j++)
		{

			if (matriz2[i][j]==11){
				azul[azcount].p1=i;
				azul[azcount].p2=j;
				azul[azcount].color=11;
				azul[azcount].text='B';
				azul[azcount].arq1=per[i].arq;
				azul[azcount].arq2=per[j].arq;
				azcount++;

				azsize=azsize+5;
				colores *aux = new colores[azsize];
				for(int z=0;z<azsize-5;z++){
					aux[z] = azul[z];
				}
				delete[] azul;
				azul = aux;
			}

			else if (matriz2[i][j]==2){
				verde[vcount].p1=i;
				verde[vcount].p2=j;
				verde[vcount].color=2;
				verde[vcount].text='G';
				verde[vcount].arq1=per[i].arq;
				verde[vcount].arq2=per[j].arq;
				vcount++;
				vsize=vsize+5;
				colores *aux = new colores[vsize];
				for(int z=0;z<vsize-5;z++){
					aux[z] = verde[z];
				}
				delete[] verde;
				verde = aux;				
			}

			else if (matriz2[i][j]==14){
				amarillo[amcount].p1=i;
				amarillo[amcount].p2=j;
				amarillo[amcount].color=14;
				amarillo[amcount].text='Y';
				amarillo[amcount].arq1=per[i].arq;
				amarillo[amcount].arq2=per[j].arq;
				amcount++;
				amsize=amsize+5;
				colores *aux = new colores[amsize];
				for(int z=0;z<amsize-5;z++){
					aux[z] = amarillo[z];
				}
				delete[] amarillo;
				amarillo = aux;				
			}
			
			else if (matriz2[i][j]==4){
				naranja[ncount].p1=i;
				naranja[ncount].p2=j;
				naranja[ncount].color=4;
				naranja[ncount].text='O';
				naranja[ncount].arq1=per[i].arq;
				naranja[ncount].arq2=per[j].arq;
				ncount++;
				nsize=nsize+5;
				colores *aux = new colores[nsize];
				for(int z=0;z<nsize-5;z++){
					aux[z] = naranja[z];
				}
				delete[] naranja;
				naranja = aux;					
			}	

			else{
				blanco[bcount].p1=i;
				blanco[bcount].p2=j;
				blanco[bcount].color=7;
				blanco[bcount].text='W';
				blanco[bcount].arq1=per[i].arq;
				blanco[bcount].arq2=per[j].arq;
				bcount++;
				bsize=bsize+5;
				colores *aux = new colores[bsize];
				for(int z=0;z<bsize-5;z++){
					aux[z] = blanco[z];
				}
				delete[] blanco;
				blanco = aux;				
			}						
		}	 
	}	

	for(int i=0, p1=5;i<16,p1<100;i++,p1=p1+6)
	{
		for(int j=0;j<16;j++)
		{
			flag1=0;
			color(hConsole, 7);
			gotoxy(p1,0);
			cout<<per[i].arq;	
			color(hConsole, 7);
			gotoxy(0,i+1);
			cout<<per[i].arq;	

				if (i==j){
					color(hConsole, blanco[1].color);
						gotoxy(p1+2,j+1);
						cout<<blanco[i].text;
				}
				else{
						for(int z=0;z<100;z++){
							if(i==azul[z].p1 && j==azul[z].p2 && flag1==0){
								color(hConsole, azul[z].color);
								gotoxy(p1+2,j+1);
								cout<<azul[z].text;
								flag1=1;								
							}
							if(i==verde[z].p1 && j==verde[z].p2 && flag1==0){
								color(hConsole, verde[z].color);
								gotoxy(p1+2,j+1);
								cout<<verde[z].text;
								flag1=1;								
							}
							if(i==amarillo[z].p1 && j==amarillo[z].p2 && flag1==0){
								color(hConsole, amarillo[z].color);
								gotoxy(p1+2,j+1);
								cout<<amarillo[z].text;
								flag1=1;								
							}
							if(i==naranja[z].p1 && j==naranja[z].p2 && flag1==0){
								color(hConsole, naranja[z].color);
								gotoxy(p1+2,j+1);
								cout<<naranja[z].text;
								flag1=1;								
							}																					
						}				
				}
		}	 
	}	
	getch();
	return 0;
}

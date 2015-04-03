// Mike, George, and Ben

#include <iostream.h>
#include <time.h>
#include <stdlib.h>
#include <iomanip.h>
#include <math.h>

char board[10][10]=
{
	'*','*','*','*','*','*','*','C','*','*',
	'*','*','*','*','*','*','*','*','*','*',
	'*','*','*','*','*','*','*','*','*','*',
	'*','*','*','*','*','*','*','*','*','*',
	'*','*','*','*','M','*','*','*','*','*',
	'*','*','*','*','*','*','*','*','*','*',
	'*','*','*','*','*','*','*','*','*','*',
	'*','*','*','*','*','*','*','*','*','*',
	'*','*','*','*','*','*','*','*','*','*',
	'*','*','*','*','*','*','*','*','*','*'
};

int x=4;
int y=4;
int z=0;



void showboard();
void wait();
void dontleaveme();


void wait ( int seconds )
{
  clock_t endwait;
  endwait = clock () + seconds * CLK_TCK ;
  while (clock() < endwait) {}
}



int main()
{
	
	srand(time(0));
	int direction;
start:
	showboard();
	direction=rand()%4;

	if (direction==0)
	{
	if (x==9)
	{
system ("cls");
main();
	}
	else
	{
	x=x+1;
	board[x][y]='M';
	board[x-1][y]='*';
	z=z+1;
	cout<<z<<endl;
	}
	}

	else if (direction==1)
	{
	if (x==0)
	{
system ("cls");
main();
	}
	else
	{
	x=x-1;
	board[x][y]='M';
	board[x+1][y]='*';
	z=z+1;
	cout<<z<<endl;
	}
	}

	else if (direction==2)
	{
	if (y==0)
	{
system ("cls");
main();
	}
	else
	{
	y=y-1;
	board[x][y]='M';
	board[x][y+1]='*';
	z=z+1;
	cout<<z<<endl;
	}
	}

	else 
	{
	if (y==9)
	{
system ("cls");
main();
	}
	else
	{
	y=y+1;
	board[x][y]='M';
	board[x][y-1]='*';
	z=z+1;
	cout<<z<<endl;
	
	}
	}


	wait (1);
	system ("cls");
	showboard();
	system ("cls");
	goto start;
	return 0;
}


void showboard()
{
	for (int a=0;a<10;a++)
	{
		for (int b=0;b<10;b++)
		{
			cout<<board[a] [b]<<"  ";
		}
		cout<<endl;
	}
}


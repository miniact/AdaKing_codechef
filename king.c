#include<stdio.h>
#include<math.h>
void checkstep( int r1 , int c1);
int  r , c , k , count=1 ;
void main ( )
{
	printf("Enter row no , column no , no of steps king can move" );
	scanf("%d%d%d" , &r , &c , &k);
	
	checkstep( r+k , c);
	checkstep( r-k , c);
	checkstep( r , c+k);
	checkstep( r , c-k);
	
	checkstep( r+k , c-k);
	checkstep( r-k , c-k);
	checkstep( r-k , c+k);
	checkstep( r+k , c+k);

	printf("no of boxes the king visited: %d" , count);
	
}

void checkstep( int r1 , int c1)
{ 
	int a ,b , p;
	
	
	while( 0 < r1 &&  r1 < 9 && 0 < c1 &&  c1 < 9)
	{
		a = r1 -r  ;
		b = c1 - c ;
		
		p = pow(a , 2) + pow(b , 2) ;
		
		if ( p <  3)
			count++;
		
		break;	
	  }
}
#include "includesVoids.h"
void MAP_(){
	if(init==1){
		/*static*/int countX=0,countY=0;
		for(int n=0;n<1620;n++){//2500
			if(countX>53){//50 by 50 map;
				countX=0;
				countY+=1;
			}
			if(countX<=53){
				X[n]=(fac*countX)-4.05;//3.75;//.2//0.04
				Y[n]=(fac*countY)-2.25;//.2
				countX+=1;
			}
		}coor=round((x_-X[0])/fac)+(round((y_-Y[0])/fac)*54);//gets left bottom corner of map and player position in x and y and gives coord of map position.
	}
	else{
		for(int n=0;n<1620;n++){//47;//10000;///////2500//1620//14580,1620;//THERE ARE 9 MAPS AND 9 DIFFERENT VALUES FOR EACH MAP LOCATION--EACH OBJECT ON THE MAP HAS A LOCATION AS WELL;
			glLoadIdentity();glColor3f(1,1,1);
				glTranslatef(X[n]+xFac,Y[n]+yFac,z);glCallList(index[n+(1620*4)]);//4//+.01 for all except this translation;4 for this one;
			glLoadIdentity();glColor3f(1,1,1);
				glTranslatef((X[n]+xFac)-8.1,Y[n]+yFac,z);glCallList(index[n+(1620*3)]);//3
			glLoadIdentity();glColor3f(1,1,1);
				glTranslatef((X[n]+xFac)+8.1,Y[n]+yFac,z);glCallList(index[n+(1620*5)]);//5
			glLoadIdentity();glColor3f(1,1,1);
				glTranslatef(X[n]+xFac,(Y[n]+yFac)+4.5,z);glCallList(index[n+(1620*7)]);//7
			glLoadIdentity();glColor3f(1,1,1);
				glTranslatef(X[n]+xFac,(Y[n]+yFac)-4.5,z);glCallList(index[n+(1620*1)]);//1
			glLoadIdentity();glColor3f(1,1,1);
				glTranslatef((X[n]+xFac)-8.1,(Y[n]+yFac)+4.5,z);glCallList(index[n+(1620*6)]);//6
			glLoadIdentity();glColor3f(1,1,1);
				glTranslatef((X[n]+xFac)+8.1,(Y[n]+yFac)+4.5,z);glCallList(index[n+(1620*8)]);//8
			glLoadIdentity();glColor3f(1,1,1);
				glTranslatef((X[n]+xFac)-8.1,(Y[n]+yFac)-4.5,z);glCallList(index[n+(1620*0)]);//0
			glLoadIdentity();glColor3f(1,1,1);
				glTranslatef((X[n]+xFac)+8.1,(Y[n]+yFac)-4.5,z);glCallList(index[n+(1620*2)]);//2
		}
		glLoadIdentity();glTranslatef(x_+xFac,y_+yFac,z);
		glColor3f(.8,.3,.2);glBegin(GL_QUADS);
			glVertex2d(0.0,0.0);
			glVertex2d(fac,0.0);
			glVertex2d(fac,fac);//.2
			glVertex2d(0.0,fac);
		glEnd();
	}
return;}

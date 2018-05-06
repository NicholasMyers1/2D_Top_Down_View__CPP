#include "includesVoids.h"
void START(){
	static int selected[3]={2,6,6};
	glLoadIdentity();
		glTranslatef(0,1,z);
		glBegin(selected[0]);
			glVertex2f(-1,.15);
			glVertex2f(1,.15);
			glVertex2f(1,-.15);
			glVertex2f(-1,-.15);
		glEnd();
		//put string here;
	glLoadIdentity();
		glTranslatef(0,.5,z);
		glBegin(selected[1]);
			glVertex2f(-1,.15);
			glVertex2f(1,.15);
			glVertex2f(1,-.15);
			glVertex2f(-1,-.15);
		glEnd();
		//put string here;
	glLoadIdentity();
		glTranslatef(0,0,z);
		glBegin(selected[2]);
			glVertex2f(-1,.15);
			glVertex2f(1,.15);
			glVertex2f(1,-.15);
			glVertex2f(-1,-.15);
		glEnd();
		//put string here;
	switch(optChoice){
		case 0:
			selected[2]=6;selected[1]=6;
			selected[0]=2;
		break;
		case 1:
			selected[0]=6;selected[2]=6;
			selected[1]=2;
		break;
		case 2:
			selected[1]=6;selected[0]=6;
			selected[2]=2;
		break;
		case 4:
			selected[0]=2;
			selected[1]=6;
			selected[2]=6;
			start=0;
			optChoice=0;
		break;
	}
}

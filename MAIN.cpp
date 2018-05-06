#include "includesVoids.h"
	int init=1;
	bool start=1;int optChoice=0;
	unsigned long int index[1620*9];
	unsigned long int MAP[9][1620],currMap=52;//52;	
	float X/*[9]*/[1620],Y/*[9]*/[1620],z=-11/*-13-1.5*/;float x_=0,y_=0;float coor;double fac=.15;float xFac=0,yFac=0;
	unsigned long int texture__[10]={1,2,3,4,5,6,7,8,9};int count=0;//fix to forloop
void keyboard(unsigned char key, int x, int y){
	KEY_INPUT(key,x,y);
}//end void;
void mouseMovement(int x,int y){
}//end void;
void mouseClicked(int button,int state, int x, int y){
}//end void;
void display(){
	if(init==1){
		glEnable(GL_NORMALIZE);
		glEnable(GL_POLYGON_OFFSET_FILL);
		glEnable(GL_COLOR_MATERIAL); 
		glEnable(GL_BLEND);glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
		glEnable(GL_DEPTH);
		glEnable(GL_DEPTH_TEST);
		glDepthFunc(GL_GEQUAL);
		glDepthRange(0.0, 1.0);
		glDepthMask(GL_TRUE);
		glEnable(GL_TEXTURE_2D);
		glutFullScreen();
	}
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);glClearColor(0,0,0,1);glClearDepth(0);
	/*voids();*/
	if(start==1){
		START();
	}
	else{
		if(init==1){MAP_();IMAGE();MAP_GENS();}
		if(init==0){MAP_();}
		if(init>1){MAP_GENS();MAP_();}init=0;//end the initialization process;
	}
	glutSwapBuffers();
}//end void;
void reshape(GLint w, GLint h){
	glViewport(0,0,w,h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(20,(GLfloat)w/(GLfloat)h,1.0,1000.0);
	glMatrixMode(GL_MODELVIEW);
}//end void;
int main(int argc,char **argv){													//main and set window properties;
	srand(time(NULL));
	if(init==1){
   		glutInit(&argc,argv);
    	glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA|GLUT_DEPTH);
    	glutInitWindowSize(glutGet(GLUT_SCREEN_WIDTH)/1.25,glutGet(GLUT_SCREEN_HEIGHT)/1.25);
    	glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-glutGet(GLUT_SCREEN_WIDTH)/1.25)/2,(glutGet(GLUT_SCREEN_HEIGHT)-glutGet(GLUT_SCREEN_HEIGHT)/1.25)/2);
		glutCreateWindow("test");
			glutPassiveMotionFunc(mouseMovement);//check for mousemovement
			glutMouseFunc(mouseClicked);//check for mouse click;
			glutDisplayFunc(display);
			glutIdleFunc(display);
			glutReshapeFunc(reshape);
			glutKeyboardFunc(keyboard);
		glewInit();
    	glutMainLoop();
	}
    return 0;
}

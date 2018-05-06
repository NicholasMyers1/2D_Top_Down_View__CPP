#ifndef INCLUDESVOIDS_H
#define INCLUDESVOIDS_H
	#include <math.h>
	#include <windows.h>
	#include <iostream>
	#include <stdlib.h>
	#include <stdio.h>
	#include <stdarg.h>
	#include <cstring>
	#include <fstream>
	#define GLEW_STATIC//-lglew32
	#include <SOIL2\SOIL2.h>
	#include <GL/glew.h>
	#include <gl/gl.h>
	#include <gl/glext.h>
	#include <gl/glaux.h>
	#include <gl/glu.h>
	#include <GL/glut.h>
	#include <glfw/glfw3.h>
	#include <assert.h>
	#include <sstream>
	#include <iomanip>
	#include <ctime>
	#include <cstring>
	#include <cmath>
	#include <fstream>
	#include <time.h>
	#include <string.h>
	#include <string>
	#include <cstdlib>
	#include <cstdio>
	#include <vector>
	#include <conio.h>
	#include <new>
	using namespace std;
		#define PI 3.14159265358979323846;
	//VOIDS:
		void MAP_();
		void MAP_GENS();
		void IMAGE();
		void KEY_INPUT(unsigned char key,int x, int y);
		void START();
	//GLOBALS:
		extern bool start;extern int optChoice;
		extern unsigned long int index[1620*9];//putting the map into a defined list;
		extern int init;//init initializes all of the maps; 
		extern unsigned long int MAP[9][1620],currMap;//map is the map array on the stack - 10000; currmap is the map to load;
		extern float X/*[9]*/[1620],Y/*[9]*/[1620],z;extern float x_,y_;extern float coor;extern double fac;//x, y are both map coords; x_,y_ are both player coords; coor is pl.loc.; fac is a constant of .15 for map factor;
		extern float xFac,yFac;//show rest of map;
		extern void stringToImage(string stringToImage); extern unsigned long int texture__[10];extern int count;//loadTexture is a function; texture is the actual texture; count += to next texture;//MAX 105,464 for texture;
#endif

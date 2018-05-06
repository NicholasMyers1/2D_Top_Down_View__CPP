#include "includesVoids.h"
void KEY_INPUT(unsigned char key,int x, int y){
	if(start==1){
		if(key=='w'){
			optChoice-=1;
			if(optChoice<0)optChoice=2;
		}
		if(key=='s'){
			optChoice+=1;
			if(optChoice>2)optChoice=0;
		}
		if(key==' '&&optChoice==0){optChoice=4;}
		if(key==' '&&optChoice==2){exit(0);}
	}
	else{
		if(key=='w'&&coor<1566){y_+=fac;coor+=54;yFac-=fac;}
		else if(key=='w'&&coor>=1566&&currMap<2499){	
			coor=53-(1619-coor);		currMap+=51;	init=2;
			xFac=4.05-(fac*(int)coor);					yFac=2.25;
			x_=xFac*-1;					y_=yFac*-1;
		}
		if(key=='s'&&coor>53){y_-=fac;coor-=54;yFac+=fac;}
		else if(key=='s'&&coor<=53&&currMap>101){
			coor=(coor-53)+1619;		currMap-=51;	init=2;
			xFac=-3.9+(fac*(1619-(int)coor));			yFac=-2.1;
			x_=xFac*-1;					y_=yFac*-1;
		}
		if(key=='a'){int inR=0;bool chkEdge=0;
			x_-=fac;coor-=1;xFac+=fac;
			for(int n=0;n<51;n++){
				if(currMap==(n*51)+1){
					inR+=1;
				}
				if(n<=30&&coor==(n*54)-1){
					inR+=1;		chkEdge=1;
				}
			}
			if(chkEdge==1&&inR!=2){
				currMap-=1;		coor+=54;
				xFac=-3.9;		yFac=yFac;
				x_=xFac*-1;		y_=yFac*-1;
				chkEdge=0;		inR=0;		init=2;
			}
			if(inR==2){			inR=0;
				x_+=fac;		coor+=1;	xFac-=fac;
			}
		}
		if(key=='d'){int inR=0;bool chkEdge=0;
			x_+=fac;coor+=1;xFac-=fac;
			for(int n=0;n<51;n++){
				if(currMap==(n*51)-2){
					inR+=1;
				}
				if(n<=30&&coor==(n*54)){
					inR+=1;		chkEdge=1;
				}
			}
			if(chkEdge==1&&inR!=2){
				currMap+=1;		coor-=54;
				xFac=4.05;		yFac=yFac;
				x_=xFac*-1;		y_=yFac*-1;
				chkEdge=0;		inR=0;		init=2;
			}
			if(inR==2){			inR=0;
				x_-=fac;		coor-=1;	xFac+=fac;
			}
		}
		if(key=='z'){;z+=2.0;}if(key=='x'){;z-=2.0;}
		//cout<<xFac<<"||"<<yFac<<"||"<<coor<<"||"<<currMap<<"||"<<x_<<"||"<<y_<<"\n";
		if(key==27){start=1;}
	}
}

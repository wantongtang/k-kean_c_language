/*************************************************************************
	> File Name: a.c
	> Author: 
	> Mail: 
	> Created Time: Thu 21 Jul 2016 09:15:24 PM IRKT
 ************************************************************************/

#include<stdio.h>

double dis(double x,double y,double x1,double y1){
        return ((x-x1)*(x-x1)+(y-y1)*(y-y1));
}

int main(){

        double x[]={1,2,3,4,5};
        double y[]={2,4,6,8,10};
        double x0=1.5;
        double y0=2.5;
        double x1=3.5;
        double y1=4.5;
        int  tag[5]={0};
        int i=0,j=0;
        
        double tempdis1=0,tempdis2=0;
        for (i=0;i<5;i++){
                tempdis1=dis(x0,y0,x[i],y[i]);
                tempdis2=dis(x1,y1,x[i],y[i]);
                if(tempdis1>=tempdis2){
                        x1=(x1+x[i])/2;
                        y1=(y1+y[i])/2;
                        tag[i]=1;
                }else{
                        x0=(x0+x[i])/2;
                        y0=(y0+y[i])/2;
                }
        
        }


        for(i=0;i<5;i++){
                printf("%d\n",tag[i]);
        }
        return 0;
}

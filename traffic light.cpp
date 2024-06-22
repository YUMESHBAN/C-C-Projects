#include <graphics.h> 
#include <stdio.h> 
#include<stdlib.h> 
#include<time.h> 
 
void greenSignal() { 
 setfillstyle(1, 2); 
 floodfill(885, 190, WHITE); 
} 
 
int printRandom(int lower, int upper)  
{  
      srand(time(0)); 
   int num = (rand() %  
        (upper - lower + 1)) + lower;  
        return num; 
}  
 
void redSignal() { 
 setfillstyle(1, 4); 
 floodfill(885, 150, WHITE); 
} 
 
void yellowSignal() { 
 setfillstyle(1, 14); 
 floodfill(885, 170, WHITE); 
} 
 
void startCar(int i) {  
  
  
  while(i<=1100){ 
    
   setcolor(WHITE); 
 line(0, 546, 1500, 546); 
 line(0, 446, 1500, 446); 
   
 line(810, 446, 810, 546); 
 setfillstyle(4, WHITE); 
 rectangle(840, 446, 860, 546); 
  
 floodfill(850, 450, WHITE); 
  
 setcolor(WHITE); 
  
 line(810, 446, 810, 546); 
  
 setfillstyle(4, WHITE); 
 rectangle(840, 446, 860, 546); 
  
 floodfill(850, 450, WHITE); 
  
 setfillstyle(1, 6); 
  
 rectangle(880, 200, 890, 446); 
  
 floodfill(885, 210, WHITE); 
  
 rectangle(875, 140, 895, 160); 
 rectangle(875, 180, 895, 200); 
 rectangle(875, 160, 895, 180); 
  
 greenSignal(); 
    
  setcolor(CYAN); 
  line(0 + i, 500, 210 + i, 500); 
  line(50 + i, 500, 75 + i, 470); 
  line(0 + i, 500, 0 + i, 530); 
  line(210 + i, 500, 210 + i, 530); 
  line(75 + i, 470, 150 + i, 470); 
  line(150 + i, 470, 165 + i, 500); 
   
 
  circle(65 + i, 530, 15); 
  circle(65 + i, 530, 2); 
 
  circle(145 + i, 530, 15); 
  circle(145 + i, 530, 2); 
   
 
  line(0 + i, 530, 50 + i, 530); 
   
  line(80 + i, 530, 130 + i, 530); 
 
  line(210 + i, 530, 160 + i, 530); 
   
  setcolor(WHITE); 
   
  line(10+i, 510, 50+i, 510); 
  line(60+i, 510, 98+i, 510); 
  line(102+i, 510, 150+i, 510); 
  line(160+i, 510, 200+i, 510); 
 
  delay(100); 
   
  i+=5; 
   
      cleardevice(); 
  } 
   
 } 
 
 
void  stopCar(int i) { 
  
 while(i<=580){ 
  setcolor(CYAN); 
   setcolor(WHITE); 
  line(0, 546, 1500, 546); 
  line(0, 446, 1500, 446); 
   
  line(810, 446, 810, 546); 
  setfillstyle(4, WHITE); 
 rectangle(840, 446, 860, 546); 
  
 floodfill(850, 450, WHITE); 
  
 setcolor(WHITE); 
  
 line(810, 446, 810, 546); 
  
 setfillstyle(4, WHITE); 
 rectangle(840, 446, 860, 546); 
  
 floodfill(850, 450, WHITE); 
  
 setfillstyle(1, 6); 
  
 rectangle(880, 200, 890, 446); 
  
 floodfill(885, 210, WHITE); 
  
 rectangle(875, 140, 895, 160); 
 rectangle(875, 180, 895, 200); 
 rectangle(875, 160, 895, 180); 
  
 redSignal(); 
  
 setcolor(CYAN); 
   
 
  line(0 + i, 500, 210 + i, 500); 
  line(50 + i, 500, 75 + i, 470); 
  line(0 + i, 500, 0 + i, 530); 
  line(210 + i, 500, 210 + i, 530); 
  line(75 + i, 470, 150 + i, 470); 
  line(150 + i, 470, 165 + i, 500); 
   
 
  circle(65 + i, 530, 15); 
  circle(65 + i, 530, 2); 
 
  circle(145 + i, 530, 15); 
  circle(145 + i, 530, 2); 
   
 
  line(0 + i, 530, 50 + i, 530); 
   
  line(80 + i, 530, 130 + i, 530); 
 
  line(210 + i, 530, 160 + i, 530); 
   
  setcolor(WHITE); 
   
  line(10+i, 510, 50+i, 510); 
  line(60+i, 510, 98+i, 510); 
  line(102+i, 510, 150+i, 510); 
  line(160+i, 510, 200+i, 510); 
 
  delay(100); 
   
  cleardevice(); 
              
  i+=5; 
 } 
 setcolor(WHITE); 
  line(0, 546, 1500, 546); 
  line(0, 446, 1500, 446); 
   
  line(810, 446, 810, 546); 
  setfillstyle(4, WHITE); 
 rectangle(840, 446, 860, 546); 
  
 floodfill(850, 450, WHITE); 
  
 setcolor(WHITE); 
  
 line(810, 446, 810, 546); 
  
 setfillstyle(4, WHITE); 
 rectangle(840, 446, 860, 546); 
  
 floodfill(850, 450, WHITE); 
  
 setfillstyle(1, 6); 
  
 rectangle(880, 200, 890, 446); 
  
 floodfill(885, 210, WHITE); 
  
 rectangle(875, 140, 895, 160); 
 rectangle(875, 180, 895, 200); 
 rectangle(875, 160, 895, 180); 
  
 redSignal(); 
      setcolor(CYAN); 
   
 
  line(0 + i, 500, 210 + i, 500); 
  line(50 + i, 500, 75 + i, 470); 
  line(0 + i, 500, 0 + i, 530);
line(210 + i, 500, 210 + i, 530); 
  line(75 + i, 470, 150 + i, 470); 
  line(150 + i, 470, 165 + i, 500); 
   
 
  circle(65 + i, 530, 15); 
  circle(65 + i, 530, 2); 
 
  circle(145 + i, 530, 15); 
  circle(145 + i, 530, 2); 
   
 
  line(0 + i, 530, 50 + i, 530); 
   
  line(80 + i, 530, 130 + i, 530); 
 
  line(210 + i, 530, 160 + i, 530); 
   
  setcolor(WHITE); 
   
  line(10+i, 510, 50+i, 510); 
  line(60+i, 510, 98+i, 510); 
  line(102+i, 510, 150+i, 510); 
  line(160+i, 510, 200+i, 510); 
   
  delay(5000); 
  startCar(i); 
 } 
  
  
int start(int i) {  
  
 int x = printRandom(50, 100); 
  
 int j = 0; 
  
 while(i<=1100){ 
  j++; 
    
 setcolor(WHITE); 
 line(0, 546, 1500, 546); 
 line(0, 446, 1500, 446); 
   
 line(810, 446, 810, 546); 
 setfillstyle(4, WHITE); 
 rectangle(840, 446, 860, 546); 
  
 floodfill(850, 450, WHITE); 
  
 setcolor(WHITE); 
  
 line(810, 446, 810, 546); 
  
 setfillstyle(4, WHITE); 
 rectangle(840, 446, 860, 546); 
  
 floodfill(850, 450, WHITE); 
  
 setfillstyle(1, 6); 
  
 rectangle(880, 200, 890, 446); 
  
 floodfill(885, 210, WHITE); 
  
 rectangle(875, 140, 895, 160); 
 rectangle(875, 180, 895, 200); 
 rectangle(875, 160, 895, 180); 
  
 greenSignal(); 
    
  setcolor(CYAN); 
  line(0 + i, 500, 210 + i, 500); 
  line(50 + i, 500, 75 + i, 470); 
  line(0 + i, 500, 0 + i, 530); 
  line(210 + i, 500, 210 + i, 530); 
  line(75 + i, 470, 150 + i, 470); 
  line(150 + i, 470, 165 + i, 500); 
   
 
  circle(65 + i, 530, 15); 
  circle(65 + i, 530, 2); 
 
  circle(145 + i, 530, 15); 
  circle(145 + i, 530, 2); 
   
 
  line(0 + i, 530, 50 + i, 530); 
   
  line(80 + i, 530, 130 + i, 530); 
 
  line(210 + i, 530, 160 + i, 530); 
   
  setcolor(WHITE); 
   
  line(10+i, 510, 50+i, 510); 
  line(60+i, 510, 98+i, 510); 
  line(102+i, 510, 150+i, 510); 
  line(160+i, 510, 200+i, 510); 
 
  delay(100); 
   
  int d = printRandom(1, 2); 
   
  if(x < j) { 
   if(d==2) { 
   stopCar(i); 
   return 0; 
  } 
  else { 
   startCar(i); 
   return 0; 
  } 
   
  } 
   
  i+=5; 
   
   
   
      cleardevice(); 
  } 
   
 } 
 
 
  
 int main() { 
  
 int i = 0, gd = DETECT, gm;  
 initgraph(&gd, &gm, "");   
 initwindow(getmaxwidth( ), getmaxheight( ));       
   
 start(i); 
 closegraph(); 
 return 0; 
}


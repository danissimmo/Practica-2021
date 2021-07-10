#include <iostream>
#include <cmath>
#include <cstdlib>


const float g = 9.8;
using namespace std;
 structBall {
  float h=100;
  float x=0;
  float y=h;

  float v0=0;
  float vy=0;
  float ax=0;
  float ay=-g;
  float m=0;

  Ball() {
  }
};


float t = 0;

// Моделирование изменения положения шарика за время dt в секундах
void move(Ball* ball, float dt) {
	
	t=t+dt;
	ball->vy=ball->v0+ball->ay*t;
	ball->y=ball->h+ball->ay*0.5*t*t;
	if (ball->y <= 0) {
		ball->y = 0;
		ball->vy = 0;
	}
}

// Напечатать на экран параметры полета шарика
void show(Ball ball) {
	cout<<ball.y<<"		"<<abs(ball.vy)<<"		"<<abs(ball.ay)<<endl;
}

int main() {
	cout<<"t		y		vy		ay"<<endl;
	cout<<"==================================================="<<endl;
  float t = 0;
  Ball a;
  float deltaT = 1;
  for (int i=0; i<10; i++) {
  	 cout << t<<"		";
     move(&a, deltaT);     
     show(a);
     t = t + deltaT;           // Увеличить счетчик времени
  }
}

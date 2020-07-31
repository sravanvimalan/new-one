int xpos;
int speed = 1;
int xDir = 1;
int score = 0;
int lives = 5;
int colr = 255;
int colg = 255;
int colb = 255;
boolean lose = false;
void setup()
{
  fullScreen();
  smooth();
  xpos = width/2;
}
void draw()
{
  background(0);
  fill(colr,colg,colb);
   textSize(33);
  ellipse(xpos,height/2,80,80);
  xpos = xpos + (speed * xDir);
  if(xpos > width-20 || xpos < 20)
    {
      xDir = -xDir;
    }
    text("Score = "+score,10,30);
    text("lives = "+lives,width-130,30);
    if(lives == 0)
    {
      textSize(40);
      text("click to restart",(width/2)-100,height/2);
      lose = true;
      noLoop();
     }
}
void  mousePressed()
{
  if(dist(mouseX,mouseY,xpos,height/2) <= 50)
  {
    score=score+speed;
    speed=speed+1;
     colr=(int)random(0, 255);
     colg=(int)random(0, 255);
     colb=(int)random(0, 255);
  }
  else
  {
    lives = lives - 1;
  }
  if(lose)
  {
    speed=1;
    xpos=width/2;;
    lives=5;
    xDir = 1;
    lose = false;
    score = 0;
    loop();
  }
}
    

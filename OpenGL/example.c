
#include <GL/freeglut.h>

#include <GL/glut.h>
void display()
{
 glClear(GL_COLOR_BUFFER_BIT);
}

void main(int argc,char **argv)
{
   glutInit(&argc,argv);
   glutCreateWindow("Hello,world!");
   glutDisplayFunc(display);
   glutMainLoop();

}
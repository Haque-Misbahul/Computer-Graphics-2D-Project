#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>
#include<windows.h>
void car(void);
void wheel_1(void);
void wheel_2(void);
void environment(void);
void display(void)
{
    int i,j;
    glClear (GL_COLOR_BUFFER_BIT);
     for( i=-50;i<=100;i++){
     glClear (GL_COLOR_BUFFER_BIT);

    /* clear all pixels */

    /* draw white polygon (rectangle) with corners at
    * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
    */
      environment();

    glPushMatrix();
    glTranslated(i,0,0);
    //wheel_1();

   // wheel_2();


      //wheel_1();
     car();
    glPopMatrix();
    Sleep(50);
     }

     //glClear (GL_COLOR_BUFFER_BIT);






   /* glColor3f (0.000, 1.000, 0.498);
    glLineWidth(4);
    glBegin(GL_LINES);
    glVertex2f(20,5);
    glVertex2f(17,15);

    glVertex2f(20,5);
    glVertex2f(19,15);

    glVertex2f(20,5);
    glVertex2f(15,15);

    glEnd();
*/


    glFlush ();





}
void environment(void){

    //background

    glColor3f (.530, .530, .950);
    glBegin(GL_POLYGON);
    glVertex2f (0, 0 );
    glVertex2f (100, 0 );
    glVertex2f (100,100 );
    glVertex2f (0, 100);

     glEnd();
//building
    glColor3f (.378, .390, .381);
    glBegin(GL_POLYGON);
    glVertex2f (75, 25 );
    glVertex2f (95, 25 );
    glVertex2f (95,52 );
    glVertex2f (75, 55);
    glVertex2f (66,52 );
    glVertex2f (66, 25);

    glEnd();

     glLineWidth(5);
      glColor3f (.578, .590, .581);
    glBegin(GL_LINES);
    glVertex2f(75,25);
    glVertex2f(75,55);


    glEnd();

    //window 1
    glColor3f (.578, .590, .581);
     glBegin(GL_POLYGON);
    glVertex2f (78, 52);
    glVertex2f (83, 51 );
    glVertex2f (83,46 );
    glVertex2f (78, 47);


    glEnd();


   //window 2

    glColor3f (.578, .590, .581);
     glBegin(GL_POLYGON);
    glVertex2f (86, 51);
    glVertex2f (91, 50 );
    glVertex2f (91,45 );
    glVertex2f (86, 46);


    glEnd();

     //window 3
    glColor3f (.578, .590, .581);
     glBegin(GL_POLYGON);
    glVertex2f (78, 42);
    glVertex2f (83, 41 );
    glVertex2f (83,36 );
    glVertex2f (78, 37);


    glEnd();

    //window 2

    glColor3f (.578, .590, .581);
     glBegin(GL_POLYGON);
    glVertex2f (86, 41);
    glVertex2f (91, 40 );
    glVertex2f (91,35 );
    glVertex2f (86, 36);


    glEnd();







    //hill
     glColor3f (0.00, 0.692, 0.000);
    glBegin(GL_POLYGON);
    glVertex2f (0, 0 );
    glVertex2f (100, 0 );
    glVertex2f (100, 35 );
    glVertex2f (92, 40 );
    glVertex2f (75, 32 );
    glVertex2f (52, 62 );
    glVertex2f (30, 42 );
    glVertex2f (25, 50 );
    glVertex2f (0, 35 );


    glEnd();

     //tree1
    glColor3f (.51, 0, .17);
    glBegin(GL_POLYGON);
    glVertex2f (24, 28 );
    glVertex2f (25, 28 );
    glVertex2f (25, 40 );
    glVertex2f (24, 40);

    glEnd();


      //tree cap
    glColor3f (0, 0.1, .0);
    glBegin(GL_POLYGON);
    glVertex2f (20, 40 );
    glVertex2f (29, 40 );
    glVertex2f (24.5, 46 );


    glEnd();

       //tree cap2
    glColor3f (0, 0.1, .0);
    glBegin(GL_POLYGON);
    glVertex2f (20, 44 );
    glVertex2f (29, 44 );
    glVertex2f (24.5, 50 );


    glEnd();

       //tree cap3
    glColor3f (0, 0.1, .0);
    glBegin(GL_POLYGON);
    glVertex2f (20, 48 );
    glVertex2f (29, 48 );
    glVertex2f (24.5, 54 );


    glEnd();



    //tree2
    glColor3f (.51, 0, .17);
    glBegin(GL_POLYGON);
    glVertex2f (44, 28 );
    glVertex2f (45, 28 );
    glVertex2f (45, 40 );
    glVertex2f (44, 40);

    glEnd();
       //tree2 cap1
    glColor3f (0, 0.1, .0);
    glBegin(GL_POLYGON);
    glVertex2f (40, 40 );
    glVertex2f (49, 40 );
    glVertex2f (44.5, 46 );


    glEnd();

      //tree cap2
    glColor3f (0, 0.1, .0);
    glBegin(GL_POLYGON);
    glVertex2f (40, 44 );
    glVertex2f (49, 44 );
    glVertex2f (44.5, 50 );


    glEnd();

       //tree cap3
    glColor3f (0, 0.1, .0);
    glBegin(GL_POLYGON);
    glVertex2f (40, 48 );
    glVertex2f (49, 48 );
    glVertex2f (44.5, 54 );


    glEnd();


     //road
    glColor3f (0.412, 0.412, 0.412);
    glBegin(GL_POLYGON);
    glVertex2f (0, 10 );
    glVertex2f (100, 10 );
    glVertex2f (100, 25 );
    glVertex2f (0, 25 );



    glEnd();






   //road miidle white
    glColor3f (1.000, 1.000, 1.000);
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2f(0,17);
    glVertex2f(100,17);

    glEnd();

    float x1,y1,x2,y2;
    float angle;
    double radius; // Radius

   /* */


    glColor3f (1.000, 1.000, 1.000);
    /*glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2f(80,80);
    glVertex2f();

    glEnd();*/



    radius=8;

    x1 = 88,y1=88; // Center
    glColor3f(1.000, 0.549, 0.000);

    glLineWidth(2);
    glBegin(GL_LINES);

    for (angle=1.0f;angle<361.0f;angle+=361.0/70.0)
    {

        glVertex2f(x1,y1);
        x2 = x1+sin(angle)*radius;
        y2 = y1+cos(angle)*radius;


        glVertex2f(x2,y2);
    }

   glEnd();




    radius=7;
  //sun outside border
    x1 = 88,y1=88; // Center
    glColor3f(1.000, 0.549, 0.000);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1,y1);

    for (angle=1.0f;angle<361.0f;angle+=0.2)
    {
        x2 = x1+sin(angle)*radius;
        y2 = y1+cos(angle)*radius;
        glVertex2f(x2,y2);
    }

    glEnd();
    radius=6.5;
    glColor3f(1.000, 1.000, 0.000);
    //sun middle
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1,y1);

    for (angle=1.0f;angle<361.0f;angle+=0.2)
    {
        x2 = x1+sin(angle)*radius;
        y2 = y1+cos(angle)*radius;
        glVertex2f(x2,y2);
    }

    glEnd();
   //stand left
   glColor3f(.8, .8, .8);
   glBegin(GL_POLYGON);


    glVertex2f (0, 68 );
    glVertex2f (10, 78 );
    glVertex2f (15, 80 );
    glVertex2f (12, 75 );





    glEnd();

     glBegin(GL_POLYGON);


    glVertex2f (30, 63 );
    glVertex2f (20, 78 );
    glVertex2f (15, 80 );
    glVertex2f (18, 75 );





    glEnd();

     glBegin(GL_POLYGON);


    glVertex2f (15, 97 );
    glVertex2f (13, 84 );
    glVertex2f (15, 80 );
    glVertex2f (16, 84 );





    glEnd();

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(15,80);
    glVertex2f(15,37);


    glEnd();


    //stand middle
    glColor3f(.8, .8, .8);
   glBegin(GL_POLYGON);


    glVertex2f (25, 57 );
    glVertex2f (32, 64 );
    glVertex2f (35, 65 );
    glVertex2f (33, 62 );





    glEnd();

     glBegin(GL_POLYGON);


    glVertex2f (35, 78 );
    glVertex2f (34, 70 );
    glVertex2f (35, 65 );
    glVertex2f (36, 70 );





    glEnd();

     glBegin(GL_POLYGON);


    glVertex2f (45, 55 );
    glVertex2f (38, 63 );
    glVertex2f (35, 65 );
    glVertex2f (37, 61 );





    glEnd();

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(35,65);
    glVertex2f(35,42);


    glEnd();


    //stand right
     glColor3f(.8, .8, .8);
   glBegin(GL_POLYGON);


    glVertex2f (37, 65 );
    glVertex2f (50, 78 );
    glVertex2f (55, 80 );
    glVertex2f (52, 75 );





    glEnd();

     glBegin(GL_POLYGON);


    glVertex2f (72, 60 );
    glVertex2f (60, 78 );
    glVertex2f (55, 80 );
    glVertex2f (58, 75 );





    glEnd();

     glBegin(GL_POLYGON);


    glVertex2f (55, 99 );
    glVertex2f (53, 84 );
    glVertex2f (55, 80 );
    glVertex2f (56, 84 );





    glEnd();

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(55,80);
    glVertex2f(55,30);


    glEnd();
    glLineWidth(3);

    glFlush ();


}
/*
//back wheel middle
void wheel_1(void)
{
     float x1,y1,x2,y2;
    float angle;
    double radius=5;
    x1 = 20,y1=15; // Center
    glColor3f(0.0,0.0,0.0);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1,y1);

    for (angle=1.0f;angle<361.0f;angle+=0.2)
    {
        x2 = x1+sin(angle)*radius;
        y2 = y1+cos(angle)*radius;
        glVertex2f(x2,y2);
    }

    glEnd();
    radius=4.5;
    glColor3f(1.0,1.0,1.0);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1,y1);

    for (angle=1.0f;angle<361.0f;angle+=0.2)
    {
        x2 = x1+sin(angle)*radius;
        y2 = y1+cos(angle)*radius;
        glVertex2f(x2,y2);
    }

    glEnd();


//back wheel middle point
   glColor3f (0.000, 0.000, 0.000);
    glPointSize(6.0);
    glBegin(GL_POINTS);
    glVertex2f(20,15);

    glEnd();


//back wheel middle black
    glColor3f (0.000, 0.000, 0.000);
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2f(20,15);
    glVertex2f(24,13);

    glVertex2f(20,15);
    glVertex2f(16,12);

    glVertex2f(20,15);
    glVertex2f(20,10);

    glVertex2f(20,15);
    glVertex2f(18,19);

    glVertex2f(20,15);
    glVertex2f(22,19);

    glEnd();
    glFlush ();



}
//front wheel
void wheel_2(void)
{
    float x1,y1,x2,y2;
    float angle;
    double radius;
    radius=5;

    x1 = 35,y1=15; // Center
    glColor3f(0.0,0.0,0.0);

   glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1,y1);

    for (angle=1.0f;angle<361.0f;angle+=0.2)
    {
        x2 = x1+sin(angle)*radius;
        y2 = y1+cos(angle)*radius;
        glVertex2f(x2,y2);
    }

    glEnd();
    radius=4.5;
    glColor3f(1.0,1.0,1.0);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1,y1);

    for (angle=1.0f;angle<361.0f;angle+=0.2)
    {
        x2 = x1+sin(angle)*radius;
        y2 = y1+cos(angle)*radius;
        glVertex2f(x2,y2);
    }

    glEnd();
    //front wheel middle
    glColor3f (0.000, 0.000, 0.000);
    glPointSize(6.0);
    glBegin(GL_POINTS);
    glVertex2f(35,15);

    glEnd();

    //front wheel black cross
    glColor3f (0.000, 0.000, 0.000);
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2f(35,15);
    glVertex2f(39,13);

    glVertex2f(35,15);
    glVertex2f(31,12);

    glVertex2f(35,15);
    glVertex2f(35,10);

    glVertex2f(35,15);
    glVertex2f(33,19);

     glVertex2f(35,15);
    glVertex2f(37,19);



    glEnd();
    glFlush ();
}
*/
void car(void)
{
    /**/


     float x1,y1,x2,y2;
    float angle;
    double radius=5;
    x1 = 20,y1=15; // Center
    glColor3f(0.0,0.0,0.0);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1,y1);

    for (angle=1.0f;angle<361.0f;angle+=0.2)
    {
        x2 = x1+sin(angle)*radius;
        y2 = y1+cos(angle)*radius;
        glVertex2f(x2,y2);
    }

    glEnd();
    radius=4.5;
    glColor3f(1.0,1.0,1.0);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1,y1);

    for (angle=1.0f;angle<361.0f;angle+=0.2)
    {
        x2 = x1+sin(angle)*radius;
        y2 = y1+cos(angle)*radius;
        glVertex2f(x2,y2);
    }

    glEnd();


//back wheel middle point
   glColor3f (0.000, 0.000, 0.000);
    glPointSize(6.0);
    glBegin(GL_POINTS);
    glVertex2f(20,15);

    glEnd();


//back wheel middle black
    glColor3f (0.000, 0.000, 0.000);
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2f(20,15);
    glVertex2f(24,13);

    glVertex2f(20,15);
    glVertex2f(16,12);

    glVertex2f(20,15);
    glVertex2f(20,10);

    glVertex2f(20,15);
    glVertex2f(18,19);

    glVertex2f(20,15);
    glVertex2f(22,19);

    glEnd();





    radius=5;

    x1 = 35,y1=15; // Center
    glColor3f(0.0,0.0,0.0);

   glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1,y1);

    for (angle=1.0f;angle<361.0f;angle+=0.2)
    {
        x2 = x1+sin(angle)*radius;
        y2 = y1+cos(angle)*radius;
        glVertex2f(x2,y2);
    }

    glEnd();
    radius=4.5;
    glColor3f(1.0,1.0,1.0);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x1,y1);

    for (angle=1.0f;angle<361.0f;angle+=0.2)
    {
        x2 = x1+sin(angle)*radius;
        y2 = y1+cos(angle)*radius;
        glVertex2f(x2,y2);
    }

    glEnd();
    //front wheel middle
    glColor3f (0.000, 0.000, 0.000);
    glPointSize(6.0);
    glBegin(GL_POINTS);
    glVertex2f(35,15);

    glEnd();

    //front wheel black cross
    glColor3f (0.000, 0.000, 0.000);
    glLineWidth(2);
    glBegin(GL_LINES);
    glVertex2f(35,15);
    glVertex2f(39,13);

    glVertex2f(35,15);
    glVertex2f(31,12);

    glVertex2f(35,15);
    glVertex2f(35,10);

    glVertex2f(35,15);
    glVertex2f(33,19);

     glVertex2f(35,15);
    glVertex2f(37,19);



    glEnd();










     glColor3f (1.000, 0.000, 0.000);
    glBegin(GL_POLYGON);







    glVertex2f (12, 27 );

    glVertex2f (43, 27 );
    glVertex2f (43, 15.5 );
    glVertex2f (12, 15.5 );



    glEnd();

     glBegin(GL_POLYGON);


    glVertex2f (15, 27 );
    glVertex2f (15, 32 );
    glVertex2f (30, 32 );
    glVertex2f (30, 27 );





    glEnd();
    glFlush ();
}


void init (void)
{
/* select clearing (background) color */
glClearColor (.0, .0, .0, 0.0);
/* initialize viewing values */
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(0,100,0,100,0,200);
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (700, 600);
glutInitWindowPosition (100, 100);
glutCreateWindow ("hello");
init ();
glutDisplayFunc(display);
glutMainLoop();
return 0; /* ISO C requires main to return int. */
}


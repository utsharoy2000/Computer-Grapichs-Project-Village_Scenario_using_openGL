#include<windows.h>
#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>
#define PI 3.1416
int state=1;
double x_position=0;

void bird(double xPos, double yPos)
{

    ///   bird Left Branch
    glColor3ub(85, 13, 83);
    glBegin(GL_QUADS);
    glVertex3f(x_position+xPos-0.1,yPos-0.25,0.0);
    glVertex3f(x_position+xPos+0.0,yPos-.40,0.0);
    glVertex3f(x_position+xPos+0.01,yPos-0.40,0.0);
    glVertex3f(x_position+xPos-0.1,yPos-0.25,0.0);
    glEnd();


    ///   bird Right Branch
    glColor3ub(85, 13, 83);
    glBegin(GL_QUADS);
    glVertex3f(x_position+xPos+0.1,yPos-0.25,0.0);
    glVertex3f(x_position+xPos+0.0,yPos-0.40,0.0);
    glVertex3f(x_position+xPos+0.01,yPos-0.40,0.0);
    glVertex3f(x_position+xPos+0.1,yPos-0.25,0.0);
    glEnd();
}
void timer(int)
{
    glutPostRedisplay();
    glutTimerFunc(90 / 60, timer, 0);

    switch (state)
    {
    case 1:
        if (x_position < 1.1)
            x_position += 0.001;
        else
            state = -1;
        break;
    case -1:
        if (x_position > -.7)
            x_position -= 0.001;
        else
            state = 1;
        break;
    }
}

void display(void)
{
    /* clear all pixels */


/// BackGround Color
    glClearColor(0.0f, 1.0f, 1.0f, 1.0f);
    glClear (GL_COLOR_BUFFER_BIT);


/// Sun
    int sun_i;
    GLfloat sun_x = 0.25f;
    GLfloat sun_y = 0.85f;
    GLfloat sun_radius = .07f;
    int sun_triangleAmount = 40;

    GLfloat sun_twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255,255,93);
    glVertex2f(sun_x, sun_y);
    for(sun_i = 0; sun_i <= sun_triangleAmount; sun_i++)
    {
        glVertex2f(
            sun_x + (sun_radius * cos(sun_i * sun_twicePi / sun_triangleAmount)),
            sun_y + (sun_radius * sin(sun_i * sun_twicePi / sun_triangleAmount))
        );
    }
    glEnd();


///  [ Cloud_1 ]
///  part_1
    int c1_1_i;
    GLfloat c1_1_x = -0.3f;
    GLfloat c1_1_y = 0.65f;
    GLfloat c1_1_radius = .07f;
    int c1_1_triangleAmount = 40;

    GLfloat c1_1_twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(254, 252, 243);
    glVertex2f(c1_1_x, c1_1_y);
    for(c1_1_i = 0; c1_1_i <= c1_1_triangleAmount; c1_1_i++)
    {
        glVertex2f(
            c1_1_x + (c1_1_radius * cos(c1_1_i * sun_twicePi / c1_1_triangleAmount)),
            c1_1_y + (c1_1_radius * sin(c1_1_i * sun_twicePi / c1_1_triangleAmount))
        );
    }
    glEnd();

///  part_2
    int c1_2_i;
    GLfloat c1_2_x = -0.25f;
    GLfloat c1_2_y = 0.60f;
    GLfloat c1_2_radius = .07f;
    int c1_2_triangleAmount = 40;

    GLfloat c1_2_twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(254, 252, 243);
    glVertex2f(c1_2_x, c1_2_y);
    for(c1_2_i = 0; c1_2_i <= c1_2_triangleAmount; c1_2_i++)
    {
        glVertex2f(
            c1_2_x + (c1_2_radius * cos(c1_2_i * sun_twicePi / c1_2_triangleAmount)),
            c1_2_y + (c1_2_radius * sin(c1_2_i * sun_twicePi / c1_2_triangleAmount))
        );
    }
    glEnd();

    ///  part_3
    int c1_3_i;
    GLfloat c1_3_x = -0.2f;
    GLfloat c1_3_y = 0.69f;
    GLfloat c1_3_radius = .07f;
    int c1_3_triangleAmount = 40;

    GLfloat c1_3_twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(254, 252, 243);
    glVertex2f(c1_3_x, c1_3_y);
    for(c1_3_i = 0; c1_3_i <= c1_3_triangleAmount; c1_3_i++)
    {
        glVertex2f(
            c1_3_x + (c1_3_radius * cos(c1_3_i * sun_twicePi / c1_3_triangleAmount)),
            c1_3_y + (c1_3_radius * sin(c1_3_i * sun_twicePi / c1_3_triangleAmount))
        );
    }
    glEnd();


///  part_4
    int c1_4_i;
    GLfloat c1_4_x = -0.15f;
    GLfloat c1_4_y = 0.64f;
    GLfloat c1_4_radius = .07f;
    int c1_4_triangleAmount = 40;

    GLfloat c1_4_twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(254, 252, 243);
    glVertex2f(c1_4_x, c1_4_y);
    for(c1_4_i = 0; c1_4_i <= c1_4_triangleAmount; c1_4_i++)
    {
        glVertex2f(
            c1_4_x + (c1_4_radius * cos(c1_4_i * sun_twicePi / c1_4_triangleAmount)),
            c1_4_y + (c1_4_radius * sin(c1_4_i * sun_twicePi / c1_4_triangleAmount))
        );
    }
    glEnd();


    ///  part_5
    int c1_5_i;
    GLfloat c1_5_x = -0.3f;
    GLfloat c1_5_y = 0.60f;
    GLfloat c1_5_radius = .07f;
    int c1_5_triangleAmount = 40;

    GLfloat c1_5_twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(254, 252, 243);
    glVertex2f(c1_5_x, c1_5_y);
    for(c1_5_i = 0; c1_5_i <= c1_5_triangleAmount; c1_5_i++)
    {
        glVertex2f(
            c1_5_x + (c1_5_radius * cos(c1_5_i * sun_twicePi / c1_5_triangleAmount)),
            c1_5_y + (c1_5_radius * sin(c1_5_i * sun_twicePi / c1_5_triangleAmount))
        );
    }
    glEnd();




    ///  [ Cloud_2 ]
///  part_1
    int c2_1_i;
    GLfloat c2_1_x = 0.7f;
    GLfloat c2_1_y = 0.75f;
    GLfloat c2_1_radius = .07f;
    int c2_1_triangleAmount = 40;

    GLfloat c2_1_twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(254, 252, 243);
    glVertex2f(c2_1_x, c2_1_y);
    for(c2_1_i = 0; c2_1_i <= c1_1_triangleAmount; c2_1_i++)
    {
        glVertex2f(
            c2_1_x + (c2_1_radius * cos(c2_1_i * sun_twicePi / c2_1_triangleAmount)),
            c2_1_y + (c2_1_radius * sin(c2_1_i * sun_twicePi / c2_1_triangleAmount))
        );
    }
    glEnd();

///  part_2
    int c2_2_i;
    GLfloat c2_2_x = 0.75f;
    GLfloat c2_2_y = 0.78f;
    GLfloat c2_2_radius = .07f;
    int c2_2_triangleAmount = 40;

    GLfloat c2_2_twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(254, 252, 243);
    glVertex2f(c2_2_x, c2_2_y);
    for(c2_2_i = 0; c2_2_i <= c2_2_triangleAmount; c2_2_i++)
    {
        glVertex2f(
            c2_2_x + (c2_2_radius * cos(c2_2_i * sun_twicePi / c2_2_triangleAmount)),
            c2_2_y + (c2_2_radius * sin(c2_2_i * sun_twicePi / c2_2_triangleAmount))
        );
    }
    glEnd();

    ///  part_3
    int c2_3_i;
    GLfloat c2_3_x = 0.79f;
    GLfloat c2_3_y = 0.72f;
    GLfloat c2_3_radius = .07f;
    int c2_3_triangleAmount = 40;

    GLfloat c2_3_twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(254, 252, 243);
    glVertex2f(c2_3_x, c2_3_y);
    for(c2_3_i = 0; c2_3_i <= c2_3_triangleAmount; c2_3_i++)
    {
        glVertex2f(
            c2_3_x + (c2_3_radius * cos(c2_3_i * sun_twicePi / c2_3_triangleAmount)),
            c2_3_y + (c2_3_radius * sin(c2_3_i * sun_twicePi / c2_3_triangleAmount))
        );
    }
    glEnd();






/// Blue Water Lake

    glColor3ub(0, 158, 255);
    glBegin(GL_QUADS);
    glVertex3f(-1.5,0.3,0.0);
    glVertex3f(-1.5,-1.10,0.0);
    glVertex3f(1.5,-1.10,0.0);
    glVertex3f(1.5,0.3,0.0);
    glEnd();



/// [ Green Hills ]


/// Hill_1
    int h1_i;
    GLfloat h1_x = -0.95f;
    GLfloat h1_y = 0.30f;
    GLfloat h1_radius = .150f;
    int h1_triangleAmount = 5;

    GLfloat h1_twicePi = 1.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(55, 146, 55);
    glVertex2f(h1_x, h1_y);
    for(h1_i = 0; h1_i <= h1_triangleAmount; h1_i++)
    {
        glVertex2f(
            h1_x + (h1_radius * cos(h1_i * h1_twicePi / h1_triangleAmount)),
            h1_y + (h1_radius * sin(h1_i * h1_twicePi / h1_triangleAmount))
        );
    }
    glEnd();

/// Hill_2
    int h2_i;
    GLfloat h2_x = -0.62f;
    GLfloat h2_y = 0.30f;
    GLfloat h2_radius = .210f;
    int h2_triangleAmount = 5;

    GLfloat h2_twicePi = 1.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(55, 146, 55);
    glVertex2f(h2_x, h2_y);
    for(h2_i = 0; h2_i <= h2_triangleAmount; h2_i++)
    {
        glVertex2f(
            h2_x + (h2_radius * cos(h2_i * h2_twicePi / h2_triangleAmount)),
            h2_y + (h2_radius * sin(h2_i * h2_twicePi / h2_triangleAmount))
        );
    }
    glEnd();

/// Hill_3
    int h3_i;
    GLfloat h3_x = -0.32f;
    GLfloat h3_y = 0.30f;
    GLfloat h3_radius = .180f;
    int h3_triangleAmount = 5;

    GLfloat h3_twicePi = 1.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(55, 146, 55);
    glVertex2f(h3_x, h3_y);
    for(h3_i = 0; h3_i <= h3_triangleAmount; h3_i++)
    {
        glVertex2f(
            h3_x + (h3_radius * cos(h3_i * h3_twicePi / h3_triangleAmount)),
            h3_y + (h3_radius * sin(h3_i * h3_twicePi / h3_triangleAmount))
        );
    }
    glEnd();

/// Hill_4
    int h4_i;
    GLfloat h4_x = 0.09f;
    GLfloat h4_y = 0.30f;
    GLfloat h4_radius = .340f;
    int h4_triangleAmount = 5;

    GLfloat h4_twicePi = 1.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(55, 146, 55);
    glVertex2f(h4_x, h4_y);
    for(h4_i = 0; h4_i <= h4_triangleAmount; h4_i++)
    {
        glVertex2f(
            h4_x + (h4_radius * cos(h4_i * h4_twicePi / h4_triangleAmount)),
            h4_y + (h4_radius * sin(h4_i * h4_twicePi / h4_triangleAmount))
        );
    }
    glEnd();

    /// Hill_5
    int h5_i;
    GLfloat h5_x = 0.50f;
    GLfloat h5_y = 0.30f;
    GLfloat h5_radius = .210f;
    int h5_triangleAmount = 5;

    GLfloat h5_twicePi = 1.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(55, 146, 55);
    glVertex2f(h5_x, h5_y);
    for(h5_i = 0; h5_i <= h5_triangleAmount; h5_i++)
    {
        glVertex2f(
            h5_x + (h5_radius * cos(h5_i * h5_twicePi / h5_triangleAmount)),
            h5_y + (h5_radius * sin(h5_i * h5_twicePi / h5_triangleAmount))
        );
    }
    glEnd();

/// Pamtrees
    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);
    glVertex2f(0.52f,0.30f);
    glVertex2f(0.48f, 0.30f);
    glVertex2f(0.48f,0.47f);
    glVertex2f(0.5f,0.49f);
    glVertex2f(0.52f,0.47f);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(102, 51, 0);
    glVertex2f(0.52f,0.45f);
    glVertex2f(0.48f, 0.45f);
    glVertex2f(0.48f,0.62f);
    glVertex2f(0.5f,0.64f);
    glVertex2f(0.52f,0.62f);
    glEnd();


    /// Leafs of background Tree
    glColor3f(0,1,0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.4,0.5,0.0);
    glVertex3f(0.5,0.7,0.0);
    glVertex3f(0.6,0.5,0.0);
    glEnd();

/// Hill_6
    int h6_i;
    GLfloat h6_x = 0.90f;
    GLfloat h6_y = 0.30f;
    GLfloat h6_radius = .210f;
    int h6_triangleAmount = 5;

    GLfloat h6_twicePi = 1.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(55, 146, 55);
    glVertex2f(h6_x, h6_y);
    for(h6_i = 0; h6_i <= h6_triangleAmount; h6_i++)
    {
        glVertex2f(
            h6_x + (h6_radius * cos(h6_i * h6_twicePi / h6_triangleAmount)),
            h6_y + (h6_radius * sin(h6_i * h6_twicePi / h6_triangleAmount))
        );
    }
    glEnd();


    ///  [ Ground ]

    ///   Ground Rectangle
    glColor3ub(56, 229, 77);
    glBegin(GL_QUADS);
    glVertex3f(-1.0,-0.99,0.0); /// L U
    glVertex3f(-1.0,-0.15,0.0); /// L D
    glVertex3f(0.1,-0.15,0.0); /// R U
    glVertex3f(0.1,-0.99,0.0); /// R D
    glEnd();


    ///  Ground Triangles
    ///  Ground_Tiles_1
    glColor3ub(56, 229, 77);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.1,-0.15,0.0); /// 1
    glVertex3f(0.1,-0.3,0.0); /// 2
    glVertex3f(0.2,-0.25,0.0); /// 3
    glEnd();

    ///  Ground_Tiles_2
    glColor3ub(56, 229, 77);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.1,-0.3,0.0); /// 1
    glVertex3f(0.1,-0.6,0.0); /// 2
    glVertex3f(0.2,-0.55,0.0); /// 3
    glEnd();

    ///  Ground_Tiles_3
    glColor3ub(56, 229, 77);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.1,-0.6,0.0); /// 1
    glVertex3f(0.1,-0.8,0.0); /// 2
    glVertex3f(0.2,-0.75,0.0); /// 3
    glEnd();

    ///  Ground_Tiles_4
    glColor3ub(56, 229, 77);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.1,-0.8,0.0); /// 1
    glVertex3f(0.1,-0.99,0.0); /// 2
    glVertex3f(0.2,-0.95,0.0); /// 3
    glEnd();






    ///  [ Ground_Flower 1]


    ///   Flower Middle Branch
    glColor3ub(85, 113, 83);
    glBegin(GL_QUADS);
    glVertex3f(0.0,-0.20,0.0);
    glVertex3f(0.0,-0.40,0.0);
    glVertex3f(0.01,-0.40,0.0);
    glVertex3f(0.01,-0.20,0.0);
    glEnd();

    ///   Flower Left Branch
    glColor3ub(85, 113, 83);
    glBegin(GL_QUADS);
    glVertex3f(-0.1,-0.25,0.0);
    glVertex3f(0.0,-0.40,0.0);
    glVertex3f(0.01,-0.40,0.0);
    glVertex3f(-0.1,-0.25,0.0);
    glEnd();


    ///   Flower Right Branch
    glColor3ub(85, 113, 83);
    glBegin(GL_QUADS);
    glVertex3f(0.1,-0.25,0.0);
    glVertex3f(0.0,-0.40,0.0);
    glVertex3f(0.01,-0.40,0.0);
    glVertex3f(0.1,-0.25,0.0);
    glEnd();

    ///   Flower Middle Round
    int F_M_R_i;
    GLfloat F_M_R_x = 0.005f;
    GLfloat F_M_R_y = -0.17f;
    GLfloat F_M_R_radius = .03f;
    int F_M_R_triangleAmount = 40;

    GLfloat F_M_R_twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255,255,93);
    glVertex2f(F_M_R_x, F_M_R_y);
    for(F_M_R_i = 0; F_M_R_i <= F_M_R_triangleAmount; F_M_R_i++)
    {
        glVertex2f(
            F_M_R_x + (F_M_R_radius * cos(F_M_R_i * F_M_R_twicePi / F_M_R_triangleAmount)),
            F_M_R_y + (F_M_R_radius * sin(F_M_R_i * F_M_R_twicePi / F_M_R_triangleAmount))
        );
    }
    glEnd();



    ///  [ Ground_Flower 2]

    ///   Flower Middle Branch
    glColor3ub(85, 113, 83);
    glBegin(GL_QUADS);
    glVertex3f(-0.1,-0.40,0.0);
    glVertex3f(-0.1,-0.60,0.0);
    glVertex3f(-0.11,-0.60,0.0);
    glVertex3f(-0.11,-0.40,0.0);
    glEnd();

    ///   Flower Left Branch
    glColor3ub(85, 113, 83);
    glBegin(GL_QUADS);
    glVertex3f(-0.2,-0.45,0.0);
    glVertex3f(-0.1,-0.60,0.0);
    glVertex3f(-0.11,-0.60,0.0);
    glVertex3f(-0.2,-0.45,0.0);
    glEnd();


    ///   Flower Right Branch
    glColor3ub(85, 113, 83);
    glBegin(GL_QUADS);
    glVertex3f(0.0,-0.45,0.0);
    glVertex3f(-0.1,-0.60,0.0);
    glVertex3f(-0.11,-0.60,0.0);
    glVertex3f(0.0,-0.45,0.0);
    glEnd();

    ///   Flower Middle Round
    int F_M_R_2_i;
    GLfloat F_M_R_2_x = -0.105f;
    GLfloat F_M_R_2_y = -.40f;
    GLfloat F_M_R_2_radius = .03f;
    int F_M_R_2_triangleAmount = 40;

    GLfloat F_M_R_2_twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(222, 186, 206);
    glVertex2f(F_M_R_2_x, F_M_R_2_y);
    for(F_M_R_2_i = 0; F_M_R_2_i <= F_M_R_2_triangleAmount; F_M_R_2_i++)
    {
        glVertex2f(
            F_M_R_2_x + (F_M_R_2_radius * cos(F_M_R_2_i * F_M_R_2_twicePi / F_M_R_2_triangleAmount)),
            F_M_R_2_y + (F_M_R_2_radius * sin(F_M_R_2_i * F_M_R_2_twicePi / F_M_R_2_triangleAmount))
        );
    }
    glEnd();



    ///  [ Boat ]
    ///  Boat Body Rectangle
    glColor3ub(34, 34, 34);
    glBegin(GL_QUADS);
    glVertex3f(0.4,-0.3,0.0); /// 3
    glVertex3f(0.4,-0.10,0.0); /// 10
    glVertex3f(0.8,-0.10,0.0); /// 10
    glVertex3f(0.8,-0.3,0.0); /// 3
    glEnd();


    /// Boat Right Corners
    glColor3ub(34, 34, 34);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.8,-0.1,0.0); /// 1
    glVertex3f(0.8,-0.3,0.0); /// 2
    glVertex3f(0.9,-0.1,0.0); /// 3
    glEnd();


    /// Boat Left Corners
    glColor3ub(34, 34, 34);
    glBegin(GL_TRIANGLES);
    glVertex3f(0.3,-0.1,0.0); /// 1
    glVertex3f(0.4,-0.3,0.0); /// 2
    glVertex3f(0.4,-0.1,0.0); /// 3
    glEnd();

    ///  [ Boat hood ]
    ///  Boat left hood round
    int boat_left_round_i;
    GLfloat boat_left_round_x = 0.49f;
    GLfloat boat_left_round_y = -0.1f;
    GLfloat boat_left_round_radius = .140f;
    int boat_left_round_triangleAmount = 5;

    GLfloat boat_left_round_twicePi = 1.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255, 115, 29);
    glVertex2f(boat_left_round_x, boat_left_round_y);
    for(boat_left_round_i = 0; boat_left_round_i <= boat_left_round_triangleAmount; boat_left_round_i++)
    {
        glVertex2f(
            boat_left_round_x + (boat_left_round_radius * cos(boat_left_round_i * boat_left_round_twicePi / boat_left_round_triangleAmount)),
            boat_left_round_y + (boat_left_round_radius * sin(boat_left_round_i * boat_left_round_twicePi / boat_left_round_triangleAmount))
        );
    }
    glEnd();


    ///  Boat right hood round
    int boat_right_round_i;
    GLfloat boat_right_round_x = 0.70f;
    GLfloat boat_right_round_y = -0.1f;
    GLfloat boat_right_round_radius = .140f;
    int boat_right_round_triangleAmount = 5;

    GLfloat boat_right_round_twicePi = 1.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(255, 115, 29);
    glVertex2f(boat_right_round_x, boat_right_round_y);
    for(boat_right_round_i = 0; boat_right_round_i <= boat_right_round_triangleAmount; boat_right_round_i++)
    {
        glVertex2f(
            boat_right_round_x + (boat_right_round_radius * cos(boat_right_round_i * boat_right_round_twicePi / boat_right_round_triangleAmount)),
            boat_right_round_y + (boat_right_round_radius * sin(boat_right_round_i * boat_right_round_twicePi / boat_right_round_triangleAmount))
        );
    }
    glEnd();


    /// Boat middle rectangle
    glColor3ub(255, 115, 29);
    glBegin(GL_QUADS);
    glVertex3f(0.4,0.06,0.0);
    glVertex3f(0.4,-0.1,0.0);
    glVertex3f(0.8,-0.1,0.0);
    glVertex3f(0.8,0.06,0.0);
    glEnd();


    /// Boat middle stick
    glColor3ub(255, 115, 29);
    glBegin(GL_QUADS);
    glVertex3f(0.6,0.20,0.0);
    glVertex3f(0.6,0.0,0.0);
    glVertex3f(0.63,0.0,0.0);
    glVertex3f(0.63,0.20,0.0);
    glEnd();


    /// [ Home ]
    /// Home Shed
    glColor3ub(115, 95, 50);
    glBegin(GL_QUADS);
    glVertex3f(-0.70,0.35,0.0); /// U L
    glVertex3f(-0.60,0.0,0.0); /// D L
    glVertex3f(-0.2,0.0,0.0); /// D R
    glVertex3f(-0.3,0.35,0.0); /// U R
    glEnd();

    /// Home Front Box
    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex3f(-0.60,0.0,0.0);
    glVertex3f(-0.60,-0.4,0.0);
    glVertex3f(-0.24,-0.4,0.0);
    glVertex3f(-0.24,0.0,0.0);
    glEnd();

    /// Home Front Door
    glColor3ub(159, 135, 114);
    glBegin(GL_QUADS);
    glVertex3f(-0.46,-0.1,0.0);
    glVertex3f(-0.46,-0.4,0.0);
    glVertex3f(-0.35,-0.4,0.0);
    glVertex3f(-0.35,-0.1,0.0);
    glEnd();

    /// Home Front right Window
    glColor3ub(199, 188, 161);
    glBegin(GL_QUADS);
    glVertex3f(-0.32,-0.1,0.0);
    glVertex3f(-0.32,-0.2,0.0);
    glVertex3f(-0.27,-0.2,0.0);
    glVertex3f(-0.27,-0.1,0.0);
    glEnd();


    /// Home Front Left Window
    glColor3ub(199, 188, 161);
    glBegin(GL_QUADS);
    glVertex3f(-0.54,-0.1,0.0);
    glVertex3f(-0.54,-0.2,0.0);
    glVertex3f(-0.49,-0.2,0.0);
    glVertex3f(-0.49,-0.1,0.0);
    glEnd();


    /// Home Triangle Back Shed
    glColor3ub(170, 139, 86);
    glBegin(GL_TRIANGLES);
    glVertex3f(-0.73,0.0,0.0);
    glVertex3f(-0.70,0.35,0.0);
    glVertex3f(-0.60,0.0,0.0);
    glEnd();


    /// Home back angled rectangle
    glColor3ub(98, 142, 144);
    glBegin(GL_QUADS);
    glVertex3f(-0.70,0.0,0.0);
    glVertex3f(-0.70,-0.3,0.0);
    glVertex3f(-0.60,-0.4,0.0);
    glVertex3f(-0.60,0.0,0.0);
    glEnd();


    /// Home Front Road
    glColor3ub(238, 195, 115);
    glBegin(GL_QUADS);
    glVertex3f(-0.46,-0.4,0.0);
    glVertex3f(-0.55,-0.99,0.0);
    glVertex3f(-0.35,-0.99,0.0);
    glVertex3f(-0.35,-0.4,0.0);
    glEnd();



    /// Tree
    glColor3ub(97, 65, 36);
    glBegin(GL_QUADS);
    glVertex3f(-0.90,0.1,0.0);
    glVertex3f(-0.90,-0.59,0.0);
    glVertex3f(-0.85,-0.59,0.0);
    glVertex3f(-0.85,0.1,0.0);
    glEnd();



    /// Tree
    /// Round 1
    int tree_round_1_i;
    GLfloat tree_round_1_x = -0.96f;
    GLfloat tree_round_1_y = 0.15f;
    GLfloat tree_round_1_radius = .100f;
    int tree_round_1_triangleAmount = 40;

    GLfloat tree_round_1_twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(130, 205, 71);
    glVertex2f(tree_round_1_x, tree_round_1_y);
    for(tree_round_1_i = 0; tree_round_1_i <= tree_round_1_triangleAmount; tree_round_1_i++)
    {
        glVertex2f(
            tree_round_1_x + (tree_round_1_radius * cos(tree_round_1_i * tree_round_1_twicePi / tree_round_1_triangleAmount)),
            tree_round_1_y + (tree_round_1_radius * sin(tree_round_1_i * tree_round_1_twicePi / tree_round_1_triangleAmount))
        );
    }
    glEnd();

    ///  Round 2
    int tree_round_2_i;
    GLfloat tree_round_2_x = -0.80f;
    GLfloat tree_round_2_y = 0.15f;
    GLfloat tree_round_2_radius = .100f;
    int tree_round_2_triangleAmount = 40;

    GLfloat tree_round_2_twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(130, 205, 71);
    glVertex2f(tree_round_2_x, tree_round_2_y);
    for(tree_round_2_i = 0; tree_round_2_i <= tree_round_2_triangleAmount; tree_round_2_i++)
    {
        glVertex2f(
            tree_round_2_x + (tree_round_2_radius * cos(tree_round_2_i * tree_round_2_twicePi / tree_round_2_triangleAmount)),
            tree_round_2_y + (tree_round_2_radius * sin(tree_round_2_i * tree_round_2_twicePi / tree_round_2_triangleAmount))
        );
    }
    glEnd();

    ///  Round 3
    int tree_round_3_i;
    GLfloat tree_round_3_x = -0.75f;
    GLfloat tree_round_3_y = 0.25f;
    GLfloat tree_round_3_radius = .100f;
    int tree_round_3_triangleAmount = 40;

    GLfloat tree_round_3_twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(130, 205, 71);
    glVertex2f(tree_round_3_x, tree_round_3_y);
    for(tree_round_3_i = 0; tree_round_3_i <= tree_round_3_triangleAmount; tree_round_3_i++)
    {
        glVertex2f(
            tree_round_3_x + (tree_round_3_radius * cos(tree_round_3_i * tree_round_3_twicePi / tree_round_3_triangleAmount)),
            tree_round_3_y + (tree_round_3_radius * sin(tree_round_3_i * tree_round_3_twicePi / tree_round_3_triangleAmount))
        );
    }
    glEnd();


    ///  Round 4
    int tree_round_4_i;
    GLfloat tree_round_4_x = -0.78f;
    GLfloat tree_round_4_y = 0.35f;
    GLfloat tree_round_4_radius = .100f;
    int tree_round_4_triangleAmount = 40;

    GLfloat tree_round_4_twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(130, 205, 71);
    glVertex2f(tree_round_4_x, tree_round_4_y);
    for(tree_round_4_i = 0; tree_round_4_i <= tree_round_4_triangleAmount; tree_round_4_i++)
    {
        glVertex2f(
            tree_round_4_x + (tree_round_4_radius * cos(tree_round_4_i * tree_round_4_twicePi / tree_round_4_triangleAmount)),
            tree_round_4_y + (tree_round_4_radius * sin(tree_round_4_i * tree_round_4_twicePi / tree_round_4_triangleAmount))
        );
    }
    glEnd();


    ///  Round 5
    int tree_round_5_i;
    GLfloat tree_round_5_x = -0.85f;
    GLfloat tree_round_5_y = 0.40f;
    GLfloat tree_round_5_radius = .100f;
    int tree_round_5_triangleAmount = 40;

    GLfloat tree_round_5_twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(130, 205, 71);
    glVertex2f(tree_round_5_x, tree_round_5_y);
    for(tree_round_5_i = 0; tree_round_5_i <= tree_round_5_triangleAmount; tree_round_5_i++)
    {
        glVertex2f(
            tree_round_5_x + (tree_round_5_radius * cos(tree_round_5_i * tree_round_5_twicePi / tree_round_5_triangleAmount)),
            tree_round_5_y + (tree_round_5_radius * sin(tree_round_5_i * tree_round_5_twicePi / tree_round_5_triangleAmount))
        );
    }
    glEnd();


    ///  Round 6
    int tree_round_6_i;
    GLfloat tree_round_6_x = -0.94f;
    GLfloat tree_round_6_y = 0.35f;
    GLfloat tree_round_6_radius = .100f;
    int tree_round_6_triangleAmount = 40;

    GLfloat tree_round_6_twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(130, 205, 71);
    glVertex2f(tree_round_6_x, tree_round_6_y);
    for(tree_round_6_i = 0; tree_round_6_i <= tree_round_6_triangleAmount; tree_round_6_i++)
    {
        glVertex2f(
            tree_round_6_x + (tree_round_6_radius * cos(tree_round_6_i * tree_round_6_twicePi / tree_round_6_triangleAmount)),
            tree_round_6_y + (tree_round_6_radius * sin(tree_round_6_i * tree_round_6_twicePi / tree_round_6_triangleAmount))
        );
    }
    glEnd();


    ///  Round 7
    int tree_round_7_i;
    GLfloat tree_round_7_x = -0.94f;
    GLfloat tree_round_7_y = 0.25f;
    GLfloat tree_round_7_radius = .100f;
    int tree_round_7_triangleAmount = 40;

    GLfloat tree_round_7_twicePi = 2.0f * PI;

    glBegin(GL_TRIANGLE_FAN);

    glColor3ub(130, 205, 71);
    glVertex2f(tree_round_7_x, tree_round_7_y);
    for(tree_round_7_i = 0; tree_round_7_i <= tree_round_7_triangleAmount; tree_round_7_i++)
    {
        glVertex2f(
            tree_round_7_x + (tree_round_7_radius * cos(tree_round_7_i * tree_round_7_twicePi / tree_round_7_triangleAmount)),
            tree_round_7_y + (tree_round_7_radius * sin(tree_round_7_i * tree_round_7_twicePi / tree_round_7_triangleAmount))
        );
    }
    glEnd();



    bird(-.2,0.8);

    bird(-.9,0.9);


    glFlush ();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1920,1080);
    glutCreateWindow ("Triangles");
    glutDisplayFunc(display);
    gluOrtho2D(-1, 1, -1, 1);

    glutTimerFunc(1000, timer, 0);

    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}

#include <gl/glut.h>
#include "Display_Fun.h"

void drawSnowMan() {
	glColor3f(1.0f, 1.0f, 1.0f);
	//������
	glTranslatef(0.0f, 0.75f, 0.0f);
	glutSolidSphere(0.75f, 20, 20);
	// ��ͷ
	glTranslatef(0.0f, 1.0f, 0.0f);
	glutSolidSphere(0.25f, 20, 20);	
	// ���۾�
	glPushMatrix();
	glColor3f(0.0f, 0.0f, 0.0f);
	glTranslatef(0.05f, 0.10f, 0.18f);
	glutSolidSphere(0.05f, 10, 10);
	glTranslatef(-0.1f, 0.0f, 0.0f);
	glutSolidSphere(0.05f, 10, 10);
	glPopMatrix();
	// ������
	glColor3f(1.0f, 0.5f, 0.5f);
	glRotatef(0.0f, 1.0f, 0.0f, 0.0f);
	glutSolidCone(0.08f, 0.5f, 10, 2);
	/*	
	glPushMatrix(); //��̤��
	glTranslatef(20.0, -35.0, 0.0);
	glRotatef(spin, 0.0, 0.0, 1.0);
	glCallList(Frame2);
	glPopMatrix();

	glPushMatrix();//ǰ��
	glTranslatef(-20.0, -35.0, 0.0);
	glRotatef(spin, 0.0, 0.0, 1.0);
	glCallList(Wheel1);
	glPopMatrix();
	
	glPushMatrix(); //����
	glTranslatef(64.0, -35.0, 0.0);
	glRotatef(spin, 0.0, 0.0, 1.0);
	glCallList(Wheel2);
	glPopMatrix();

	glPushMatrix(); //�м����
	glTranslatef(18.0, -35.0, 0.0);
	glRotatef(spin, 0.0, 0.0, 1.0);
	glCallList(Wheel3);
	glPopMatrix();
	
	glPushMatrix(); //ǰ̤��
	glTranslatef(20.0, -35.0, 0.0);
	glRotatef(spin, 0.0, 0.0, 1.0);
	glCallList(Frame1);
	glPopMatrix();

	//֧����ʾ�б�  ����
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0, 0.0, 0.0);
	glCallList(Frame);
	*/
}
void Display_Fun()
{
	drawSnowMan();
}
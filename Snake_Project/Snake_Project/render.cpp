/**	render.cpp
 *	render.h �Լ� ����
 *	�幮�� ��Ʈ
 */
#include "util.h"
#include "render.h"
#include <cstdio>
#include <cstring>
/*	���� ����
 *	(��������2�ڸ�(00-FF) + ��¸�� ��ȣ 2�ڸ�(00-99)) * x�� ũ�� + n(�������� �˸��� ǥ��)
 *	ex)
 *	F005F005F005nF005F000F005nF005F005F005
 *	=
 *	����
 *	�ᡡ��
 *	����
 */
const char* shape[] = { "��", "��", "��", "��", "��","��" };
//buff2�ϰ� buff1�ϰ� �ٸ� �κи� ȭ�鿡 ����ؾ���.
void render_screen(char* buff1, char* buff2) {
	//���⿡ �����Ͻÿ�

	//�ǵ帮�� ���ÿ�
	strcpy_s(buff2, 10000, buff1);
}
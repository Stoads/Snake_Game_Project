/**	render.cpp
 *	render.h 함수 구현
 *	장문수 파트
 */
#include "util.h"
#include "render.h"
#include <cstdio>
#include <cstring>
/*	버퍼 정보
 *	(색상정보2자리(00-FF) + 출력모양 번호 2자리(00-99)) * x축 크기 + n(다음줄을 알리는 표시)
 *	ex)
 *	F005F005F005nF005F000F005nF005F005F005
 *	=
 *	■■■
 *	■　■
 *	■■■
 */
const char* shape[] = { "　", "▲", "◀", "▼", "▶","■" };
//buff2하고 buff1하고 다른 부분만 화면에 출력해야함.
void render_screen(char* buff1, char* buff2) {
	//여기에 구현하시오
	int background_color,x;
	char letter_color;

	scanf("%s %d %d", &letter_color, &background_color, &x);
	set_color(letter_color, background_color);
	if (buff1 != buff2)
		printf("%s", buff1);

	//건드리지 마시오
	strcpy_s(buff2, 10000, buff1);
}
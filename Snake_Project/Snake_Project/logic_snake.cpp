/**	logic_snake.cpp
 *	logic.h 의 뱀 함수 구현
 *	신진우 파트
 */
#include "logic.h"
#include "code_data.h"
int arr_x[4] = { 0,0,-1,1 };
int arr_y[4] = { 1, -1, 0, 0 };
int x, y;
void move_snake() {
	snake
}
bool is_snake_died() {
	for (int i = 0; i < snake.size(); i++) {
		if (snake[i] == Vec2(x, y))
			return true;
	}
	return false;	//default
}
void head_turning(int key) {
	switch (key) {
	case UP: if(direction!=DOWN) direction = UP; break;
	case RIGHT: if(direction != LEFT) direction = RIGHT; break;
	case DOWN: if(direction != UP) direction = DOWN; break;
	case LEFT: if(direction != RIGHT) direction = LEFT; break;
	default: break;
	}
}
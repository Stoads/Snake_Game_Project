/**	logic.cpp
 *	logic.h 함수 구현
 *	양정모 파트
 */
#include "logic.h"
std::deque<Vec2> snake;
int direction;
int score, high_score;
int x_size, y_size;
Vec2 food;

void init(const int x, const int y, const int h) {
	snake.clear();
	snake.push_back(Vec2(x, y) / 2);
	score = 0;
	high_score = h;//일단 보류
	x_size = x;
	y_size = y;
	create_food();
}
void init(const int s, const int h) {
	init(s, s, h);
}
void init(const int h) {
	init(11, h);
}
void get_screen_info(char* buff) {

}
bool logical_action(int key) {
	if (is_eat_food()) {
		grow_snake();
		create_food();
	}
	head_turning(key);
	move_snake();
	return is_snake_died();
}
int game_end() {
	//일단 보류
	return score;
}
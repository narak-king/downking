#include "DownFloorStatic.h"
#include "common.h"

DownFloorStatic::DownFloorStatic()
{

}

DownFloorStatic::~DownFloorStatic()
{

}

void DownFloorStatic::init()
{
	lines.push_back(DownInfoFloor(0, 300, 0));
	lines.push_back(DownInfoFloor(400, GAME_SCREEN_WIDTH, 0));
}

void DownFloorStatic::process(Uint64 currentTick)
{

}

void DownFloorStatic::render(GameRenderer* renderer)
{
	for (const auto& line : lines) {
		renderer->drawLine(line.left, posY, line.right, posY);
	}
}

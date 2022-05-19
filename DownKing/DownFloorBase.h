#pragma once
#include <vector>
#include "GameRenderer.h"
#include "DownInfoFloor.h"

class DownFloorBase
{
public:
	virtual ~DownFloorBase() {};
	virtual void init(Uint64 initTick) {};
	virtual void process(Uint64 currentTick) = 0;
	virtual void render(GameRenderer* renderer) = 0;

	double posY;
	std::vector<DownInfoFloor> lines;
};


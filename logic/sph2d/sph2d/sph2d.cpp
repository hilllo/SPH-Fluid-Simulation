// sph2d.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Timer.h"

int main()
{
	Timer *timer = new Timer();
	int sec = 0;
	while(sec<10) {
		if (timer->update()) {
			std::cout << "FPS: " << timer->getFPS() << std::endl;
			++sec;
		}
	}

    return 0;
}


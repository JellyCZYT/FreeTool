#include <iostream>

int main(int argc, char** argv)
{
	int x;
	std::cout<<"1) Firefox\n2) Chromium\n3) SimpleScreenRecorder\n>>> ";
	std::cin>>x;
	switch(x)
	{
		case 1: system("apt install firefox");break;
		case 2: system("apt install chromium");break;
		case 3: system("apt install simplescreenrecorder");break;
		default: std::cout<<"Unknown Package"<<std::endl;
	}
	return 0;

}

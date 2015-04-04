#define crShowWindow
#include <circuit-render.h>
int main ()
{
	// ".cbip" for "Circuit Builder Item Prototype"
	crItem* example = crCreateItem("example-proto.cbip");
	if (example) printf("crCreateItem succeeded.\n");
	else printf("crCreateItem failed with error code [%lu].\n",crGetError());
	printf("SDL Initialized: %s\n",crInit() ? "Nope" : "YES!");
	printf("Window: %X\n",crWindow);
	printf("Renderer: %X\n",crRenderer);
	while (!SDL_QuitRequested())
	{
		crDraw();
		SDL_Delay(1000);
	};
};

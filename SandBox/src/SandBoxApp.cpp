#include <Hazel.h>

class SandBox : public Hazel::Application
{
public:
	SandBox()
	{

	}
	~SandBox()
	{

	}
};

// Definicion de la funcion CreateApplication
Hazel::Application* Hazel::CreateApplication()
{
	return new SandBox();
}
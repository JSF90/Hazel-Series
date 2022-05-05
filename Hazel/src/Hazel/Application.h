#pragma once

#include "Core.h"

namespace Hazel
{
	
	class HAZEL_API Application
	{

	public:
		Application();

		virtual ~Application();

		void Run();
	};

	// to be defined in CLIENT   
	Application* CreateApplication();    // tipo de retorno puntero a un objeto Applicacion o que hereda de applicacion
}




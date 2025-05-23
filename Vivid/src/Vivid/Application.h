#pragma once

#include "Core.h"

namespace Vivid {

	class VIVID_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in Client
	Application* CreateApplication();

}


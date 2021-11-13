#pragma once

#include "Core.h"

namespace Umbra { // Shortform: ub

	class UMBRA_API Application
	{
	public:
		Application();
		virtual ~Application();		// This class will be sub-classed by our Sandbox.

		void Run();

	};

	// To be defined in the CLIENT
	Application* CreateApplication();

}


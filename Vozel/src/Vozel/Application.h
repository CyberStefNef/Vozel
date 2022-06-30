#pragma once

#include "Core.h"
#include "Vozel/LayerStack.h"
#include "Vozel/Events/Event.h"
#include "Vozel/Events/ApplicationEvent.h"

#include "Window.h"

namespace Vozel {

	class VOZEL_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();

		void OnEvent(Event& e);

		void PushLayer(Layer* layer);
		void PushOverlay(Layer* layer);

	private:
		bool OnWindowClose(WindowCloseEvent& e);


		std::unique_ptr<Window> m_Window;
		bool m_Running = true;
		LayerStack m_LayerStack;
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}



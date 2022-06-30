#include "Vozel.h"

class ExampleLayer : public Vozel::Layer
{
public:
	ExampleLayer()
		: Layer("Example")
	{
	}

	void OnUpdate() override
	{
		VZ_INFO("ExampleLayer::Update");
	}

	void OnEvent(Vozel::Event& event) override
	{
		VZ_TRACE("{0}", event);
	}

};

class Sandbox : public Vozel::Application {
public:
	Sandbox() {
		PushLayer(new ExampleLayer());
	}

	~Sandbox() {

	}
};

Vozel::Application* Vozel::CreateApplication() {
	return new Sandbox();
}
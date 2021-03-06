#pragma once

#include<memory>
#include<string>
#include<SimpleMath.h>

namespace PrizmEngine
{
	class Graphics;

	class ImguiManager
	{
	private:
		class Impl;
		std::unique_ptr<Impl> impl_;

	public:
		ImguiManager();
		~ImguiManager();

		void Initialize(std::unique_ptr<Graphics>&);
		void Update(void);
		void BeginFrame(void);
		void EndFrame(void);
		void ResizeBegin(void);
		void ResizeEnd(void);
		void BeginGui(std::string&);
		void EndGui(void);
		void Exit(void);

		void SetCameraPosition(DirectX::SimpleMath::Vector3&);
	};
}
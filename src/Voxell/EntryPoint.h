#pragma once

#ifdef VX_PLATFORM_WINDOWS

extern Voxell::Application* Voxell::CreateApplication();

void main(int argc, char** argv)
{
  auto app = Voxell::CreateApplication();
  app->Run();
  delete app;
}

#endif
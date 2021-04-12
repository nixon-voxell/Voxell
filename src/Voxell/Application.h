#pragma once

#include "Core.h"

namespace Voxell
{
  class VOXELL_API Application
  {
  public:
    Application();
    virtual ~Application();

    void Run();
  };

  // to be defined in CLIENT
  Application* CreateApplication();
}


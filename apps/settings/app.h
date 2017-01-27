#ifndef SETTINGS_APP_H
#define SETTINGS_APP_H

#include <escher.h>
#include "main_controller.h"
#include "preference.h"

namespace Settings {

class App : public ::App {
public:
  App(Container * container);
private:
  Preference m_preference;
  MainController m_mainController;
  StackViewController m_stackViewController;
};

}

#endif

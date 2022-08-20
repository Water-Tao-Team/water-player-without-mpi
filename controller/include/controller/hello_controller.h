#ifndef HELLO_CONTROLLER_H
#define HELLO_CONTROLLER_H

#include <mvc/controller.h>

class HelloController : public Controller {
  typedef Controller super_class; 
public:
  void DidAttached() override;
  void DidClosed() override;

public:
  HANDLE_ACTION(Hi);
};

#endif // HELLO_CONTROLLER_H
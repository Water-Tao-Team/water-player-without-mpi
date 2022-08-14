#ifndef CONTROLLER_H
#define CONTROLLER_H
#include "../../log/log.h"

#include <boost/any.hpp>

class View; 
class Controller { 
public:
  Controller() {}
  ~Controller() {}
  void setView(View *view) {
    view_ = view;
  }
  virtual void DidAttached() {
    log_debug << "Controller DidAttched\n"; 
  }
  virtual void DidClosed() {
    log_debug << "Controller DidClosed\n"; 
  }

protected:
  View *view_; 
};

#define HANDLE_ACTION(Action) \
  void HandleAction##Action(const boost::any & = boost::any())

#define CONTROLLER ((CTR *) this->controller_)

#endif // CONTROLLER_H
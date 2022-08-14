#ifndef VIEW_H
#define VIEW_H
#include "../include/controller.h"
#include "../../log/log.h"

#include <boost/any.hpp>

class Controller; 
class View {
public:
  View(Controller *controller) 
    : controller_(controller) {
    controller_->setView(this); 
  }

  virtual ~View() {
    delete controller_;
  }

  void DidAttached() {
    log_debug << "View DidAttched\n"; 
    controller_->DidAttached();
  }

  void DidClosed() {
    log_debug << "View DidClosed\n"; 
    controller_->DidClosed();
  }

protected:
  Controller *controller_; 
};

#define DEFINE_PROP(Prop) \
  void PropChanged##Prop(const boost::any & = boost::any())

#endif // VIEW_H
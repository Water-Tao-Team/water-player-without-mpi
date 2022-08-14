#include "../include/hello_controller.h"
#include "../../view/include/hello_view.h"
#include "../../log/log.h"

#define VIEW ((HelloView *) this->view_)

void HelloController::DidAttached() {
  super_class::DidAttached();
  log_info << "HelloController DidAttached\n"; 

  VIEW->PropChangedSayHello();
}

void HelloController::DidClosed() {
  super_class::DidClosed();
  log_info << "HelloController DidClosed\n"; 

  VIEW->PropChangedSayGoodBye();
}

void HelloController::HandleActionHi(const boost::any &) {
  log_info << "HelloController: say hi from view\n"; 
}

#undef VIEW
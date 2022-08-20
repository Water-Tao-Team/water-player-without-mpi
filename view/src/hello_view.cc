#include <view/hello_view.h>
#include <controller/hello_controller.h>

#define CTR HelloController

HelloView::HelloView() 
  : super_class(new CTR()) 
{
}

void HelloView::PropChangedSayHello(const boost::any &) {
  log_info << "HelloView: say hello from controller\n"; 

  CONTROLLER->HandleActionHi();
}

void HelloView::PropChangedSayGoodBye(const boost::any &) {
  log_info << "HelloView: say goodbye from controller\n"; 
}

#undef CTR
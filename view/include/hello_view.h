#ifndef HELLO_VIEW_H
#define HELLO_VIEW_H
#include "../../mvc/include/view.h"

class HelloView : public View {
  typedef View super_class; 
public:
  HelloView(); 
  DEFINE_PROP(SayHello);
  DEFINE_PROP(SayGoodBye);
};

#endif // HELLO_VIEW_H
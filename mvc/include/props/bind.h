#ifndef BIND_H
#define BIND_H

enum ModelType {
  kModelHello, 
}; 

namespace Player {

namespace Hello {
enum Events {
  kEventHiFromModel = 0,
}; 
enum Call {
  kCallHelloModel = 0,
}; 
}

}

#endif 
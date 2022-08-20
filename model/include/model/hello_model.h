#ifndef HELLO_MODEL
#define HELLO_MODEL

#include <mvc/model.h>

class HelloModel : public Model {
public:
  bool Call(int call_prop, const boost::any &params, boost::any &result) override;

private:
  bool InvokeCallHelloModel(const boost::any &params, boost::any &result); 
};

#endif // HELLO_MODEL
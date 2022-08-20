#ifndef MODEL_H
#define MODEL_H

#include <functional>
#include <boost/any.hpp>

class Model {
public:
  typedef std::function<void(const boost::any &)> EventHandler; 

  Model() = default; 
  ~Model() = default; 

  void Subscribe(int prop, void *ctrptr, const EventHandler &handler) {
    bind_func_[prop][ctrptr] = handler; 
  }

  void Unsubscribe(int prop, void *ctrptr) {
    bind_func_[prop].erase(ctrptr); 
  }

  void FireEvent(int prop, const boost::any &param) {
    for (auto entry : bind_func_[prop]) {
      entry.second(param); 
    }
  }

  virtual bool Call(int call_prop, const boost::any &params, boost::any &result) = 0;
  
private:
  std::map<int, std::map<void *, EventHandler>> bind_func_; 
}; 

#endif // MODEL_H
#ifndef MODEL_FACTORY
#define MODEL_FACTORY

#include <map>
#include <props/bind.h> 
#include <mvc/model.h>
#include <log/log.h>

#include <model/hello_model.h>

inline Model *ModelSelect(ModelType mt) {
  if (mt == kModelHello) {
    return new HelloModel(); 
  } else {
    log_error << "unkown model type\n"; 
    return nullptr;
  }
}

class ModelFactory {
public:
  static ModelFactory *GetInstance() {
    static ModelFactory mf;
    return &mf; 
  }

  Model *GetModel(ModelType mt) {
    if (!model_map_.count(mt)) {
      model_map_[mt] = ModelSelect(mt);
    }
    return model_map_[mt]; 
  }

private:
  std::map<ModelType, Model *> model_map_; 
}; 

#endif // MODEL_FACTORY
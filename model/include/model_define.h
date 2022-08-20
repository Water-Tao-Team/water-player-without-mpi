#include <factory/model_factory.h>
#include <mvc/model.h>

#define BEGIN_SUBSCRIBE(model_type) \
  { \
    Model *model = ModelFactory::GetInstance()->GetModel(model_type);

#define END_SUBSCRIBE() \
  }

#define SUBSCRIBE_EVENT(prop, handler) \
  model->Subscribe(prop, this, handler)

#define UNSUBSCRIBE_EVENT(prop) \
  model->Unscbsccribe(prop, this)
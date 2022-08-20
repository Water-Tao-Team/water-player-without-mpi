#include <controller/hello_controller.h>
#include <view/hello_view.h>
#include <model/hello_model.h>

int main() {
  HelloView *hv = new HelloView();

  hv->DidAttached();
  hv->DidClosed();

  delete hv;
}
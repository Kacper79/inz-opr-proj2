#include "Invoker.h"
#include "Receiver.h"
#include "ComplexCommand.h"
#include "SimpleCommand.h"

/**
 * The client code can parameterize an invoker with any commands.
 */

int main() {
  Invoker *invoker = new Invoker;
  Invoker *secondInvoker = new Invoker;
  secondInvoker->StatusCheck();
  invoker->SetOnStart(new SimpleCommand("Say Hi!"));
  Receiver *receiver = new Receiver;
  invoker->SetOnFinish(new ComplexCommand(receiver, "Send email", "Save report"));
  invoker->DoSomethingImportant();
  receiver->Wykrzacz();
  delete invoker;
  delete secondInvoker;
  delete receiver;

  return 0;
}
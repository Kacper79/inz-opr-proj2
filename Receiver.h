#ifndef RECEIVER_H_
#define RECEIVER_H_

#include <iostream>

/**
 * The Receiver classes contain some important business logic. They know how to
 * perform all kinds of operations, associated with carrying out a request. In
 * fact, any class may serve as a Receiver.
 */
class Receiver {
 public:
  void DoSomething(const std::string &a, int b);
  void DoSomethingElse(const std::string &b);
  void Wykrzacz();
};
#endif
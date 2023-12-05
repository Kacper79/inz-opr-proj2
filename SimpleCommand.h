#include "Command.h"
#include <iostream>

/**
 * Some commands can implement simple operations on their own.
 */
class SimpleCommand : public Command {
  std::string pay_load_;
 public:
  explicit SimpleCommand(std::string pay_load);
  void Execute() const override ;
};
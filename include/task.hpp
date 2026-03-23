#pragma once
#include <chrono>
#include <string>

enum class TaskState { Approaching, InProgress, Complete, PastDue, Delayed };

struct Task {
  int id;
  std::string name;
  std::chrono::system_clock::time_point start;
  std::chrono::system_clock::time_point endl;
  TaskState taskState;
};

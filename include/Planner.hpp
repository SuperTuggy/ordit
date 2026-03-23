#include "../include/task.hpp"
#include <vector>

class Planner {
private:
  std::vector<Task> tasks;

public:
  void sortTasks(std::vector<Task> &tasks);
  void displayTasks();
  void addTask(Task task);
  void removeTask(Task task);
};

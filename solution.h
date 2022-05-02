
#ifndef SOLUTION_H
#define SOLUTION_H

#include "node.h"
#include <vector>
#include <queue>
#include <unordered_set>
#include <string>
#include <stack>

using namespace std;
namespace sol916
{

  class Solution
  {
  private:
    vector<int> count(string s);

  public:
    vector<string> find(vector<string> &A, vector<string> &B);
  };
}
#endif
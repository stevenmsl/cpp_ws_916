#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <queue>
#include <string>
#include <sstream>
#include <algorithm>
using namespace sol916;
using namespace std;

/*takeaways
  - loop through each word in B to collect the
    maximum number of each char required
    - B = ["ec","ooc","ceooo"]
    - we know that in total we need 1 'e',
       1 'c', and 3 'o' from a word in A
       for that word that make the cut
*/

vector<int> Solution::count(string s)
{
  auto counter = vector<int>(26);
  for (auto c : s)
    counter[c - 'a']++;

  return counter;
}

vector<string> Solution::find(vector<string> &A, vector<string> &B)
{
  /* words in A need to have at least the number of 
     each char recorded here to make the cut
  */
  auto required = vector<int>(26);
  for (auto w : B)
  {
    auto counter = count(w);
    for (auto i = 0; i < required.size(); i++)
      required[i] = max(required[i], counter[i]);
  }

  auto result = vector<string>();
  for (auto w : A)
  {
    auto counter = count(w);
    auto add = true;
    for (auto i = 0; i < required.size(); i++)
      if (counter[i] < required[i])
      {
        add = false;
        break;
      }
    if (add)
      result.push_back(w);
  }

  return result;
}
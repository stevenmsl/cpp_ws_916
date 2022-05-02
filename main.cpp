#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol916;

/*
Input: A = ["amazon","apple","facebook","google","leetcode"], B = ["e","o"]
Output: ["facebook","google","leetcode"]
*/
tuple<vector<string>, vector<string>, vector<string>>
testFixture1()
{
  auto A = vector<string>{"amazon", "apple", "facebook", "google", "leetcode"};
  auto B = vector<string>{"e", "o"};
  auto output = vector<string>{"facebook", "google", "leetcode"};

  return make_tuple(A, B, output);
}

/*
Input: A = ["amazon","apple","facebook","google","leetcode"], B = ["l","e"]
Output: ["apple","google","leetcode"]
*/
tuple<vector<string>, vector<string>, vector<string>>
testFixture2()
{
  auto A = vector<string>{"amazon", "apple", "facebook", "google", "leetcode"};
  auto B = vector<string>{"l", "e"};
  auto output = vector<string>{"apple", "google", "leetcode"};

  return make_tuple(A, B, output);
}

/*
Input: A = ["amazon","apple","facebook","google","leetcode"], B = ["e","oo"]
Output: ["facebook","google"]
*/
tuple<vector<string>, vector<string>, vector<string>>
testFixture3()
{
  auto A = vector<string>{"amazon", "apple", "facebook", "google", "leetcode"};
  auto B = vector<string>{"e", "oo"};
  auto output = vector<string>{"facebook", "google"};

  return make_tuple(A, B, output);
}

/*
Input: A = ["amazon","apple","facebook","google","leetcode"], B = ["lo","eo"]
Output: ["google","leetcode"]
*/
tuple<vector<string>, vector<string>, vector<string>>
testFixture4()
{
  auto A = vector<string>{"amazon", "apple", "facebook", "google", "leetcode"};
  auto B = vector<string>{"lo", "eo"};
  auto output = vector<string>{"google", "leetcode"};

  return make_tuple(A, B, output);
}

/*
Input: A = ["amazon","apple","facebook","google","leetcode"], B = ["ec","oc","ceo"]
Output: ["facebook","leetcode"]
*/
tuple<vector<string>, vector<string>, vector<string>>
testFixture5()
{
  auto A = vector<string>{"amazon", "apple", "facebook", "google", "leetcode"};
  auto B = vector<string>{"ec", "oc", "ceo"};
  auto output = vector<string>{"facebook", "leetcode"};

  return make_tuple(A, B, output);
}

void test1()
{
  auto f = testFixture1();
  Solution sol;
  cout << "Expect to see " << Util::toString(get<2>(f))
       << ": " << Util::toString(sol.find(get<0>(f), get<1>(f))) << endl;
}
void test2()
{
  auto f = testFixture2();
  Solution sol;
  cout << "Expect to see " << Util::toString(get<2>(f))
       << ": " << Util::toString(sol.find(get<0>(f), get<1>(f))) << endl;
}

void test3()
{
  auto f = testFixture3();
  Solution sol;
  cout << "Expect to see " << Util::toString(get<2>(f))
       << ": " << Util::toString(sol.find(get<0>(f), get<1>(f))) << endl;
}

void test4()
{
  auto f = testFixture4();
  Solution sol;
  cout << "Expect to see " << Util::toString(get<2>(f))
       << ": " << Util::toString(sol.find(get<0>(f), get<1>(f))) << endl;
}

void test5()
{
  auto f = testFixture5();
  Solution sol;
  cout << "Expect to see " << Util::toString(get<2>(f))
       << ": " << Util::toString(sol.find(get<0>(f), get<1>(f))) << endl;
}

main()
{
  test1();
  test2();
  test3();
  test4();
  test5();
  return 0;
}
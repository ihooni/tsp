#ifndef TSP_BASICHILLCLIMBING_H
#define TSP_BASICHILLCLIMBING_H

#include <random>
#include "AbstractSolver.h"
#include "./tool/Euclidean.h"

using namespace std;

class BasicHillClimbing: public AbstractSolver {
 protected:
  /**
   * Tool for calculating euclidean distance
   */
  Euclidean *eucl = new Euclidean();

 protected:
  /**
   * Solve TSP of current graph.
   * Use basic greedy algorithm(nearest neighbor).
   */
  void solve(Timer& timer, long long iteration) override;
};

#endif //TSP_BASICHILLCLIMBING_H

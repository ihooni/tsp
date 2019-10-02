#include "AbstractSolver.h"

using namespace std;

class Hillclimbing: public AbstractSolver {
 protected:
  /**
   * Solve TSP of current graph.
   * Use Hill Climbing (LK heuristic) algorithm(nearest neighbor).
   */
  void solve() override;

 public:
  Hillclimbing() = default;

  Hillclimbing(Graph *g);
};
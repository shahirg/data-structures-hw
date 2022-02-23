#include <vector>
#include "NestedInteger.h"
class NestedIterator {
public:
    NestedIterator(std::vector<NestedInteger>& nestedList);
    int next();

    bool hasNext();
private:
    NestedIterator* it = nullptr;
};

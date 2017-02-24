// Author: Alexander Thomson <thomson@cs.yale.edu>
// Author: Kun Ren <kun.ren@yale.edu>
//
// A store is simply something that runs Actions.

#ifndef CALVIN_COMPONENTS_STORE_STORE_H_
#define CALVIN_COMPONENTS_STORE_STORE_H_

#include <set>
#include "common/types.h"

using std::set;

class Action;  // (lawsuit)

class Store {
 public:
  virtual ~Store() {}
  virtual void GetRWSets(Action* action) = 0;
  virtual void Run(Action* action) = 0;
  virtual bool IsLocal(const string& path) = 0;

  virtual uint32 LookupReplicaByDir(string dir) = 0;
  virtual uint64 GetHeadMachine(uint64 machine_id) = 0;
  virtual uint32 LocalReplica() = 0;
  virtual pair<uint32, uint64> GetLocalKeyMastership(string) = 0;
  virtual bool CheckLocalMastership(Action* action, set<pair<string,uint64>>& keys) = 0;
};

#endif  // CALVIN_COMPONENTS_STORE_STORE_H_


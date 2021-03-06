/* Copyright (c) 2018 vesoft inc. All rights reserved.
 *
 * This source code is licensed under Apache 2.0 License,
 * attached with Common Clause Condition 1.0, found in the LICENSES directory.
 */

#ifndef GRAPH_REMOVETAGEXECUTOR_H
#define GRAPH_REMOVETAGEXECUTOR_H

#include "base/Base.h"
#include "graph/Executor.h"

namespace nebula {
namespace graph {

class RemoveTagExecutor final : public Executor {
public:
    RemoveTagExecutor(Sentence *sentence, ExecutionContext *context);

    const char* name() const override {
        return "RemoveTagExecutor";
    }

    Status MUST_USE_RESULT prepare() override;

    void execute() override;

private:
    RemoveTagSentence *sentence_{nullptr};
};

}   // namespace graph
}   // namespace nebula

#endif  // GRAPH_REMOVETAGEXECUTOR_H


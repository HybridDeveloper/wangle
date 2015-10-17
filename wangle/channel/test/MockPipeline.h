/*
 *  Copyright (c) 2015, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

#pragma once

#include <gmock/gmock.h>
#include <wangle/channel/Pipeline.h>

namespace wangle {

class MockPipelineManager : public wangle::PipelineManager {
 public:
  MOCK_METHOD1(deletePipeline, void(PipelineBase*));
};

} // namespace wangle

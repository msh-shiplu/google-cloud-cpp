// Copyright 2024 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/compute/region_zones/v1/region_zones.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_ZONES_V1_INTERNAL_REGION_ZONES_REST_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_ZONES_V1_INTERNAL_REGION_ZONES_REST_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/internal/rest_client.h"
#include "google/cloud/internal/rest_context.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/compute/region_zones/v1/region_zones.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_zones_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class RegionZonesRestStub {
 public:
  virtual ~RegionZonesRestStub() = default;

  virtual StatusOr<google::cloud::cpp::compute::v1::ZoneList> ListRegionZones(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_zones::v1::
          ListRegionZonesRequest const& request) = 0;
};

class DefaultRegionZonesRestStub : public RegionZonesRestStub {
 public:
  ~DefaultRegionZonesRestStub() override = default;

  explicit DefaultRegionZonesRestStub(Options options);
  DefaultRegionZonesRestStub(std::shared_ptr<rest_internal::RestClient> service,
                             Options options);

  StatusOr<google::cloud::cpp::compute::v1::ZoneList> ListRegionZones(
      google::cloud::rest_internal::RestContext& rest_context,
      Options const& options,
      google::cloud::cpp::compute::region_zones::v1::
          ListRegionZonesRequest const& request) override;

 private:
  std::shared_ptr<rest_internal::RestClient> service_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_zones_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_ZONES_V1_INTERNAL_REGION_ZONES_REST_STUB_H

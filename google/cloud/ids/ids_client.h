// Copyright 2022 Google LLC
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
// source: google/cloud/ids/v1/ids.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IDS_IDS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IDS_IDS_CLIENT_H

#include "google/cloud/ids/ids_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace ids {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// The IDS Service
///
/// @par Equality
///
/// Instances of this class created via copy-construction or copy-assignment
/// always compare equal. Instances created with equal
/// `std::shared_ptr<*Connection>` objects compare equal. Objects that compare
/// equal share the same underlying resources.
///
/// @par Performance
///
/// Creating a new instance of this class is a relatively expensive operation,
/// new objects establish new connections to the service. In contrast,
/// copy-construction, move-construction, and the corresponding assignment
/// operations are relatively efficient as the copies share all underlying
/// resources.
///
/// @par Thread Safety
///
/// Concurrent access to different instances of this class, even if they compare
/// equal, is guaranteed to work. Two or more threads operating on the same
/// instance of this class is not guaranteed to work. Since copy-construction
/// and move-construction is a relatively efficient operation, consider using
/// such a copy when using this class from multiple threads.
///
class IDSClient {
 public:
  explicit IDSClient(std::shared_ptr<IDSConnection> connection,
                     Options opts = {});
  ~IDSClient();

  ///@{
  // @name Copy and move support
  IDSClient(IDSClient const&) = default;
  IDSClient& operator=(IDSClient const&) = default;
  IDSClient(IDSClient&&) = default;
  IDSClient& operator=(IDSClient&&) = default;
  ///@}

  ///@{
  // @name Equality
  friend bool operator==(IDSClient const& a, IDSClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(IDSClient const& a, IDSClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Lists Endpoints in a given project and location.
  ///
  /// @param parent  Required. The parent, which owns this collection of
  /// endpoints.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::ids::v1::Endpoint,google/cloud/ids/v1/ids.proto#L81}
  ///
  /// [google.cloud.ids.v1.ListEndpointsRequest]:
  /// @googleapis_reference_link{google/cloud/ids/v1/ids.proto#L158}
  /// [google.cloud.ids.v1.Endpoint]:
  /// @googleapis_reference_link{google/cloud/ids/v1/ids.proto#L81}
  ///
  StreamRange<google::cloud::ids::v1::Endpoint> ListEndpoints(
      std::string const& parent, Options opts = {});

  ///
  /// Lists Endpoints in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::ids::v1::ListEndpointsRequest,google/cloud/ids/v1/ids.proto#L158}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::ids::v1::Endpoint,google/cloud/ids/v1/ids.proto#L81}
  ///
  /// [google.cloud.ids.v1.ListEndpointsRequest]:
  /// @googleapis_reference_link{google/cloud/ids/v1/ids.proto#L158}
  /// [google.cloud.ids.v1.Endpoint]:
  /// @googleapis_reference_link{google/cloud/ids/v1/ids.proto#L81}
  ///
  StreamRange<google::cloud::ids::v1::Endpoint> ListEndpoints(
      google::cloud::ids::v1::ListEndpointsRequest request, Options opts = {});

  ///
  /// Gets details of a single Endpoint.
  ///
  /// @param name  Required. The name of the endpoint to retrieve.
  ///  Format: `projects/{project}/locations/{location}/endpoints/{endpoint}`
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::ids::v1::Endpoint,google/cloud/ids/v1/ids.proto#L81}
  ///
  /// [google.cloud.ids.v1.GetEndpointRequest]:
  /// @googleapis_reference_link{google/cloud/ids/v1/ids.proto#L199}
  /// [google.cloud.ids.v1.Endpoint]:
  /// @googleapis_reference_link{google/cloud/ids/v1/ids.proto#L81}
  ///
  StatusOr<google::cloud::ids::v1::Endpoint> GetEndpoint(
      std::string const& name, Options opts = {});

  ///
  /// Gets details of a single Endpoint.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::ids::v1::GetEndpointRequest,google/cloud/ids/v1/ids.proto#L199}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::ids::v1::Endpoint,google/cloud/ids/v1/ids.proto#L81}
  ///
  /// [google.cloud.ids.v1.GetEndpointRequest]:
  /// @googleapis_reference_link{google/cloud/ids/v1/ids.proto#L199}
  /// [google.cloud.ids.v1.Endpoint]:
  /// @googleapis_reference_link{google/cloud/ids/v1/ids.proto#L81}
  ///
  StatusOr<google::cloud::ids::v1::Endpoint> GetEndpoint(
      google::cloud::ids::v1::GetEndpointRequest const& request,
      Options opts = {});

  ///
  /// Creates a new Endpoint in a given project and location.
  ///
  /// @param parent  Required. The endpoint's parent.
  /// @param endpoint  Required. The endpoint to create.
  /// @param endpoint_id  Required. The endpoint identifier. This will be part
  /// of the endpoint's
  ///  resource name.
  ///  This value must start with a lowercase letter followed by up to 62
  ///  lowercase letters, numbers, or hyphens, and cannot end with a hyphen.
  ///  Values that do not match this pattern will trigger an INVALID_ARGUMENT
  ///  error.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::ids::v1::Endpoint,google/cloud/ids/v1/ids.proto#L81}
  ///
  /// [google.cloud.ids.v1.CreateEndpointRequest]:
  /// @googleapis_reference_link{google/cloud/ids/v1/ids.proto#L210}
  /// [google.cloud.ids.v1.Endpoint]:
  /// @googleapis_reference_link{google/cloud/ids/v1/ids.proto#L81}
  ///
  future<StatusOr<google::cloud::ids::v1::Endpoint>> CreateEndpoint(
      std::string const& parent,
      google::cloud::ids::v1::Endpoint const& endpoint,
      std::string const& endpoint_id, Options opts = {});

  ///
  /// Creates a new Endpoint in a given project and location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::ids::v1::CreateEndpointRequest,google/cloud/ids/v1/ids.proto#L210}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::ids::v1::Endpoint,google/cloud/ids/v1/ids.proto#L81}
  ///
  /// [google.cloud.ids.v1.CreateEndpointRequest]:
  /// @googleapis_reference_link{google/cloud/ids/v1/ids.proto#L210}
  /// [google.cloud.ids.v1.Endpoint]:
  /// @googleapis_reference_link{google/cloud/ids/v1/ids.proto#L81}
  ///
  future<StatusOr<google::cloud::ids::v1::Endpoint>> CreateEndpoint(
      google::cloud::ids::v1::CreateEndpointRequest const& request,
      Options opts = {});

  ///
  /// Deletes a single Endpoint.
  ///
  /// @param name  Required. The name of the endpoint to delete.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::ids::v1::OperationMetadata,google/cloud/ids/v1/ids.proto#L272}
  ///
  /// [google.cloud.ids.v1.DeleteEndpointRequest]:
  /// @googleapis_reference_link{google/cloud/ids/v1/ids.proto#L246}
  /// [google.cloud.ids.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/ids/v1/ids.proto#L272}
  ///
  future<StatusOr<google::cloud::ids::v1::OperationMetadata>> DeleteEndpoint(
      std::string const& name, Options opts = {});

  ///
  /// Deletes a single Endpoint.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::ids::v1::DeleteEndpointRequest,google/cloud/ids/v1/ids.proto#L246}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::ids::v1::OperationMetadata,google/cloud/ids/v1/ids.proto#L272}
  ///
  /// [google.cloud.ids.v1.DeleteEndpointRequest]:
  /// @googleapis_reference_link{google/cloud/ids/v1/ids.proto#L246}
  /// [google.cloud.ids.v1.OperationMetadata]:
  /// @googleapis_reference_link{google/cloud/ids/v1/ids.proto#L272}
  ///
  future<StatusOr<google::cloud::ids::v1::OperationMetadata>> DeleteEndpoint(
      google::cloud::ids::v1::DeleteEndpointRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<IDSConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace ids
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IDS_IDS_CLIENT_H

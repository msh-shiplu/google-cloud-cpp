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
// source: google/cloud/dataproc/v1/batches.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_BATCH_CONTROLLER_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_BATCH_CONTROLLER_CLIENT_H

#include "google/cloud/dataproc/batch_controller_connection.h"
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
namespace dataproc {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// The BatchController provides methods to manage batch workloads.
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
class BatchControllerClient {
 public:
  explicit BatchControllerClient(
      std::shared_ptr<BatchControllerConnection> connection, Options opts = {});
  ~BatchControllerClient();

  ///@{
  // @name Copy and move support
  BatchControllerClient(BatchControllerClient const&) = default;
  BatchControllerClient& operator=(BatchControllerClient const&) = default;
  BatchControllerClient(BatchControllerClient&&) = default;
  BatchControllerClient& operator=(BatchControllerClient&&) = default;
  ///@}

  ///@{
  // @name Equality
  friend bool operator==(BatchControllerClient const& a,
                         BatchControllerClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(BatchControllerClient const& a,
                         BatchControllerClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Creates a batch workload that executes asynchronously.
  ///
  /// @param parent  Required. The parent resource where this batch will be
  /// created.
  /// @param batch  Required. The batch to create.
  /// @param batch_id  Optional. The ID to use for the batch, which will become
  /// the final component of
  ///  the batch's resource name.
  ///  This value must be 4-63 characters. Valid characters are `/[a-z][0-9]-/`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::Batch,google/cloud/dataproc/v1/batches.proto#L164}
  ///
  /// [google.cloud.dataproc.v1.CreateBatchRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/batches.proto#L78}
  /// [google.cloud.dataproc.v1.Batch]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/batches.proto#L164}
  ///
  future<StatusOr<google::cloud::dataproc::v1::Batch>> CreateBatch(
      std::string const& parent,
      google::cloud::dataproc::v1::Batch const& batch,
      std::string const& batch_id, Options opts = {});

  ///
  /// Creates a batch workload that executes asynchronously.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataproc::v1::CreateBatchRequest,google/cloud/dataproc/v1/batches.proto#L78}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::Batch,google/cloud/dataproc/v1/batches.proto#L164}
  ///
  /// [google.cloud.dataproc.v1.CreateBatchRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/batches.proto#L78}
  /// [google.cloud.dataproc.v1.Batch]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/batches.proto#L164}
  ///
  future<StatusOr<google::cloud::dataproc::v1::Batch>> CreateBatch(
      google::cloud::dataproc::v1::CreateBatchRequest const& request,
      Options opts = {});

  ///
  /// Gets the batch workload resource representation.
  ///
  /// @param name  Required. The name of the batch to retrieve.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::Batch,google/cloud/dataproc/v1/batches.proto#L164}
  ///
  /// [google.cloud.dataproc.v1.GetBatchRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/batches.proto#L112}
  /// [google.cloud.dataproc.v1.Batch]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/batches.proto#L164}
  ///
  StatusOr<google::cloud::dataproc::v1::Batch> GetBatch(std::string const& name,
                                                        Options opts = {});

  ///
  /// Gets the batch workload resource representation.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataproc::v1::GetBatchRequest,google/cloud/dataproc/v1/batches.proto#L112}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::Batch,google/cloud/dataproc/v1/batches.proto#L164}
  ///
  /// [google.cloud.dataproc.v1.GetBatchRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/batches.proto#L112}
  /// [google.cloud.dataproc.v1.Batch]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/batches.proto#L164}
  ///
  StatusOr<google::cloud::dataproc::v1::Batch> GetBatch(
      google::cloud::dataproc::v1::GetBatchRequest const& request,
      Options opts = {});

  ///
  /// Lists batch workloads.
  ///
  /// @param parent  Required. The parent, which owns this collection of
  /// batches.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::Batch,google/cloud/dataproc/v1/batches.proto#L164}
  ///
  /// [google.cloud.dataproc.v1.ListBatchesRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/batches.proto#L123}
  /// [google.cloud.dataproc.v1.Batch]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/batches.proto#L164}
  ///
  StreamRange<google::cloud::dataproc::v1::Batch> ListBatches(
      std::string const& parent, Options opts = {});

  ///
  /// Lists batch workloads.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataproc::v1::ListBatchesRequest,google/cloud/dataproc/v1/batches.proto#L123}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::dataproc::v1::Batch,google/cloud/dataproc/v1/batches.proto#L164}
  ///
  /// [google.cloud.dataproc.v1.ListBatchesRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/batches.proto#L123}
  /// [google.cloud.dataproc.v1.Batch]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/batches.proto#L164}
  ///
  StreamRange<google::cloud::dataproc::v1::Batch> ListBatches(
      google::cloud::dataproc::v1::ListBatchesRequest request,
      Options opts = {});

  ///
  /// Deletes the batch workload resource. If the batch is not in terminal
  /// state, the delete fails and the response returns `FAILED_PRECONDITION`.
  ///
  /// @param name  Required. The name of the batch resource to delete.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.dataproc.v1.DeleteBatchRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/batches.proto#L153}
  ///
  Status DeleteBatch(std::string const& name, Options opts = {});

  ///
  /// Deletes the batch workload resource. If the batch is not in terminal
  /// state, the delete fails and the response returns `FAILED_PRECONDITION`.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::dataproc::v1::DeleteBatchRequest,google/cloud/dataproc/v1/batches.proto#L153}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.dataproc.v1.DeleteBatchRequest]:
  /// @googleapis_reference_link{google/cloud/dataproc/v1/batches.proto#L153}
  ///
  Status DeleteBatch(
      google::cloud::dataproc::v1::DeleteBatchRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<BatchControllerConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace dataproc
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_DATAPROC_BATCH_CONTROLLER_CLIENT_H

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
// source: google/cloud/orchestration/airflow/service/v1/image_versions.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_IMAGE_VERSIONS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_IMAGE_VERSIONS_CLIENT_H

#include "google/cloud/composer/image_versions_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace composer {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Readonly service to query available ImageVersions.
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
class ImageVersionsClient {
 public:
  explicit ImageVersionsClient(
      std::shared_ptr<ImageVersionsConnection> connection, Options opts = {});
  ~ImageVersionsClient();

  ///@{
  // @name Copy and move support
  ImageVersionsClient(ImageVersionsClient const&) = default;
  ImageVersionsClient& operator=(ImageVersionsClient const&) = default;
  ImageVersionsClient(ImageVersionsClient&&) = default;
  ImageVersionsClient& operator=(ImageVersionsClient&&) = default;
  ///@}

  ///@{
  // @name Equality
  friend bool operator==(ImageVersionsClient const& a,
                         ImageVersionsClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ImageVersionsClient const& a,
                         ImageVersionsClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// List ImageVersions for provided location.
  ///
  /// @param parent  List ImageVersions in the given project and location, in
  /// the form:
  ///  "projects/{projectId}/locations/{locationId}"
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::orchestration::airflow::service::v1::ImageVersion,google/cloud/orchestration/airflow/service/v1/image_versions.proto#L67}
  ///
  /// [google.cloud.orchestration.airflow.service.v1.ListImageVersionsRequest]:
  /// @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/image_versions.proto#L42}
  /// [google.cloud.orchestration.airflow.service.v1.ImageVersion]:
  /// @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/image_versions.proto#L67}
  ///
  StreamRange<google::cloud::orchestration::airflow::service::v1::ImageVersion>
  ListImageVersions(std::string const& parent, Options opts = {});

  ///
  /// List ImageVersions for provided location.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::orchestration::airflow::service::v1::ListImageVersionsRequest,google/cloud/orchestration/airflow/service/v1/image_versions.proto#L42}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::orchestration::airflow::service::v1::ImageVersion,google/cloud/orchestration/airflow/service/v1/image_versions.proto#L67}
  ///
  /// [google.cloud.orchestration.airflow.service.v1.ListImageVersionsRequest]:
  /// @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/image_versions.proto#L42}
  /// [google.cloud.orchestration.airflow.service.v1.ImageVersion]:
  /// @googleapis_reference_link{google/cloud/orchestration/airflow/service/v1/image_versions.proto#L67}
  ///
  StreamRange<google::cloud::orchestration::airflow::service::v1::ImageVersion>
  ListImageVersions(google::cloud::orchestration::airflow::service::v1::
                        ListImageVersionsRequest request,
                    Options opts = {});

 private:
  std::shared_ptr<ImageVersionsConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace composer
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPOSER_IMAGE_VERSIONS_CLIENT_H

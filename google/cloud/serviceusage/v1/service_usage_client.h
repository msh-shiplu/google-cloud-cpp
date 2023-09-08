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
// source: google/api/serviceusage/v1/serviceusage.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEUSAGE_V1_SERVICE_USAGE_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEUSAGE_V1_SERVICE_USAGE_CLIENT_H

#include "google/cloud/serviceusage/v1/service_usage_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>

namespace google {
namespace cloud {
namespace serviceusage_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Enables services that service consumers want to use on Google Cloud
/// Platform, lists the available or enabled services, or disables services that
/// service consumers no longer use.
///
/// See [Service Usage
/// API](https://cloud.google.com/service-usage/docs/overview)
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
class ServiceUsageClient {
 public:
  explicit ServiceUsageClient(
      std::shared_ptr<ServiceUsageConnection> connection, Options opts = {});
  ~ServiceUsageClient();

  ///@{
  /// @name Copy and move support
  ServiceUsageClient(ServiceUsageClient const&) = default;
  ServiceUsageClient& operator=(ServiceUsageClient const&) = default;
  ServiceUsageClient(ServiceUsageClient&&) = default;
  ServiceUsageClient& operator=(ServiceUsageClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(ServiceUsageClient const& a,
                         ServiceUsageClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(ServiceUsageClient const& a,
                         ServiceUsageClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Enable a service so that it can be used with a project.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.api.serviceusage.v1.EnableServiceRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.api.serviceusage.v1.EnableServiceResponse] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.api.serviceusage.v1.EnableServiceRequest]: @googleapis_reference_link{google/api/serviceusage/v1/serviceusage.proto#L124}
  /// [google.api.serviceusage.v1.EnableServiceResponse]: @googleapis_reference_link{google/api/serviceusage/v1/serviceusage.proto#L142}
  ///
  // clang-format on
  future<StatusOr<google::api::serviceusage::v1::EnableServiceResponse>>
  EnableService(
      google::api::serviceusage::v1::EnableServiceRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Disable a service so that it can no longer be used with a project.
  /// This prevents unintended usage that may cause unexpected billing
  /// charges or security leaks.
  ///
  /// It is not valid to call the disable method on a service that is not
  /// currently enabled. Callers will receive a `FAILED_PRECONDITION` status if
  /// the target service is not currently enabled.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.api.serviceusage.v1.DisableServiceRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.api.serviceusage.v1.DisableServiceResponse] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.api.serviceusage.v1.DisableServiceRequest]: @googleapis_reference_link{google/api/serviceusage/v1/serviceusage.proto#L148}
  /// [google.api.serviceusage.v1.DisableServiceResponse]: @googleapis_reference_link{google/api/serviceusage/v1/serviceusage.proto#L187}
  ///
  // clang-format on
  future<StatusOr<google::api::serviceusage::v1::DisableServiceResponse>>
  DisableService(
      google::api::serviceusage::v1::DisableServiceRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the service configuration and enabled state for a given service.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.api.serviceusage.v1.GetServiceRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.api.serviceusage.v1.Service])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.api.serviceusage.v1.GetServiceRequest]: @googleapis_reference_link{google/api/serviceusage/v1/serviceusage.proto#L193}
  /// [google.api.serviceusage.v1.Service]: @googleapis_reference_link{google/api/serviceusage/v1/resources.proto#L37}
  ///
  // clang-format on
  StatusOr<google::api::serviceusage::v1::Service> GetService(
      google::api::serviceusage::v1::GetServiceRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// List all services available to the specified project, and the current
  /// state of those services with respect to the project. The list includes
  /// all public services, all services for which the calling user has the
  /// `servicemanagement.services.bind` permission, and all services that have
  /// already been enabled on the project. The list can be filtered to
  /// only include services in a specific state, for example to only include
  /// services enabled on the project.
  ///
  /// WARNING: If you need to query enabled services frequently or across
  /// an organization, you should use
  /// [Cloud Asset Inventory
  /// API](https://cloud.google.com/asset-inventory/docs/apis), which provides
  /// higher throughput and richer filtering capability.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.api.serviceusage.v1.ListServicesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return a [StreamRange](@ref google::cloud::StreamRange)
  ///     to iterate of the results. See the documentation of this type for
  ///     details. In brief, this class has `begin()` and `end()` member
  ///     functions returning a iterator class meeting the
  ///     [input iterator requirements]. The value type for this iterator is a
  ///     [`StatusOr`] as the iteration may fail even after some values are
  ///     retrieved successfully, for example, if there is a network disconnect.
  ///     An empty set of results does not indicate an error, it indicates
  ///     that there are no resources meeting the request criteria.
  ///     On a successful iteration the `StatusOr<T>` contains elements of type
  ///     [google.api.serviceusage.v1.Service], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.api.serviceusage.v1.ListServicesRequest]: @googleapis_reference_link{google/api/serviceusage/v1/serviceusage.proto#L203}
  /// [google.api.serviceusage.v1.Service]: @googleapis_reference_link{google/api/serviceusage/v1/resources.proto#L37}
  ///
  // clang-format on
  StreamRange<google::api::serviceusage::v1::Service> ListServices(
      google::api::serviceusage::v1::ListServicesRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Enable multiple services on a project. The operation is atomic: if enabling
  /// any service fails, then the entire batch fails, and no state changes occur.
  /// To enable a single service, use the `EnableService` method instead.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.api.serviceusage.v1.BatchEnableServicesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.api.serviceusage.v1.BatchEnableServicesResponse] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: https://google.aip.dev/151
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.api.serviceusage.v1.BatchEnableServicesRequest]: @googleapis_reference_link{google/api/serviceusage/v1/serviceusage.proto#L235}
  /// [google.api.serviceusage.v1.BatchEnableServicesResponse]: @googleapis_reference_link{google/api/serviceusage/v1/serviceusage.proto#L261}
  ///
  // clang-format on
  future<StatusOr<google::api::serviceusage::v1::BatchEnableServicesResponse>>
  BatchEnableServices(
      google::api::serviceusage::v1::BatchEnableServicesRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Returns the service configurations and enabled states for a given list of
  /// services.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.api.serviceusage.v1.BatchGetServicesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.api.serviceusage.v1.BatchGetServicesResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.api.serviceusage.v1.BatchGetServicesRequest]: @googleapis_reference_link{google/api/serviceusage/v1/serviceusage.proto#L280}
  /// [google.api.serviceusage.v1.BatchGetServicesResponse]: @googleapis_reference_link{google/api/serviceusage/v1/serviceusage.proto#L298}
  ///
  // clang-format on
  StatusOr<google::api::serviceusage::v1::BatchGetServicesResponse>
  BatchGetServices(
      google::api::serviceusage::v1::BatchGetServicesRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<ServiceUsageConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace serviceusage_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SERVICEUSAGE_V1_SERVICE_USAGE_CLIENT_H

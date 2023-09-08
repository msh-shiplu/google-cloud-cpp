// Copyright 2023 Google LLC
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
// source:
// google/cloud/compute/region_security_policies/v1/region_security_policies.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SECURITY_POLICIES_V1_REGION_SECURITY_POLICIES_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SECURITY_POLICIES_V1_REGION_SECURITY_POLICIES_CLIENT_H

#include "google/cloud/compute/region_security_policies/v1/region_security_policies_rest_connection.h"
#include "google/cloud/experimental_tag.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <map>
#include <memory>

namespace google {
namespace cloud {
namespace compute_region_security_policies_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for the regionSecurityPolicies resource.
/// https://cloud.google.com/compute/docs/reference/rest/v1/regionSecurityPolicies
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
class RegionSecurityPoliciesClient {
 public:
  explicit RegionSecurityPoliciesClient(
      ExperimentalTag,
      std::shared_ptr<RegionSecurityPoliciesConnection> connection,
      Options opts = {});
  ~RegionSecurityPoliciesClient();

  ///@{
  /// @name Copy and move support
  RegionSecurityPoliciesClient(RegionSecurityPoliciesClient const&) = default;
  RegionSecurityPoliciesClient& operator=(RegionSecurityPoliciesClient const&) =
      default;
  RegionSecurityPoliciesClient(RegionSecurityPoliciesClient&&) = default;
  RegionSecurityPoliciesClient& operator=(RegionSecurityPoliciesClient&&) =
      default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(RegionSecurityPoliciesClient const& a,
                         RegionSecurityPoliciesClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(RegionSecurityPoliciesClient const& a,
                         RegionSecurityPoliciesClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Deletes the specified policy.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionSecurityPolicies/delete
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region scoping this request.
  /// @param security_policy  Name of the security policy to delete.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_security_policies.v1.DeleteRegionSecurityPoliciesRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_security_policies/v1/region_security_policies.proto#L105}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteRegionSecurityPolicies(std::string const& project,
                               std::string const& region,
                               std::string const& security_policy,
                               Options opts = {});

  // clang-format off
  ///
  /// Deletes the specified policy.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionSecurityPolicies/delete
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_security_policies.v1.DeleteRegionSecurityPoliciesRequest].
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
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_security_policies.v1.DeleteRegionSecurityPoliciesRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_security_policies/v1/region_security_policies.proto#L105}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  DeleteRegionSecurityPolicies(
      google::cloud::cpp::compute::region_security_policies::v1::
          DeleteRegionSecurityPoliciesRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// List all of the ordered rules present in a single specified policy.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionSecurityPolicies/get
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region scoping this request.
  /// @param security_policy  Name of the security policy to get.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.SecurityPolicy])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_security_policies.v1.GetRegionSecurityPoliciesRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_security_policies/v1/region_security_policies.proto#L135}
  /// [google.cloud.cpp.compute.v1.SecurityPolicy]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_106.proto#L29}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::SecurityPolicy>
  GetRegionSecurityPolicies(std::string const& project,
                            std::string const& region,
                            std::string const& security_policy,
                            Options opts = {});

  // clang-format off
  ///
  /// List all of the ordered rules present in a single specified policy.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionSecurityPolicies/get
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_security_policies.v1.GetRegionSecurityPoliciesRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.cpp.compute.v1.SecurityPolicy])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_security_policies.v1.GetRegionSecurityPoliciesRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_security_policies/v1/region_security_policies.proto#L135}
  /// [google.cloud.cpp.compute.v1.SecurityPolicy]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_106.proto#L29}
  ///
  // clang-format on
  StatusOr<google::cloud::cpp::compute::v1::SecurityPolicy>
  GetRegionSecurityPolicies(
      google::cloud::cpp::compute::region_security_policies::v1::
          GetRegionSecurityPoliciesRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a new policy in the specified project using the data included in
  /// the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionSecurityPolicies/insert
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region scoping this request.
  /// @param security_policy_resource  The SecurityPolicy for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_security_policies.v1.InsertRegionSecurityPoliciesRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_security_policies/v1/region_security_policies.proto#L147}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertRegionSecurityPolicies(
      std::string const& project, std::string const& region,
      google::cloud::cpp::compute::v1::SecurityPolicy const&
          security_policy_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Creates a new policy in the specified project using the data included in
  /// the request.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionSecurityPolicies/insert
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_security_policies.v1.InsertRegionSecurityPoliciesRequest].
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
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_security_policies.v1.InsertRegionSecurityPoliciesRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_security_policies/v1/region_security_policies.proto#L147}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  InsertRegionSecurityPolicies(
      google::cloud::cpp::compute::region_security_policies::v1::
          InsertRegionSecurityPoliciesRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// List all the policies that have been configured for the specified project
  /// and region.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionSecurityPolicies/list
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region scoping this request.
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
  ///     [google.cloud.cpp.compute.v1.SecurityPolicy], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_security_policies.v1.ListRegionSecurityPoliciesRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_security_policies/v1/region_security_policies.proto#L181}
  /// [google.cloud.cpp.compute.v1.SecurityPolicy]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_106.proto#L29}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::SecurityPolicy>
  ListRegionSecurityPolicies(std::string const& project,
                             std::string const& region, Options opts = {});

  // clang-format off
  ///
  /// List all the policies that have been configured for the specified project
  /// and region.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionSecurityPolicies/list
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_security_policies.v1.ListRegionSecurityPoliciesRequest].
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
  ///     [google.cloud.cpp.compute.v1.SecurityPolicy], or rather,
  ///     the C++ class generated by Protobuf from that type. Please consult the
  ///     Protobuf documentation for details on the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_security_policies.v1.ListRegionSecurityPoliciesRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_security_policies/v1/region_security_policies.proto#L181}
  /// [google.cloud.cpp.compute.v1.SecurityPolicy]: @cloud_cpp_reference_link{google/cloud/compute/v1/internal/common_106.proto#L29}
  ///
  // clang-format on
  StreamRange<google::cloud::cpp::compute::v1::SecurityPolicy>
  ListRegionSecurityPolicies(
      google::cloud::cpp::compute::region_security_policies::v1::
          ListRegionSecurityPoliciesRequest request,
      Options opts = {});

  // clang-format off
  ///
  /// Patches the specified policy with the data included in the request. To
  /// clear fields in the policy, leave the fields empty and specify them in the
  /// updateMask. This cannot be used to be update the rules in the policy.
  /// Please use the per rule methods like addRule, patchRule, and removeRule
  /// instead.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionSecurityPolicies/patch
  ///
  /// @param project  Project ID for this request.
  /// @param region  Name of the region scoping this request.
  /// @param security_policy  Name of the security policy to update.
  /// @param security_policy_resource  The SecurityPolicy for this request.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return A [`future`] that becomes satisfied when the LRO
  ///     ([Long Running Operation]) completes or the polling policy in effect
  ///     for this call is exhausted. The future is satisfied with an error if
  ///     the LRO completes with an error or the polling policy is exhausted.
  ///     In this case the [`StatusOr`] returned by the future contains the
  ///     error. If the LRO completes successfully the value of the future
  ///     contains the LRO's result. For this RPC the result is a
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_security_policies.v1.PatchRegionSecurityPoliciesRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_security_policies/v1/region_security_policies.proto#L249}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchRegionSecurityPolicies(
      std::string const& project, std::string const& region,
      std::string const& security_policy,
      google::cloud::cpp::compute::v1::SecurityPolicy const&
          security_policy_resource,
      Options opts = {});

  // clang-format off
  ///
  /// Patches the specified policy with the data included in the request. To
  /// clear fields in the policy, leave the fields empty and specify them in the
  /// updateMask. This cannot be used to be update the rules in the policy.
  /// Please use the per rule methods like addRule, patchRule, and removeRule
  /// instead.
  /// https://cloud.google.com/compute/docs/reference/rest/v1/regionSecurityPolicies/patch
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.cpp.compute.region_security_policies.v1.PatchRegionSecurityPoliciesRequest].
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
  ///     [google.cloud.cpp.compute.v1.Operation] proto message.
  ///     The C++ class representing this message is created by Protobuf, using
  ///     the [Protobuf mapping rules].
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [Long Running Operation]: http://cloud/compute/docs/api/how-tos/api-requests-responses#handling_api_responses
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.cpp.compute.region_security_policies.v1.PatchRegionSecurityPoliciesRequest]: @cloud_cpp_reference_link{google/cloud/compute/region_security_policies/v1/region_security_policies.proto#L249}
  ///
  // clang-format on
  future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
  PatchRegionSecurityPolicies(
      google::cloud::cpp::compute::region_security_policies::v1::
          PatchRegionSecurityPoliciesRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<RegionSecurityPoliciesConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_region_security_policies_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_COMPUTE_REGION_SECURITY_POLICIES_V1_REGION_SECURITY_POLICIES_CLIENT_H

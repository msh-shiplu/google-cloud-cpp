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
// source: google/cloud/retail/v2/user_event_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_USER_EVENT_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_USER_EVENT_CLIENT_H

#include "google/cloud/retail/v2/user_event_connection.h"
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
namespace retail_v2 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service for ingesting end user actions on the customer website.
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
class UserEventServiceClient {
 public:
  explicit UserEventServiceClient(
      std::shared_ptr<UserEventServiceConnection> connection,
      Options opts = {});
  ~UserEventServiceClient();

  ///@{
  /// @name Copy and move support
  UserEventServiceClient(UserEventServiceClient const&) = default;
  UserEventServiceClient& operator=(UserEventServiceClient const&) = default;
  UserEventServiceClient(UserEventServiceClient&&) = default;
  UserEventServiceClient& operator=(UserEventServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(UserEventServiceClient const& a,
                         UserEventServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(UserEventServiceClient const& a,
                         UserEventServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Writes a single user event.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.retail.v2.WriteUserEventRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.retail.v2.UserEvent])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.retail.v2.UserEvent]: @googleapis_reference_link{google/cloud/retail/v2/user_event.proto#L36}
  /// [google.cloud.retail.v2.WriteUserEventRequest]: @googleapis_reference_link{google/cloud/retail/v2/user_event_service.proto#L120}
  ///
  // clang-format on
  StatusOr<google::cloud::retail::v2::UserEvent> WriteUserEvent(
      google::cloud::retail::v2::WriteUserEventRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Writes a single user event from the browser. This uses a GET request to
  /// due to browser restriction of POST-ing to a 3rd party domain.
  ///
  /// This method is used only by the Retail API JavaScript pixel and Google Tag
  /// Manager. Users should not call this method directly.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.retail.v2.CollectUserEventRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.api.HttpBody])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.api.HttpBody]: @googleapis_reference_link{google/api/httpbody.proto#L71}
  /// [google.cloud.retail.v2.CollectUserEventRequest]: @googleapis_reference_link{google/cloud/retail/v2/user_event_service.proto#L136}
  ///
  // clang-format on
  StatusOr<google::api::HttpBody> CollectUserEvent(
      google::cloud::retail::v2::CollectUserEventRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Deletes permanently all user events specified by the filter provided.
  /// Depending on the number of events specified by the filter, this operation
  /// could take hours or days to complete. To test a filter, use the list
  /// command first.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.retail.v2.PurgeUserEventsRequest].
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
  ///     [google.cloud.retail.v2.PurgeUserEventsResponse] proto message.
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
  /// [google.cloud.retail.v2.PurgeUserEventsRequest]: @googleapis_reference_link{google/cloud/retail/v2/purge_config.proto#L36}
  /// [google.cloud.retail.v2.PurgeUserEventsResponse]: @googleapis_reference_link{google/cloud/retail/v2/purge_config.proto#L79}
  ///
  // clang-format on
  future<StatusOr<google::cloud::retail::v2::PurgeUserEventsResponse>>
  PurgeUserEvents(
      google::cloud::retail::v2::PurgeUserEventsRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Bulk import of User events. Request processing might be
  /// synchronous. Events that already exist are skipped.
  /// Use this method for backfilling historical user events.
  ///
  /// `Operation.response` is of type `ImportResponse`. Note that it is
  /// possible for a subset of the items to be successfully inserted.
  /// `Operation.metadata` is of type `ImportMetadata`.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.retail.v2.ImportUserEventsRequest].
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
  ///     [google.cloud.retail.v2.ImportUserEventsResponse] proto message.
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
  /// [google.cloud.retail.v2.ImportUserEventsRequest]: @googleapis_reference_link{google/cloud/retail/v2/import_config.proto#L222}
  /// [google.cloud.retail.v2.ImportUserEventsResponse]: @googleapis_reference_link{google/cloud/retail/v2/import_config.proto#L356}
  ///
  // clang-format on
  future<StatusOr<google::cloud::retail::v2::ImportUserEventsResponse>>
  ImportUserEvents(
      google::cloud::retail::v2::ImportUserEventsRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Starts a user-event rejoin operation with latest product catalog. Events
  /// are not annotated with detailed product information for products that are
  /// missing from the catalog when the user event is ingested. These
  /// events are stored as unjoined events with limited usage on training and
  /// serving. You can use this method to start a join operation on specified
  /// events with the latest version of product catalog. You can also use this
  /// method to correct events joined with the wrong product catalog. A rejoin
  /// operation can take hours or days to complete.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.retail.v2.RejoinUserEventsRequest].
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
  ///     [google.cloud.retail.v2.RejoinUserEventsResponse] proto message.
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
  /// [google.cloud.retail.v2.RejoinUserEventsRequest]: @googleapis_reference_link{google/cloud/retail/v2/user_event_service.proto#L172}
  /// [google.cloud.retail.v2.RejoinUserEventsResponse]: @googleapis_reference_link{google/cloud/retail/v2/user_event_service.proto#L204}
  ///
  // clang-format on
  future<StatusOr<google::cloud::retail::v2::RejoinUserEventsResponse>>
  RejoinUserEvents(
      google::cloud::retail::v2::RejoinUserEventsRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<UserEventServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace retail_v2
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_RETAIL_V2_USER_EVENT_CLIENT_H

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
// source: google/cloud/sql/v1/cloud_sql_ssl_certs.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_SQL_SSL_CERTS_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_SQL_SSL_CERTS_CLIENT_H

#include "google/cloud/sql/v1/sql_ssl_certs_rest_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace sql_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// Service to manage SSL certs for Cloud SQL instances.
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
class SqlSslCertsServiceClient {
 public:
  explicit SqlSslCertsServiceClient(
      std::shared_ptr<SqlSslCertsServiceConnection> connection,
      Options opts = {});
  ~SqlSslCertsServiceClient();

  ///@{
  /// @name Copy and move support
  SqlSslCertsServiceClient(SqlSslCertsServiceClient const&) = default;
  SqlSslCertsServiceClient& operator=(SqlSslCertsServiceClient const&) =
      default;
  SqlSslCertsServiceClient(SqlSslCertsServiceClient&&) = default;
  SqlSslCertsServiceClient& operator=(SqlSslCertsServiceClient&&) = default;
  ///@}

  ///@{
  /// @name Equality
  friend bool operator==(SqlSslCertsServiceClient const& a,
                         SqlSslCertsServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(SqlSslCertsServiceClient const& a,
                         SqlSslCertsServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  // clang-format off
  ///
  /// Deletes the SSL certificate. For First Generation instances, the
  /// certificate remains valid until the instance is restarted.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.sql.v1.SqlSslCertsDeleteRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.sql.v1.Operation])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.sql.v1.Operation]: @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_resources.proto#L717}
  /// [google.cloud.sql.v1.SqlSslCertsDeleteRequest]: @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_ssl_certs.proto#L72}
  ///
  // clang-format on
  StatusOr<google::cloud::sql::v1::Operation> Delete(
      google::cloud::sql::v1::SqlSslCertsDeleteRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Retrieves a particular SSL certificate.  Does not include the private key
  /// (required for usage).  The private key must be saved from the response to
  /// initial creation.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.sql.v1.SqlSslCertsGetRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.sql.v1.SslCert])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.sql.v1.SqlSslCertsGetRequest]: @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_ssl_certs.proto#L83}
  /// [google.cloud.sql.v1.SslCert]: @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_resources.proto#L1175}
  ///
  // clang-format on
  StatusOr<google::cloud::sql::v1::SslCert> Get(
      google::cloud::sql::v1::SqlSslCertsGetRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Creates an SSL certificate and returns it along with the private key and
  /// server certificate authority.  The new certificate will not be usable until
  /// the instance is restarted.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.sql.v1.SqlSslCertsInsertRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.sql.v1.SslCertsInsertResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.sql.v1.SqlSslCertsInsertRequest]: @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_ssl_certs.proto#L94}
  /// [google.cloud.sql.v1.SslCertsInsertResponse]: @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_ssl_certs.proto#L120}
  ///
  // clang-format on
  StatusOr<google::cloud::sql::v1::SslCertsInsertResponse> Insert(
      google::cloud::sql::v1::SqlSslCertsInsertRequest const& request,
      Options opts = {});

  // clang-format off
  ///
  /// Lists all of the current SSL certificates for the instance.
  ///
  /// @param request Unary RPCs, such as the one wrapped by this
  ///     function, receive a single `request` proto message which includes all
  ///     the inputs for the RPC. In this case, the proto message is a
  ///     [google.cloud.sql.v1.SqlSslCertsListRequest].
  ///     Proto messages are converted to C++ classes by Protobuf, using the
  ///     [Protobuf mapping rules].
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return the result of the RPC. The response message type
  ///     ([google.cloud.sql.v1.SslCertsListResponse])
  ///     is mapped to a C++ class using the [Protobuf mapping rules].
  ///     If the request fails, the [`StatusOr`] contains the error details.
  ///
  /// [Protobuf mapping rules]: https://protobuf.dev/reference/cpp/cpp-generated/
  /// [input iterator requirements]: https://en.cppreference.com/w/cpp/named_req/InputIterator
  /// [`std::string`]: https://en.cppreference.com/w/cpp/string/basic_string
  /// [`future`]: @ref google::cloud::future
  /// [`StatusOr`]: @ref google::cloud::StatusOr
  /// [`Status`]: @ref google::cloud::Status
  /// [google.cloud.sql.v1.SqlSslCertsListRequest]: @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_ssl_certs.proto#L104}
  /// [google.cloud.sql.v1.SslCertsListResponse]: @googleapis_reference_link{google/cloud/sql/v1/cloud_sql_ssl_certs.proto#L137}
  ///
  // clang-format on
  StatusOr<google::cloud::sql::v1::SslCertsListResponse> List(
      google::cloud::sql::v1::SqlSslCertsListRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<SqlSslCertsServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace sql_v1
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_SQL_V1_SQL_SSL_CERTS_CLIENT_H

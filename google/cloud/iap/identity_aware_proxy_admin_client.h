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
// source: google/cloud/iap/v1/service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAP_IDENTITY_AWARE_PROXY_ADMIN_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAP_IDENTITY_AWARE_PROXY_ADMIN_CLIENT_H

#include "google/cloud/iap/identity_aware_proxy_admin_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace iap {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// APIs for Identity-Aware Proxy Admin configurations.
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
class IdentityAwareProxyAdminServiceClient {
 public:
  explicit IdentityAwareProxyAdminServiceClient(
      std::shared_ptr<IdentityAwareProxyAdminServiceConnection> connection,
      Options opts = {});
  ~IdentityAwareProxyAdminServiceClient();

  ///@{
  // @name Copy and move support
  IdentityAwareProxyAdminServiceClient(
      IdentityAwareProxyAdminServiceClient const&) = default;
  IdentityAwareProxyAdminServiceClient& operator=(
      IdentityAwareProxyAdminServiceClient const&) = default;
  IdentityAwareProxyAdminServiceClient(IdentityAwareProxyAdminServiceClient&&) =
      default;
  IdentityAwareProxyAdminServiceClient& operator=(
      IdentityAwareProxyAdminServiceClient&&) = default;
  ///@}

  ///@{
  // @name Equality
  friend bool operator==(IdentityAwareProxyAdminServiceClient const& a,
                         IdentityAwareProxyAdminServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(IdentityAwareProxyAdminServiceClient const& a,
                         IdentityAwareProxyAdminServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Sets the access control policy for an Identity-Aware Proxy protected
  /// resource. Replaces any existing policy.
  /// More information about managing access via IAP can be found at:
  /// https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::SetIamPolicyRequest,google/iam/v1/iam_policy.proto#L101}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::Policy,google/iam/v1/policy.proto#L96}
  ///
  /// [google.iam.v1.SetIamPolicyRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L101}
  /// [google.iam.v1.Policy]:
  /// @googleapis_reference_link{google/iam/v1/policy.proto#L96}
  ///
  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      google::iam::v1::SetIamPolicyRequest const& request, Options opts = {});

  ///
  /// Gets the access control policy for an Identity-Aware Proxy protected
  /// resource.
  /// More information about managing access via IAP can be found at:
  /// https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::GetIamPolicyRequest,google/iam/v1/iam_policy.proto#L123}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::Policy,google/iam/v1/policy.proto#L96}
  ///
  /// [google.iam.v1.GetIamPolicyRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L123}
  /// [google.iam.v1.Policy]:
  /// @googleapis_reference_link{google/iam/v1/policy.proto#L96}
  ///
  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      google::iam::v1::GetIamPolicyRequest const& request, Options opts = {});

  ///
  /// Returns permissions that a caller has on the Identity-Aware Proxy
  /// protected resource. More information about managing access via IAP can be
  /// found at:
  /// https://cloud.google.com/iap/docs/managing-access#managing_access_via_the_api
  ///
  /// @param request
  /// @googleapis_link{google::iam::v1::TestIamPermissionsRequest,google/iam/v1/iam_policy.proto#L136}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::iam::v1::TestIamPermissionsResponse,google/iam/v1/iam_policy.proto#L151}
  ///
  /// [google.iam.v1.TestIamPermissionsRequest]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L136}
  /// [google.iam.v1.TestIamPermissionsResponse]:
  /// @googleapis_reference_link{google/iam/v1/iam_policy.proto#L151}
  ///
  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      google::iam::v1::TestIamPermissionsRequest const& request,
      Options opts = {});

  ///
  /// Gets the IAP settings on a particular IAP protected resource.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::iap::v1::GetIapSettingsRequest,google/cloud/iap/v1/service.proto#L340}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::iap::v1::IapSettings,google/cloud/iap/v1/service.proto#L361}
  ///
  /// [google.cloud.iap.v1.GetIapSettingsRequest]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L340}
  /// [google.cloud.iap.v1.IapSettings]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L361}
  ///
  StatusOr<google::cloud::iap::v1::IapSettings> GetIapSettings(
      google::cloud::iap::v1::GetIapSettingsRequest const& request,
      Options opts = {});

  ///
  /// Updates the IAP settings on a particular IAP protected resource. It
  /// replaces all fields unless the `update_mask` is set.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::iap::v1::UpdateIapSettingsRequest,google/cloud/iap/v1/service.proto#L348}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::iap::v1::IapSettings,google/cloud/iap/v1/service.proto#L361}
  ///
  /// [google.cloud.iap.v1.UpdateIapSettingsRequest]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L348}
  /// [google.cloud.iap.v1.IapSettings]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L361}
  ///
  StatusOr<google::cloud::iap::v1::IapSettings> UpdateIapSettings(
      google::cloud::iap::v1::UpdateIapSettingsRequest const& request,
      Options opts = {});

  ///
  /// Lists the existing TunnelDestGroups. To group across all locations, use a
  /// `-` as the location ID. For example:
  /// `/v1/projects/123/iap_tunnel/locations/-/destGroups`
  ///
  /// @param parent  Required. Google Cloud Project ID and location.
  ///  In the following format:
  ///  `projects/{project_number/id}/iap_tunnel/locations/{location}`.
  ///  A `-` can be used for the location to group across all locations.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::iap::v1::TunnelDestGroup,google/cloud/iap/v1/service.proto#L239}
  ///
  /// [google.cloud.iap.v1.ListTunnelDestGroupsRequest]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L141}
  /// [google.cloud.iap.v1.TunnelDestGroup]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L239}
  ///
  StreamRange<google::cloud::iap::v1::TunnelDestGroup> ListTunnelDestGroups(
      std::string const& parent, Options opts = {});

  ///
  /// Lists the existing TunnelDestGroups. To group across all locations, use a
  /// `-` as the location ID. For example:
  /// `/v1/projects/123/iap_tunnel/locations/-/destGroups`
  ///
  /// @param request
  /// @googleapis_link{google::cloud::iap::v1::ListTunnelDestGroupsRequest,google/cloud/iap/v1/service.proto#L141}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::iap::v1::TunnelDestGroup,google/cloud/iap/v1/service.proto#L239}
  ///
  /// [google.cloud.iap.v1.ListTunnelDestGroupsRequest]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L141}
  /// [google.cloud.iap.v1.TunnelDestGroup]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L239}
  ///
  StreamRange<google::cloud::iap::v1::TunnelDestGroup> ListTunnelDestGroups(
      google::cloud::iap::v1::ListTunnelDestGroupsRequest request,
      Options opts = {});

  ///
  /// Creates a new TunnelDestGroup.
  ///
  /// @param parent  Required. Google Cloud Project ID and location.
  ///  In the following format:
  ///  `projects/{project_number/id}/iap_tunnel/locations/{location}`.
  /// @param tunnel_dest_group  Required. The TunnelDestGroup to create.
  /// @param tunnel_dest_group_id  Required. The ID to use for the
  /// TunnelDestGroup, which becomes the final component of
  ///  the resource name.
  ///  This value must be 4-63 characters, and valid characters
  ///  are `[a-z][0-9]-`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::iap::v1::TunnelDestGroup,google/cloud/iap/v1/service.proto#L239}
  ///
  /// [google.cloud.iap.v1.CreateTunnelDestGroupRequest]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L179}
  /// [google.cloud.iap.v1.TunnelDestGroup]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L239}
  ///
  StatusOr<google::cloud::iap::v1::TunnelDestGroup> CreateTunnelDestGroup(
      std::string const& parent,
      google::cloud::iap::v1::TunnelDestGroup const& tunnel_dest_group,
      std::string const& tunnel_dest_group_id, Options opts = {});

  ///
  /// Creates a new TunnelDestGroup.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::iap::v1::CreateTunnelDestGroupRequest,google/cloud/iap/v1/service.proto#L179}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::iap::v1::TunnelDestGroup,google/cloud/iap/v1/service.proto#L239}
  ///
  /// [google.cloud.iap.v1.CreateTunnelDestGroupRequest]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L179}
  /// [google.cloud.iap.v1.TunnelDestGroup]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L239}
  ///
  StatusOr<google::cloud::iap::v1::TunnelDestGroup> CreateTunnelDestGroup(
      google::cloud::iap::v1::CreateTunnelDestGroupRequest const& request,
      Options opts = {});

  ///
  /// Retrieves an existing TunnelDestGroup.
  ///
  /// @param name  Required. Name of the TunnelDestGroup to be fetched.
  ///  In the following format:
  ///  `projects/{project_number/id}/iap_tunnel/locations/{location}/destGroups/{dest_group}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::iap::v1::TunnelDestGroup,google/cloud/iap/v1/service.proto#L239}
  ///
  /// [google.cloud.iap.v1.GetTunnelDestGroupRequest]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L202}
  /// [google.cloud.iap.v1.TunnelDestGroup]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L239}
  ///
  StatusOr<google::cloud::iap::v1::TunnelDestGroup> GetTunnelDestGroup(
      std::string const& name, Options opts = {});

  ///
  /// Retrieves an existing TunnelDestGroup.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::iap::v1::GetTunnelDestGroupRequest,google/cloud/iap/v1/service.proto#L202}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::iap::v1::TunnelDestGroup,google/cloud/iap/v1/service.proto#L239}
  ///
  /// [google.cloud.iap.v1.GetTunnelDestGroupRequest]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L202}
  /// [google.cloud.iap.v1.TunnelDestGroup]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L239}
  ///
  StatusOr<google::cloud::iap::v1::TunnelDestGroup> GetTunnelDestGroup(
      google::cloud::iap::v1::GetTunnelDestGroupRequest const& request,
      Options opts = {});

  ///
  /// Deletes a TunnelDestGroup.
  ///
  /// @param name  Required. Name of the TunnelDestGroup to delete.
  ///  In the following format:
  ///  `projects/{project_number/id}/iap_tunnel/locations/{location}/destGroups/{dest_group}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.iap.v1.DeleteTunnelDestGroupRequest]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L215}
  ///
  Status DeleteTunnelDestGroup(std::string const& name, Options opts = {});

  ///
  /// Deletes a TunnelDestGroup.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::iap::v1::DeleteTunnelDestGroupRequest,google/cloud/iap/v1/service.proto#L215}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.iap.v1.DeleteTunnelDestGroupRequest]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L215}
  ///
  Status DeleteTunnelDestGroup(
      google::cloud::iap::v1::DeleteTunnelDestGroupRequest const& request,
      Options opts = {});

  ///
  /// Updates a TunnelDestGroup.
  ///
  /// @param tunnel_dest_group  Required. The new values for the
  /// TunnelDestGroup.
  /// @param update_mask  A field mask that specifies which IAP settings to
  /// update.
  ///  If omitted, then all of the settings are updated. See
  ///  https://developers.google.com/protocol-buffers/docs/reference/google.protobuf#fieldmask
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::iap::v1::TunnelDestGroup,google/cloud/iap/v1/service.proto#L239}
  ///
  /// [google.cloud.iap.v1.UpdateTunnelDestGroupRequest]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L228}
  /// [google.cloud.iap.v1.TunnelDestGroup]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L239}
  ///
  StatusOr<google::cloud::iap::v1::TunnelDestGroup> UpdateTunnelDestGroup(
      google::cloud::iap::v1::TunnelDestGroup const& tunnel_dest_group,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates a TunnelDestGroup.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::iap::v1::UpdateTunnelDestGroupRequest,google/cloud/iap/v1/service.proto#L228}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::iap::v1::TunnelDestGroup,google/cloud/iap/v1/service.proto#L239}
  ///
  /// [google.cloud.iap.v1.UpdateTunnelDestGroupRequest]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L228}
  /// [google.cloud.iap.v1.TunnelDestGroup]:
  /// @googleapis_reference_link{google/cloud/iap/v1/service.proto#L239}
  ///
  StatusOr<google::cloud::iap::v1::TunnelDestGroup> UpdateTunnelDestGroup(
      google::cloud::iap::v1::UpdateTunnelDestGroupRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<IdentityAwareProxyAdminServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace iap
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_IAP_IDENTITY_AWARE_PROXY_ADMIN_CLIENT_H

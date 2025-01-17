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
// source: google/cloud/compute/storage_pools/v1/storage_pools.proto

#include "google/cloud/compute/storage_pools/v1/internal/storage_pools_rest_logging_decorator.h"
#include "google/cloud/internal/log_wrapper.h"
#include "google/cloud/status_or.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace compute_storage_pools_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

StoragePoolsRestLogging::StoragePoolsRestLogging(
    std::shared_ptr<StoragePoolsRestStub> child, TracingOptions tracing_options,
    std::set<std::string> components)
    : child_(std::move(child)),
      tracing_options_(std::move(tracing_options)),
      components_(std::move(components)) {}

StatusOr<google::cloud::cpp::compute::v1::StoragePoolAggregatedList>
StoragePoolsRestLogging::AggregatedListStoragePools(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::storage_pools::v1::
        AggregatedListStoragePoolsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::storage_pools::v1::
                 AggregatedListStoragePoolsRequest const& request) {
        return child_->AggregatedListStoragePools(rest_context, options,
                                                  request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
StoragePoolsRestLogging::AsyncDeleteStoragePool(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::storage_pools::v1::
        DeleteStoragePoolRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::storage_pools::v1::
                 DeleteStoragePoolRequest const& request) {
        return child_->AsyncDeleteStoragePool(cq, std::move(rest_context),
                                              std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::StoragePool>
StoragePoolsRestLogging::GetStoragePool(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::storage_pools::v1::GetStoragePoolRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::storage_pools::v1::
                 GetStoragePoolRequest const& request) {
        return child_->GetStoragePool(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
StoragePoolsRestLogging::GetIamPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::storage_pools::v1::GetIamPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::storage_pools::v1::
                 GetIamPolicyRequest const& request) {
        return child_->GetIamPolicy(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
StoragePoolsRestLogging::AsyncInsertStoragePool(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::storage_pools::v1::
        InsertStoragePoolRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::storage_pools::v1::
                 InsertStoragePoolRequest const& request) {
        return child_->AsyncInsertStoragePool(cq, std::move(rest_context),
                                              std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::StoragePoolList>
StoragePoolsRestLogging::ListStoragePools(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::storage_pools::v1::
        ListStoragePoolsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::storage_pools::v1::
                 ListStoragePoolsRequest const& request) {
        return child_->ListStoragePools(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::StoragePoolListDisks>
StoragePoolsRestLogging::ListDisks(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::storage_pools::v1::ListDisksRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::storage_pools::v1::
                 ListDisksRequest const& request) {
        return child_->ListDisks(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::Policy>
StoragePoolsRestLogging::SetIamPolicy(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::storage_pools::v1::SetIamPolicyRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::storage_pools::v1::
                 SetIamPolicyRequest const& request) {
        return child_->SetIamPolicy(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

StatusOr<google::cloud::cpp::compute::v1::TestPermissionsResponse>
StoragePoolsRestLogging::TestIamPermissions(
    rest_internal::RestContext& rest_context, Options const& options,
    google::cloud::cpp::compute::storage_pools::v1::
        TestIamPermissionsRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](rest_internal::RestContext& rest_context, Options const& options,
             google::cloud::cpp::compute::storage_pools::v1::
                 TestIamPermissionsRequest const& request) {
        return child_->TestIamPermissions(rest_context, options, request);
      },
      rest_context, options, request, __func__, tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
StoragePoolsRestLogging::AsyncUpdateStoragePool(
    CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::storage_pools::v1::
        UpdateStoragePoolRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::storage_pools::v1::
                 UpdateStoragePoolRequest const& request) {
        return child_->AsyncUpdateStoragePool(cq, std::move(rest_context),
                                              std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

future<StatusOr<google::cloud::cpp::compute::v1::Operation>>
StoragePoolsRestLogging::AsyncGetOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::zone_operations::v1::GetOperationRequest const&
        request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::zone_operations::v1::
                 GetOperationRequest const& request) {
        return child_->AsyncGetOperation(cq, std::move(rest_context),
                                         std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

future<Status> StoragePoolsRestLogging::AsyncCancelOperation(
    google::cloud::CompletionQueue& cq,
    std::unique_ptr<rest_internal::RestContext> rest_context,
    google::cloud::internal::ImmutableOptions options,
    google::cloud::cpp::compute::zone_operations::v1::
        DeleteOperationRequest const& request) {
  return google::cloud::internal::LogWrapper(
      [this](CompletionQueue& cq,
             std::unique_ptr<rest_internal::RestContext> rest_context,
             google::cloud::internal::ImmutableOptions options,
             google::cloud::cpp::compute::zone_operations::v1::
                 DeleteOperationRequest const& request) {
        return child_->AsyncCancelOperation(cq, std::move(rest_context),
                                            std::move(options), request);
      },
      cq, std::move(rest_context), std::move(options), request, __func__,
      tracing_options_);
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace compute_storage_pools_v1_internal
}  // namespace cloud
}  // namespace google

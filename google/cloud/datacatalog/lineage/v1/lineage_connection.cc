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
// source: google/cloud/datacatalog/lineage/v1/lineage.proto

#include "google/cloud/datacatalog/lineage/v1/lineage_connection.h"
#include "google/cloud/datacatalog/lineage/v1/internal/lineage_connection_impl.h"
#include "google/cloud/datacatalog/lineage/v1/internal/lineage_option_defaults.h"
#include "google/cloud/datacatalog/lineage/v1/internal/lineage_stub_factory.h"
#include "google/cloud/datacatalog/lineage/v1/internal/lineage_tracing_connection.h"
#include "google/cloud/datacatalog/lineage/v1/lineage_options.h"
#include "google/cloud/background_threads.h"
#include "google/cloud/common_options.h"
#include "google/cloud/credentials.h"
#include "google/cloud/grpc_options.h"
#include "google/cloud/internal/pagination_range.h"
#include <memory>

namespace google {
namespace cloud {
namespace datacatalog_lineage_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

LineageConnection::~LineageConnection() = default;

StatusOr<
    google::cloud::datacatalog::lineage::v1::ProcessOpenLineageRunEventResponse>
LineageConnection::ProcessOpenLineageRunEvent(
    google::cloud::datacatalog::lineage::v1::
        ProcessOpenLineageRunEventRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::datacatalog::lineage::v1::Process>
LineageConnection::CreateProcess(
    google::cloud::datacatalog::lineage::v1::CreateProcessRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::datacatalog::lineage::v1::Process>
LineageConnection::UpdateProcess(
    google::cloud::datacatalog::lineage::v1::UpdateProcessRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::datacatalog::lineage::v1::Process>
LineageConnection::GetProcess(
    google::cloud::datacatalog::lineage::v1::GetProcessRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::datacatalog::lineage::v1::Process>
LineageConnection::ListProcesses(
    google::cloud::datacatalog::lineage::v1::
        ListProcessesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::datacatalog::lineage::v1::Process>>();
}

future<StatusOr<google::cloud::datacatalog::lineage::v1::OperationMetadata>>
LineageConnection::DeleteProcess(
    google::cloud::datacatalog::lineage::v1::DeleteProcessRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::datacatalog::lineage::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::datacatalog::lineage::v1::Run>
LineageConnection::CreateRun(
    google::cloud::datacatalog::lineage::v1::CreateRunRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::datacatalog::lineage::v1::Run>
LineageConnection::UpdateRun(
    google::cloud::datacatalog::lineage::v1::UpdateRunRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::datacatalog::lineage::v1::Run>
LineageConnection::GetRun(
    google::cloud::datacatalog::lineage::v1::GetRunRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::datacatalog::lineage::v1::Run>
LineageConnection::ListRuns(
    google::cloud::datacatalog::lineage::v1::
        ListRunsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::datacatalog::lineage::v1::Run>>();
}

future<StatusOr<google::cloud::datacatalog::lineage::v1::OperationMetadata>>
LineageConnection::DeleteRun(
    google::cloud::datacatalog::lineage::v1::DeleteRunRequest const&) {
  return google::cloud::make_ready_future<
      StatusOr<google::cloud::datacatalog::lineage::v1::OperationMetadata>>(
      Status(StatusCode::kUnimplemented, "not implemented"));
}

StatusOr<google::cloud::datacatalog::lineage::v1::LineageEvent>
LineageConnection::CreateLineageEvent(
    google::cloud::datacatalog::lineage::v1::CreateLineageEventRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StatusOr<google::cloud::datacatalog::lineage::v1::LineageEvent>
LineageConnection::GetLineageEvent(
    google::cloud::datacatalog::lineage::v1::GetLineageEventRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::datacatalog::lineage::v1::LineageEvent>
LineageConnection::ListLineageEvents(
    google::cloud::datacatalog::lineage::v1::
        ListLineageEventsRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::datacatalog::lineage::v1::LineageEvent>>();
}

Status LineageConnection::DeleteLineageEvent(
    google::cloud::datacatalog::lineage::v1::DeleteLineageEventRequest const&) {
  return Status(StatusCode::kUnimplemented, "not implemented");
}

StreamRange<google::cloud::datacatalog::lineage::v1::Link>
LineageConnection::SearchLinks(
    google::cloud::datacatalog::lineage::v1::
        SearchLinksRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::datacatalog::lineage::v1::Link>>();
}

StreamRange<google::cloud::datacatalog::lineage::v1::ProcessLinks>
LineageConnection::BatchSearchLinkProcesses(
    google::cloud::datacatalog::lineage::v1::
        BatchSearchLinkProcessesRequest) {  // NOLINT(performance-unnecessary-value-param)
  return google::cloud::internal::MakeUnimplementedPaginationRange<
      StreamRange<google::cloud::datacatalog::lineage::v1::ProcessLinks>>();
}

std::shared_ptr<LineageConnection> MakeLineageConnection(Options options) {
  internal::CheckExpectedOptions<CommonOptionList, GrpcOptionList,
                                 UnifiedCredentialsOptionList,
                                 LineagePolicyOptionList>(options, __func__);
  options = datacatalog_lineage_v1_internal::LineageDefaultOptions(
      std::move(options));
  auto background = internal::MakeBackgroundThreadsFactory(options)();
  auto stub = datacatalog_lineage_v1_internal::CreateDefaultLineageStub(
      background->cq(), options);
  return datacatalog_lineage_v1_internal::MakeLineageTracingConnection(
      std::make_shared<datacatalog_lineage_v1_internal::LineageConnectionImpl>(
          std::move(background), std::move(stub), std::move(options)));
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace datacatalog_lineage_v1
}  // namespace cloud
}  // namespace google

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
// source: google/cloud/aiplatform/v1/notebook_service.proto

#include "google/cloud/aiplatform/v1/notebook_connection_idempotency_policy.h"
#include <memory>

namespace google {
namespace cloud {
namespace aiplatform_v1 {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

using ::google::cloud::Idempotency;

NotebookServiceConnectionIdempotencyPolicy::
    ~NotebookServiceConnectionIdempotencyPolicy() = default;

std::unique_ptr<NotebookServiceConnectionIdempotencyPolicy>
NotebookServiceConnectionIdempotencyPolicy::clone() const {
  return std::make_unique<NotebookServiceConnectionIdempotencyPolicy>(*this);
}

Idempotency
NotebookServiceConnectionIdempotencyPolicy::CreateNotebookRuntimeTemplate(
    google::cloud::aiplatform::v1::
        CreateNotebookRuntimeTemplateRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency
NotebookServiceConnectionIdempotencyPolicy::GetNotebookRuntimeTemplate(
    google::cloud::aiplatform::v1::GetNotebookRuntimeTemplateRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency
NotebookServiceConnectionIdempotencyPolicy::ListNotebookRuntimeTemplates(
    google::cloud::aiplatform::v1::
        ListNotebookRuntimeTemplatesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency
NotebookServiceConnectionIdempotencyPolicy::DeleteNotebookRuntimeTemplate(
    google::cloud::aiplatform::v1::
        DeleteNotebookRuntimeTemplateRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::AssignNotebookRuntime(
    google::cloud::aiplatform::v1::AssignNotebookRuntimeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::GetNotebookRuntime(
    google::cloud::aiplatform::v1::GetNotebookRuntimeRequest const&) {
  return Idempotency::kIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::ListNotebookRuntimes(
    google::cloud::aiplatform::v1::ListNotebookRuntimesRequest) {  // NOLINT
  return Idempotency::kIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::DeleteNotebookRuntime(
    google::cloud::aiplatform::v1::DeleteNotebookRuntimeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::UpgradeNotebookRuntime(
    google::cloud::aiplatform::v1::UpgradeNotebookRuntimeRequest const&) {
  return Idempotency::kNonIdempotent;
}

Idempotency NotebookServiceConnectionIdempotencyPolicy::StartNotebookRuntime(
    google::cloud::aiplatform::v1::StartNotebookRuntimeRequest const&) {
  return Idempotency::kNonIdempotent;
}

std::unique_ptr<NotebookServiceConnectionIdempotencyPolicy>
MakeDefaultNotebookServiceConnectionIdempotencyPolicy() {
  return std::make_unique<NotebookServiceConnectionIdempotencyPolicy>();
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1
}  // namespace cloud
}  // namespace google

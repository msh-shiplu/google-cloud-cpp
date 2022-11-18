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
// source: google/cloud/billing/budgets/v1/budget_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_BUDGET_CLIENT_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_BUDGET_CLIENT_H

#include "google/cloud/billing/budget_connection.h"
#include "google/cloud/future.h"
#include "google/cloud/options.h"
#include "google/cloud/polling_policy.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace billing {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

///
/// BudgetService stores Cloud Billing budgets, which define a
/// budget plan and rules to execute as we track spend against that plan.
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
class BudgetServiceClient {
 public:
  explicit BudgetServiceClient(
      std::shared_ptr<BudgetServiceConnection> connection, Options opts = {});
  ~BudgetServiceClient();

  ///@{
  // @name Copy and move support
  BudgetServiceClient(BudgetServiceClient const&) = default;
  BudgetServiceClient& operator=(BudgetServiceClient const&) = default;
  BudgetServiceClient(BudgetServiceClient&&) = default;
  BudgetServiceClient& operator=(BudgetServiceClient&&) = default;
  ///@}

  ///@{
  // @name Equality
  friend bool operator==(BudgetServiceClient const& a,
                         BudgetServiceClient const& b) {
    return a.connection_ == b.connection_;
  }
  friend bool operator!=(BudgetServiceClient const& a,
                         BudgetServiceClient const& b) {
    return !(a == b);
  }
  ///@}

  ///
  /// Creates a new budget. See
  /// [Quotas and limits](https://cloud.google.com/billing/quotas)
  /// for more information on the limits of the number of budgets you can
  /// create.
  ///
  /// @param parent  Required. The name of the billing account to create the
  /// budget in. Values
  ///  are of the form `billingAccounts/{billingAccountId}`.
  /// @param budget  Required. Budget to create.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::billing::budgets::v1::Budget,google/cloud/billing/budgets/v1/budget_model.proto#L35}
  ///
  /// [google.cloud.billing.budgets.v1.CreateBudgetRequest]:
  /// @googleapis_reference_link{google/cloud/billing/budgets/v1/budget_service.proto#L100}
  /// [google.cloud.billing.budgets.v1.Budget]:
  /// @googleapis_reference_link{google/cloud/billing/budgets/v1/budget_model.proto#L35}
  ///
  StatusOr<google::cloud::billing::budgets::v1::Budget> CreateBudget(
      std::string const& parent,
      google::cloud::billing::budgets::v1::Budget const& budget,
      Options opts = {});

  ///
  /// Creates a new budget. See
  /// [Quotas and limits](https://cloud.google.com/billing/quotas)
  /// for more information on the limits of the number of budgets you can
  /// create.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::billing::budgets::v1::CreateBudgetRequest,google/cloud/billing/budgets/v1/budget_service.proto#L100}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::billing::budgets::v1::Budget,google/cloud/billing/budgets/v1/budget_model.proto#L35}
  ///
  /// [google.cloud.billing.budgets.v1.CreateBudgetRequest]:
  /// @googleapis_reference_link{google/cloud/billing/budgets/v1/budget_service.proto#L100}
  /// [google.cloud.billing.budgets.v1.Budget]:
  /// @googleapis_reference_link{google/cloud/billing/budgets/v1/budget_model.proto#L35}
  ///
  StatusOr<google::cloud::billing::budgets::v1::Budget> CreateBudget(
      google::cloud::billing::budgets::v1::CreateBudgetRequest const& request,
      Options opts = {});

  ///
  /// Updates a budget and returns the updated budget.
  ///
  /// WARNING: There are some fields exposed on the Google Cloud Console that
  /// aren't available on this API. Budget fields that are not exposed in
  /// this API will not be changed by this method.
  ///
  /// @param budget  Required. The updated budget object.
  ///  The budget to update is specified by the budget name in the budget.
  /// @param update_mask  Optional. Indicates which fields in the provided
  /// budget to update.
  ///  Read-only fields (such as `name`) cannot be changed. If this is not
  ///  provided, then only fields with non-default values from the request are
  ///  updated. See
  ///  https://developers.google.com/protocol-buffers/docs/proto3#default for
  ///  more details about default values.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::billing::budgets::v1::Budget,google/cloud/billing/budgets/v1/budget_model.proto#L35}
  ///
  /// [google.cloud.billing.budgets.v1.UpdateBudgetRequest]:
  /// @googleapis_reference_link{google/cloud/billing/budgets/v1/budget_service.proto#L115}
  /// [google.cloud.billing.budgets.v1.Budget]:
  /// @googleapis_reference_link{google/cloud/billing/budgets/v1/budget_model.proto#L35}
  ///
  StatusOr<google::cloud::billing::budgets::v1::Budget> UpdateBudget(
      google::cloud::billing::budgets::v1::Budget const& budget,
      google::protobuf::FieldMask const& update_mask, Options opts = {});

  ///
  /// Updates a budget and returns the updated budget.
  ///
  /// WARNING: There are some fields exposed on the Google Cloud Console that
  /// aren't available on this API. Budget fields that are not exposed in
  /// this API will not be changed by this method.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::billing::budgets::v1::UpdateBudgetRequest,google/cloud/billing/budgets/v1/budget_service.proto#L115}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::billing::budgets::v1::Budget,google/cloud/billing/budgets/v1/budget_model.proto#L35}
  ///
  /// [google.cloud.billing.budgets.v1.UpdateBudgetRequest]:
  /// @googleapis_reference_link{google/cloud/billing/budgets/v1/budget_service.proto#L115}
  /// [google.cloud.billing.budgets.v1.Budget]:
  /// @googleapis_reference_link{google/cloud/billing/budgets/v1/budget_model.proto#L35}
  ///
  StatusOr<google::cloud::billing::budgets::v1::Budget> UpdateBudget(
      google::cloud::billing::budgets::v1::UpdateBudgetRequest const& request,
      Options opts = {});

  ///
  /// Returns a budget.
  ///
  /// WARNING: There are some fields exposed on the Google Cloud Console that
  /// aren't available on this API. When reading from the API, you will not
  /// see these fields in the return value, though they may have been set
  /// in the Cloud Console.
  ///
  /// @param name  Required. Name of budget to get. Values are of the form
  ///  `billingAccounts/{billingAccountId}/budgets/{budgetId}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::billing::budgets::v1::Budget,google/cloud/billing/budgets/v1/budget_model.proto#L35}
  ///
  /// [google.cloud.billing.budgets.v1.GetBudgetRequest]:
  /// @googleapis_reference_link{google/cloud/billing/budgets/v1/budget_service.proto#L131}
  /// [google.cloud.billing.budgets.v1.Budget]:
  /// @googleapis_reference_link{google/cloud/billing/budgets/v1/budget_model.proto#L35}
  ///
  StatusOr<google::cloud::billing::budgets::v1::Budget> GetBudget(
      std::string const& name, Options opts = {});

  ///
  /// Returns a budget.
  ///
  /// WARNING: There are some fields exposed on the Google Cloud Console that
  /// aren't available on this API. When reading from the API, you will not
  /// see these fields in the return value, though they may have been set
  /// in the Cloud Console.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::billing::budgets::v1::GetBudgetRequest,google/cloud/billing/budgets/v1/budget_service.proto#L131}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::billing::budgets::v1::Budget,google/cloud/billing/budgets/v1/budget_model.proto#L35}
  ///
  /// [google.cloud.billing.budgets.v1.GetBudgetRequest]:
  /// @googleapis_reference_link{google/cloud/billing/budgets/v1/budget_service.proto#L131}
  /// [google.cloud.billing.budgets.v1.Budget]:
  /// @googleapis_reference_link{google/cloud/billing/budgets/v1/budget_model.proto#L35}
  ///
  StatusOr<google::cloud::billing::budgets::v1::Budget> GetBudget(
      google::cloud::billing::budgets::v1::GetBudgetRequest const& request,
      Options opts = {});

  ///
  /// Returns a list of budgets for a billing account.
  ///
  /// WARNING: There are some fields exposed on the Google Cloud Console that
  /// aren't available on this API. When reading from the API, you will not
  /// see these fields in the return value, though they may have been set
  /// in the Cloud Console.
  ///
  /// @param parent  Required. Name of billing account to list budgets under.
  /// Values
  ///  are of the form `billingAccounts/{billingAccountId}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::billing::budgets::v1::Budget,google/cloud/billing/budgets/v1/budget_model.proto#L35}
  ///
  /// [google.cloud.billing.budgets.v1.ListBudgetsRequest]:
  /// @googleapis_reference_link{google/cloud/billing/budgets/v1/budget_service.proto#L143}
  /// [google.cloud.billing.budgets.v1.Budget]:
  /// @googleapis_reference_link{google/cloud/billing/budgets/v1/budget_model.proto#L35}
  ///
  StreamRange<google::cloud::billing::budgets::v1::Budget> ListBudgets(
      std::string const& parent, Options opts = {});

  ///
  /// Returns a list of budgets for a billing account.
  ///
  /// WARNING: There are some fields exposed on the Google Cloud Console that
  /// aren't available on this API. When reading from the API, you will not
  /// see these fields in the return value, though they may have been set
  /// in the Cloud Console.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::billing::budgets::v1::ListBudgetsRequest,google/cloud/billing/budgets/v1/budget_service.proto#L143}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  /// @return
  /// @googleapis_link{google::cloud::billing::budgets::v1::Budget,google/cloud/billing/budgets/v1/budget_model.proto#L35}
  ///
  /// [google.cloud.billing.budgets.v1.ListBudgetsRequest]:
  /// @googleapis_reference_link{google/cloud/billing/budgets/v1/budget_service.proto#L143}
  /// [google.cloud.billing.budgets.v1.Budget]:
  /// @googleapis_reference_link{google/cloud/billing/budgets/v1/budget_model.proto#L35}
  ///
  StreamRange<google::cloud::billing::budgets::v1::Budget> ListBudgets(
      google::cloud::billing::budgets::v1::ListBudgetsRequest request,
      Options opts = {});

  ///
  /// Deletes a budget. Returns successfully if already deleted.
  ///
  /// @param name  Required. Name of the budget to delete. Values are of the
  /// form
  ///  `billingAccounts/{billingAccountId}/budgets/{budgetId}`.
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.billing.budgets.v1.DeleteBudgetRequest]:
  /// @googleapis_reference_link{google/cloud/billing/budgets/v1/budget_service.proto#L174}
  ///
  Status DeleteBudget(std::string const& name, Options opts = {});

  ///
  /// Deletes a budget. Returns successfully if already deleted.
  ///
  /// @param request
  /// @googleapis_link{google::cloud::billing::budgets::v1::DeleteBudgetRequest,google/cloud/billing/budgets/v1/budget_service.proto#L174}
  /// @param opts Optional. Override the class-level options, such as retry and
  ///     backoff policies.
  ///
  /// [google.cloud.billing.budgets.v1.DeleteBudgetRequest]:
  /// @googleapis_reference_link{google/cloud/billing/budgets/v1/budget_service.proto#L174}
  ///
  Status DeleteBudget(
      google::cloud::billing::budgets::v1::DeleteBudgetRequest const& request,
      Options opts = {});

 private:
  std::shared_ptr<BudgetServiceConnection> connection_;
  Options options_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace billing
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_BILLING_BUDGET_CLIENT_H

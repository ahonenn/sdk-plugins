/*
 * (C) 2001-2012 Marmalade. All Rights Reserved.
 *
 * This document is protected by copyright, and contains information
 * proprietary to Marmalade.
 *
 * This file consists of source code released by Marmalade under
 * the terms of the accompanying End User License Agreement (EULA).
 * Please do not use this program/source code before you have read the
 * EULA and have agreed to be bound by its terms.
 */
/*
 * WARNING: this is an autogenerated file and will be overwritten by
 * the extension interface script.
 */
#ifndef S3E_EXT_MATSDK_H
#define S3E_EXT_MATSDK_H

#include <s3eTypes.h>

#define S3E_MATSDK_STRING_MAX 255

struct s3eMATTracker;

typedef struct MATSDKEventItem
{
	char		name[S3E_MATSDK_STRING_MAX];
	char 		unitPrice[S3E_MATSDK_STRING_MAX];;
	int			quantity;
	char		revenue[S3E_MATSDK_STRING_MAX];;
	char		attribute1[S3E_MATSDK_STRING_MAX];
	char		attribute2[S3E_MATSDK_STRING_MAX];
	char		attribute3[S3E_MATSDK_STRING_MAX];
	char		attribute4[S3E_MATSDK_STRING_MAX];
	char		attribute5[S3E_MATSDK_STRING_MAX];
} MATSDKEventItem;

typedef struct MATArray {
	void *m_items; // Items in array
	unsigned int m_count; // number of items
} MATArray;
// \cond HIDDEN_DEFINES
S3E_BEGIN_C_DECL
// \endcond

/**
 * Returns S3E_TRUE if the MATSDK extension is available.
 */
s3eBool s3eMATSDKAvailable();

void MATStartMobileAppTracker(const char* adId, const char* convKey);

void MATTrackInstall();

void MATTrackUpdate();

void MATTrackInstallWithReferenceId(const char* refId);

void MATTrackActionForEventIdOrName(const char* eventIdOrName, bool isId, const char* refId);

void MATTrackActionForEventIdOrNameItems(const char* eventIdOrName, bool isId, const MATArray* items, const char* refId, const char* revenueAmount, const char* currencyCode, uint8 transactionState, const char* receipt, const char* receiptSignature);

void MATTrackAction(const char* eventIdOrName, bool isId, const char* revenue, const char* currency);

void MATSetPackageName(const char* packageName);

void MATSetCurrencyCode(const char* currencyCode);

void MATSetOpenUDID(const char* openUDID);

void MATSetUIID(const char* uiid);

void MATSetUserId(const char* userId);

void MATSetRevenue(const char* revenue);

void MATSetSiteId(const char* siteId);

void MATSetTRUSTeId(const char* tpid);

void MATSetAppAdTracking(bool enable);

void MATSetDelegate(bool enable);

void MATSetJailbroken(bool isJailbroken);

void MATSetShouldAutoDetectJailbroken(bool shouldAutoDetect);

void MATSetMACAddress(const char* mac);

void MATSetODIN1(const char* odin1);

void MATSetUseCookieTracking(bool useCookieTracking);

void MATSetAge(int age);

void MATSetGender(int gender);

void MATSetLocation(const char* latitude, const char* longitude, const char* altitude);

void MATStartAppToAppTracking(const char* targetAppId, const char* advertiserId, const char* offerId, const char* publisherId, bool shouldRedirect);

void MATSetRedirectUrl(const char* redirectUrl);

void MATSetAppleAdvertisingIdentifier(const char* advertiserId);

void MATSetAppleVendorIdentifier(const char* vendorId);

void MATSetShouldAutoGenerateAppleVendorIdentifier(bool shouldAutoGenerate);

void MATSetShouldAutoGenerateAppleAdvertisingIdentifier(bool shouldAutoGenerate);

void MATSDKParameters();

void MATSetDebugMode(bool shouldDebug);

void MATSetAllowDuplicates(bool allowDuplicates);

S3E_END_C_DECL


#endif /* !S3E_EXT_MATSDK_H */

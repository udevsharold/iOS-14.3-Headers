/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FCPurchaseMetadataFetcher.h>

@protocol FCPurchaseMetadataFetcher
@required
-(id)fetchPurchaseMetadataForPurchaseID:(id)arg1 restorePurchase:(BOOL)arg2;

@end


@protocol OS_dispatch_queue;
@class NSNumber, FCPurchaseLookupResult, NSObject;

@interface FCPurchaseMetadataFetcher : NSObject <FCPurchaseMetadataFetcher> {

	NSNumber* _bundleID;
	NSNumber* _externalVersionID;
	FCPurchaseLookupResult* _lookupResult;
	NSObject*<OS_dispatch_queue> _accessQueue;

}

@property (nonatomic,copy) NSNumber * bundleID;                                       //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy) NSNumber * externalVersionID;                              //@synthesize externalVersionID=_externalVersionID - In the implementation block
@property (nonatomic,retain) FCPurchaseLookupResult * lookupResult;                   //@synthesize lookupResult=_lookupResult - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue;              //@synthesize accessQueue=_accessQueue - In the implementation block
-(void)setBundleID:(NSNumber *)arg1 ;
-(id)init;
-(id)promiseBundleIDWithAppAdamID:(id)arg1 ;
-(id)createAMSLookupWithProfile:(id)arg1 ;
-(NSNumber *)bundleID;
-(NSNumber *)externalVersionID;
-(id)promiseStoreExternalVersionWithAppAdamID:(id)arg1 ;
-(void)setLookupResult:(FCPurchaseLookupResult *)arg1 ;
-(id)checkIfOfferUsedAlreadyWithAppAdamID:(id)arg1 ;
-(id)fetchPurchaseMetadataForPurchaseID:(id)arg1 restorePurchase:(BOOL)arg2 ;
-(id)promiseStoreExternalVersionWithLookupResult:(id)arg1 ;
-(void)setExternalVersionID:(NSNumber *)arg1 ;
-(id)promisePurchaseLookupWithAppAdamID:(id)arg1 ;
-(FCPurchaseLookupResult *)lookupResult;
-(id)promiseProductLookupWithLookupResult:(id)arg1 externalVersionID:(id)arg2 restorePurchase:(BOOL)arg3 ;
-(NSObject*<OS_dispatch_queue>)accessQueue;
@end

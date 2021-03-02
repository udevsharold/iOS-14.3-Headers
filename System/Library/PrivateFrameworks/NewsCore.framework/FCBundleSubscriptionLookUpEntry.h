/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <NewsCore/NewsCore-Structs.h>
@class NSString, NSDate, NSArray;

@interface FCBundleSubscriptionLookUpEntry : NSObject {

	BOOL _hasShownRenewalNotice;
	BOOL _inTrialPeriod;
	BOOL _isPurchaser;
	BOOL _isAmplifyUser;
	NSString* _identifier;
	NSString* _purchaseID;
	NSDate* _dateOfExpiration;
	unsigned long long _purchaseValidationState;
	NSString* _servicesBundlePurchaseID;
	NSArray* _bundleChannelIDs;
	NSString* _bundleChannelIDsVersion;

}

@property (assign,nonatomic) unsigned long long purchaseValidationState;              //@synthesize purchaseValidationState=_purchaseValidationState - In the implementation block
@property (nonatomic,copy) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSArray * bundleChannelIDs;                                //@synthesize bundleChannelIDs=_bundleChannelIDs - In the implementation block
@property (nonatomic,copy) NSString * bundleChannelIDsVersion;                        //@synthesize bundleChannelIDsVersion=_bundleChannelIDsVersion - In the implementation block
@property (nonatomic,copy) NSString * purchaseID;                                     //@synthesize purchaseID=_purchaseID - In the implementation block
@property (nonatomic,copy) NSString * servicesBundlePurchaseID;                       //@synthesize servicesBundlePurchaseID=_servicesBundlePurchaseID - In the implementation block
@property (nonatomic,copy) NSDate * dateOfExpiration;                                 //@synthesize dateOfExpiration=_dateOfExpiration - In the implementation block
@property (assign,nonatomic) BOOL hasShownRenewalNotice;                              //@synthesize hasShownRenewalNotice=_hasShownRenewalNotice - In the implementation block
@property (assign,nonatomic) BOOL inTrialPeriod;                                      //@synthesize inTrialPeriod=_inTrialPeriod - In the implementation block
@property (assign,nonatomic) BOOL isPurchaser;                                        //@synthesize isPurchaser=_isPurchaser - In the implementation block
@property (assign,nonatomic) BOOL isAmplifyUser;                                      //@synthesize isAmplifyUser=_isAmplifyUser - In the implementation block
-(id)initWithEntryID:(id)arg1 bundleChannelIDs:(id)arg2 bundleChannelIDsVersion:(id)arg3 purchaseID:(id)arg4 purchaseValidationState:(unsigned long long)arg5 dateOfExpiration:(id)arg6 hasShownRenewalNotice:(BOOL)arg7 inTrialPeriod:(BOOL)arg8 isPurchaser:(BOOL)arg9 servicesBundlePurchaseID:(id)arg10 isAmplifyUser:(BOOL)arg11 ;
-(BOOL)isPurchaser;
-(void)setPurchaseID:(NSString *)arg1 ;
-(void)setIsAmplifyUser:(BOOL)arg1 ;
-(BOOL)isAmplifyUser;
-(NSString *)purchaseID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIsPurchaser:(BOOL)arg1 ;
-(void)setBundleChannelIDs:(NSArray *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)servicesBundlePurchaseID;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(id)description;
-(id)dictionaryRepresentation;
-(NSArray *)bundleChannelIDs;
-(void)setServicesBundlePurchaseID:(NSString *)arg1 ;
-(BOOL)inTrialPeriod;
-(void)setInTrialPeriod:(BOOL)arg1 ;
-(NSString *)bundleChannelIDsVersion;
-(void)setBundleChannelIDsVersion:(NSString *)arg1 ;
-(id)initWithEntryID:(id)arg1 dictionaryRepresentation:(id)arg2 ;
-(unsigned long long)purchaseValidationState;
-(void)setPurchaseValidationState:(unsigned long long)arg1 ;
-(id)bundleSubscription;
-(void)setDateOfExpiration:(NSDate *)arg1 ;
-(void)setHasShownRenewalNotice:(BOOL)arg1 ;
-(BOOL)hasShownRenewalNotice;
-(NSDate *)dateOfExpiration;
@end

/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/ATXDuetEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ATXAppLaunchDuetEvent : ATXDuetEvent <NSSecureCoding> {

	NSString* _bundleId;
	long long _appLaunchState;
	NSString* _launchReason;

}

@property (nonatomic,readonly) NSString * bundleId;                   //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) long long appLaunchState;              //@synthesize appLaunchState=_appLaunchState - In the implementation block
@property (nonatomic,readonly) NSString * launchReason;               //@synthesize launchReason=_launchReason - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)_acceptableLaunchReason:(id)arg1 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(id)identifier;
-(NSString *)launchReason;
-(id)description;
-(NSString *)bundleId;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithBundleId:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 ;
-(id)initWithCurrentContextStoreValues;
-(id)initWithDKEvent:(id)arg1 ;
-(id)initWithBundleId:(id)arg1 appLaunchState:(long long)arg2 launchReason:(id)arg3 startDate:(id)arg4 endDate:(id)arg5 ;
-(long long)appLaunchState;
@end

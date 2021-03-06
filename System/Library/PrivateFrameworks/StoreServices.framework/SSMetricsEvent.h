/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SSMetricsEvent : NSObject {

	BOOL _shouldSuppressUserInfo;
	BOOL _shouldSuppressDSIDHeader;
	NSString* _eventType;

}

@property (nonatomic,retain,readonly) NSString * eventType;                //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) BOOL shouldSuppressUserInfo;                //@synthesize shouldSuppressUserInfo=_shouldSuppressUserInfo - In the implementation block
@property (nonatomic,readonly) BOOL shouldSuppressDSIDHeader;              //@synthesize shouldSuppressDSIDHeader=_shouldSuppressDSIDHeader - In the implementation block
+(id)_globalCanaryLock;
+(id)globalEventCanary;
+(void)setGlobalEventCanary:(id)arg1 ;
-(BOOL)shouldSuppressUserInfo;
-(NSString *)eventType;
-(id)_dictionaryRepresentationOfBody;
-(void)appendPropertiesToBody:(id)arg1 ;
-(id)allTableEntityPropertiesPermittedByConfiguration:(id)arg1 ;
-(BOOL)shouldSuppressDSIDHeader;
-(double)timeIntervalFromMilliseconds:(id)arg1 ;
-(id)millisecondsFromTimeInterval:(double)arg1 ;
-(BOOL)isBlacklistedByConfiguration:(id)arg1 ;
-(id)decorateReportingURL:(id)arg1 ;
-(id)allTableEntityPropertiesPermittedByConfiguration:(id)arg1 externalValues:(id)arg2 ;
-(BOOL)requiresDiagnosticSendingPermission;
-(BOOL)isFieldBlacklistEnabled;
@end


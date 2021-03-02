/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _HKAuthorizationRecord, NSSet, NSString, NSNumber, NSDate, HDSQLitePredicate;

@interface HDReadAuthorizationStatus : NSObject {

	_HKAuthorizationRecord* _authorizationRecord;
	NSSet* _restrictedSourceEntities;
	NSString* _restrictedBundleIdentifier;
	NSNumber* _deletedObjectBaselineAnchor;
	NSNumber* _objectLimitAnchor;

}

@property (nonatomic,readonly) long long authorizationStatus; 
@property (nonatomic,readonly) long long authorizationRequest; 
@property (nonatomic,readonly) long long authorizationMode; 
@property (nonatomic,copy,readonly) _HKAuthorizationRecord * authorizationRecord;              //@synthesize authorizationRecord=_authorizationRecord - In the implementation block
@property (nonatomic,copy,readonly) NSSet * restrictedSourceEntities;                          //@synthesize restrictedSourceEntities=_restrictedSourceEntities - In the implementation block
@property (nonatomic,copy,readonly) NSString * restrictedBundleIdentifier;                     //@synthesize restrictedBundleIdentifier=_restrictedBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * deletedObjectBaselineAnchor;                    //@synthesize deletedObjectBaselineAnchor=_deletedObjectBaselineAnchor - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * objectLimitAnchor;                              //@synthesize objectLimitAnchor=_objectLimitAnchor - In the implementation block
@property (nonatomic,copy,readonly) NSDate * objectLimitModifiedDate; 
@property (nonatomic,readonly) BOOL canRead; 
@property (nonatomic,readonly) BOOL isAuthorizationDetermined; 
@property (nonatomic,copy,readonly) HDSQLitePredicate * authorizationPredicate; 
+(id)unrestrictedReadAuthorizationStatus;
+(id)notDerminedReadAuthorizationStatus;
-(long long)authorizationStatus;
-(BOOL)canRead;
-(NSDate *)objectLimitModifiedDate;
-(void)disableReading;
-(NSString *)restrictedBundleIdentifier;
-(void)disableSharing;
-(NSSet *)restrictedSourceEntities;
-(long long)authorizationMode;
-(unsigned long long)hash;
-(BOOL)isAuthorizationDetermined;
-(id)description;
-(NSNumber *)objectLimitAnchor;
-(NSNumber *)deletedObjectBaselineAnchor;
-(BOOL)isEqual:(id)arg1 ;
-(_HKAuthorizationRecord *)authorizationRecord;
-(id)initWithReadAuthorizationStatus:(long long)arg1 authorizationRequest:(long long)arg2 authorizationMode:(long long)arg3 restrictedBundleIdentifier:(id)arg4 restrictedSourceEntities:(id)arg5 deletedObjectBaselineAnchor:(id)arg6 objectLimitAnchor:(id)arg7 objectLimitModifiedDate:(id)arg8 ;
-(long long)authorizationRequest;
-(HDSQLitePredicate *)authorizationPredicate;
@end

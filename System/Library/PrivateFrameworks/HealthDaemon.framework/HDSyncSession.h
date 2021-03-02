/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDSyncSessionDelegate, HDSyncStore;
@class NSUUID, NSString, NSDate, NSCalendar, HDAssertion, HDSyncPredicate;

@interface HDSyncSession : NSObject {

	id<HDSyncSessionDelegate> _delegate;
	id<HDSyncStore> _syncStore;
	NSUUID* _sessionUUID;
	NSString* _shortSessionIdentifier;
	NSDate* _startDate;
	NSCalendar* _calendar;
	NSString* _reason;
	HDAssertion* _databaseAccessibilityAssertion;
	double _databaseAccessibilityTimeout;

}

@property (nonatomic,__weak,readonly) id<HDSyncSessionDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<HDSyncStore> syncStore;                               //@synthesize syncStore=_syncStore - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * sessionUUID;                               //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortSessionIdentifier;                  //@synthesize shortSessionIdentifier=_shortSessionIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDate * startDate;                                 //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy,readonly) NSCalendar * calendar;                              //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                                  //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) HDAssertion * databaseAccessibilityAssertion;              //@synthesize databaseAccessibilityAssertion=_databaseAccessibilityAssertion - In the implementation block
@property (assign,nonatomic) double databaseAccessibilityTimeout;                       //@synthesize databaseAccessibilityTimeout=_databaseAccessibilityTimeout - In the implementation block
@property (nonatomic,copy,readonly) HDSyncPredicate * syncPredicate; 
-(NSCalendar *)calendar;
-(id)init;
-(NSUUID *)sessionUUID;
-(BOOL)transactionDidEndWithError:(id*)arg1 ;
-(id)description;
-(NSString *)reason;
-(NSDate *)startDate;
-(id<HDSyncSessionDelegate>)delegate;
-(id<HDSyncStore>)syncStore;
-(long long)maxEncodedBytesPerCodableChangeForSyncEntityClass:(Class)arg1 ;
-(HDSyncPredicate *)syncPredicate;
-(id)initWithSyncStore:(id)arg1 reason:(id)arg2 delegate:(id)arg3 ;
-(void)setDatabaseAccessibilityTimeout:(double)arg1 ;
-(long long)maxEncodedBytesPerChangeSetForSyncEntityClass:(Class)arg1 ;
-(id)newChangeWithSyncEntityClass:(Class)arg1 ;
-(BOOL)shouldOverrideCycleTrackingSymptomsForBackwardsCompatibilty;
-(id)excludedSyncStores;
-(void)syncWillBegin;
-(BOOL)syncDidBeginWithProfile:(id)arg1 error:(id*)arg2 ;
-(void)sendChanges:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)syncDidFinishWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(NSString *)shortSessionIdentifier;
-(HDAssertion *)databaseAccessibilityAssertion;
-(void)setDatabaseAccessibilityAssertion:(HDAssertion *)arg1 ;
-(double)databaseAccessibilityTimeout;
@end

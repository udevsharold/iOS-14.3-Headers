/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface DABabysitter : NSObject {

	NSString* _buildVersion;
	NSMutableDictionary* _refreshingWaiters;
	NSMutableDictionary* _failedWaiters;
	NSMutableDictionary* _restrictedWaiters;

}

@property (nonatomic,retain) NSString * buildVersion;                              //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * refreshingWaiters;              //@synthesize refreshingWaiters=_refreshingWaiters - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * failedWaiters;                  //@synthesize failedWaiters=_failedWaiters - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * restrictedWaiters;              //@synthesize restrictedWaiters=_restrictedWaiters - In the implementation block
+(id)sharedBabysitter;
-(NSString *)buildVersion;
-(id)init;
-(void)giveAccountWithIDAnotherChance:(id)arg1 ;
-(BOOL)accountWithIDShouldContinue:(id)arg1 ;
-(void)dealloc;
-(NSMutableDictionary *)failedWaiters;
-(void)_reloadBabysitterProperties;
-(void)_decrementRefreshCountForWaiter:(id)arg1 forOperationWithName:(id)arg2 ;
-(BOOL)accountShouldContinue:(id)arg1 ;
-(void)_incrementRefreshCountForWaiterID:(id)arg1 operationName:(id)arg2 ;
-(void)_decrementRefreshCountForWaiterID:(id)arg1 operationName:(id)arg2 ;
-(BOOL)registerAccount:(id)arg1 forOperationWithName:(id)arg2 ;
-(void)unregisterAccount:(id)arg1 forOperationWithName:(id)arg2 ;
-(NSMutableDictionary *)refreshingWaiters;
-(void)setFailedWaiters:(NSMutableDictionary *)arg1 ;
-(void)setRefreshingWaiters:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)restrictedWaiters;
-(void)setRestrictedWaiters:(NSMutableDictionary *)arg1 ;
-(id)_init;
-(void)setBuildVersion:(NSString *)arg1 ;
@end


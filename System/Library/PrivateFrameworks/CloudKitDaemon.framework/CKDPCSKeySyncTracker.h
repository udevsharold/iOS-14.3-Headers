/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSString, NSObject, NSDate, NSNumber, NSError;

@interface CKDPCSKeySyncTracker : NSObject {

	BOOL _manatee;
	NSString* _serviceName;
	NSObject*<OS_dispatch_group> _syncGroup;
	NSDate* _completionDate;
	NSNumber* _syncStatus;
	NSError* _syncError;

}

@property (nonatomic,readonly) unsigned long long state; 
@property (nonatomic,retain) NSString * serviceName;                              //@synthesize serviceName=_serviceName - In the implementation block
@property (assign,getter=isManatee,nonatomic) BOOL manatee;                       //@synthesize manatee=_manatee - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> syncGroup;              //@synthesize syncGroup=_syncGroup - In the implementation block
@property (nonatomic,retain) NSDate * completionDate;                             //@synthesize completionDate=_completionDate - In the implementation block
@property (nonatomic,retain) NSNumber * syncStatus;                               //@synthesize syncStatus=_syncStatus - In the implementation block
@property (nonatomic,retain) NSError * syncError;                                 //@synthesize syncError=_syncError - In the implementation block
-(void)setServiceName:(NSString *)arg1 ;
-(NSString *)serviceName;
-(BOOL)isManatee;
-(unsigned long long)state;
-(NSObject*<OS_dispatch_group>)syncGroup;
-(void)setCompletionDate:(NSDate *)arg1 ;
-(NSDate *)completionDate;
-(NSNumber *)syncStatus;
-(void)setSyncStatus:(NSNumber *)arg1 ;
-(NSError *)syncError;
-(void)waitOnSyncWithQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)setManatee:(BOOL)arg1 ;
-(void)setSyncGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)setSyncError:(NSError *)arg1 ;
@end

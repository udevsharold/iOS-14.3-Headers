/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class HMDBackingStore;


@protocol HMDAccountManager <NSObject>
@property (nonatomic,retain) HMDBackingStore * backingStore; 
@optional
-(id)primaryHandleForAccount:(id)arg1;

@required
-(HMDBackingStore *)backingStore;
-(void)setBackingStore:(id)arg1;
-(BOOL)shouldCacheAccount:(id)arg1;
-(BOOL)shouldSyncAccount:(id)arg1;
-(BOOL)shouldSyncDevice:(id)arg1;
-(BOOL)shouldAccount:(id)arg1 pushbackModel:(id)arg2 actions:(id)arg3;
-(BOOL)shouldDevice:(id)arg1 processModel:(id)arg2 actions:(id)arg3;

@end

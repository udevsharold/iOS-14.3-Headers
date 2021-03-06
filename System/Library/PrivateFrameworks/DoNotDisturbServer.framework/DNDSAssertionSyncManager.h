/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DNDSAssertionSyncManager <NSObject>
@property (assign,nonatomic,__weak) id<DNDSAssertionSyncManagerDataSource> dataSource; 
@property (assign,nonatomic,__weak) id<DNDSAssertionSyncManagerDelegate> delegate; 
@optional
-(void)updateForModeAssertionUpdateResult:(id)arg1;
-(void)updateForStateUpdate:(id)arg1;

@required
-(void)setDataSource:(id)arg1;
-(id<DNDSAssertionSyncManagerDataSource>)dataSource;
-(void)setDelegate:(id)arg1;
-(id<DNDSAssertionSyncManagerDelegate>)delegate;
-(void)resume;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol DNDSLifetimeMonitor <NSObject>
@property (nonatomic,copy,readonly) NSArray * activeLifetimeAssertionUUIDs; 
@property (assign,nonatomic,__weak) id<DNDSLifetimeMonitorDataSource> dataSource; 
@property (assign,nonatomic,__weak) id<DNDSLifetimeMonitorDelegate> delegate; 
@required
-(NSArray *)activeLifetimeAssertionUUIDs;
-(void)setDataSource:(id)arg1;
-(void)refreshMonitorForDate:(id)arg1;
-(id<DNDSLifetimeMonitorDataSource>)dataSource;
-(void)setDelegate:(id)arg1;
-(id<DNDSLifetimeMonitorDelegate>)delegate;

@end


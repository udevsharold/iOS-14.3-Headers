/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol WBSCyclerTestSuite <NSObject>
@property (getter=isFinished,nonatomic,readonly) BOOL finished; 
@optional
+(BOOL)setValue:(id)arg1 forConfigurationKey:(id)arg2;
-(void)tearDown;
-(BOOL)isFinished;
-(void)setUp;
-(BOOL)canHandleRequest:(id)arg1;
-(void)handleRequest:(id)arg1 withTarget:(id)arg2 completionHandler:(/*^block*/id)arg3;

@required
-(id)init;
-(void)runWithTarget:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end


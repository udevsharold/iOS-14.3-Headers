/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreUtilsUI.framework/CoreUtilsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CUActivatable
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue; 
@property (nonatomic,copy) id invalidationHandler; 
@required
-(void)setInvalidationHandler:(/*^block*/id)arg1;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(id)arg1;
-(void)activateWithCompletion:(/*^block*/id)arg1;
-(void)invalidate;
-(id)invalidationHandler;

@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSObject;

@interface CCUIAnimationRunner : NSObject {

	NSObject*<OS_dispatch_group> _previousAnimationGroup;

}
+(void)_runC2AnimationsInBatch:(id)arg1 animationGroup:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)runner;
+(void)_runCAAnimationsInBatch:(id)arg1 animationGroup:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)additivelyRunAnimationBatch:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)runAnimationBatch:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
@end


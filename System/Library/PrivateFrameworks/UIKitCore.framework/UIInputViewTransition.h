/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIInputViewSet;

@interface UIInputViewTransition : NSObject {

	UIInputViewSet* oldSet;
	UIInputViewSet* newSet;

}

@property (nonatomic,readonly) UIInputViewSet * oldSet; 
-(UIInputViewSet *)oldSet;
-(id)newSet;
-(void)postNotificationsForTransitionEnd;
-(void)postNotificationsForTransitionStart;
@end


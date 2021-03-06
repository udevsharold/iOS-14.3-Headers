/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class PLClickPresentationInteractionManager, UIView;


@protocol PLClickPresentationInteractionPresenting <NSObject>
@property (nonatomic,readonly) PLClickPresentationInteractionManager * clickPresentationInteractionManager; 
@property (nonatomic,readonly) UIView * viewForPreview; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (nonatomic,readonly) CGRect initialPresentedFrameOfViewForPreview; 
@property (nonatomic,readonly) CGRect finalPresentedFrameOfViewForPreview; 
@property (nonatomic,readonly) CGRect finalDismissedFrameOfViewForPreview; 
@optional
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1;
-(CGRect)initialPresentedFrameOfViewForPreview;
-(CGRect)finalPresentedFrameOfViewForPreview;
-(CGRect)finalDismissedFrameOfViewForPreview;

@required
-(UIView *)viewForPreview;
-(PLClickPresentationInteractionManager *)clickPresentationInteractionManager;

@end


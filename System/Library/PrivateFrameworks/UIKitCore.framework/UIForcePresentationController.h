/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIGestureRecognizer, UIView, _UIStatesFeedbackGenerator;


@protocol UIForcePresentationController <NSObject>
@property (nonatomic,copy) id presentationPhaseCompletionBlock; 
@property (nonatomic,retain) UIGestureRecognizer * panningGestureRecognizer; 
@property (assign,nonatomic) BOOL _sourceViewSnapshotAndScaleTransformSuppressed; 
@property (nonatomic,readonly) UIView * _revealContainerView; 
@property (nonatomic,retain) _UIStatesFeedbackGenerator * feedbackGenerator; 
@property (assign,nonatomic,__weak) id<_UIForcePresentationControllerDelegate> forcePresentationControllerDelegate; 
@optional
-(void)_willCommitPresentation;

@required
-(_UIStatesFeedbackGenerator *)feedbackGenerator;
-(void)set_sourceViewSnapshotAndScaleTransformSuppressed:(BOOL)arg1;
-(BOOL)_sourceViewSnapshotAndScaleTransformSuppressed;
-(void)setFeedbackGenerator:(id)arg1;
-(void)setPresentationPhaseCompletionBlock:(/*^block*/id)arg1;
-(void)setForcePresentationControllerDelegate:(id)arg1;
-(id)presentationPhaseCompletionBlock;
-(id<_UIForcePresentationControllerDelegate>)forcePresentationControllerDelegate;
-(void)setPanningGestureRecognizer:(id)arg1;
-(BOOL)_canCommitPresentation;
-(UIGestureRecognizer *)panningGestureRecognizer;
-(UIView *)_revealContainerView;
-(BOOL)_canDismissPresentation;

@end


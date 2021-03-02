/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Pegasus.framework/Pegasus
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Pegasus/Pegasus-Structs.h>
#import <UIKitCore/UIView.h>

@class _UIRemoteView, BKSTouchDeliveryPolicyAssertion, PGHostedWindowHostingHandle;

@interface PGLayerHostView : UIView {

	_UIRemoteView* _remoteView;
	BKSTouchDeliveryPolicyAssertion* _touchDeliveryPolicyAssertion;
	double _cornerRadiusScale;
	double _cornerRadius;
	BOOL _ignoreCornerRadiusUpdates;

}

@property (nonatomic,retain) PGHostedWindowHostingHandle * hostedWindowHostingHandle; 
@property (assign,nonatomic) double cornerRadiusScale;                                             //@synthesize cornerRadiusScale=_cornerRadiusScale - In the implementation block
@property (assign,nonatomic) BOOL ignoreCornerRadiusUpdates;                                       //@synthesize ignoreCornerRadiusUpdates=_ignoreCornerRadiusUpdates - In the implementation block
-(PGHostedWindowHostingHandle *)hostedWindowHostingHandle;
-(void)setHostedWindowHostingHandle:(PGHostedWindowHostingHandle *)arg1 ;
-(void)dealloc;
-(void)_setContinuousCornerRadius:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)_manageSharingOfTouchesBetweenClientAndHostContext;
-(void)setCornerRadiusScale:(double)arg1 ;
-(double)cornerRadiusScale;
-(BOOL)ignoreCornerRadiusUpdates;
-(void)setIgnoreCornerRadiusUpdates:(BOOL)arg1 ;
@end

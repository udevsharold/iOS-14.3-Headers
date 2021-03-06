/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UITargetedPreview, _UIPortalView, UIView;

@interface _UIPlatterTransformView : UIView {

	BOOL _hidesSourceView;
	BOOL _forwardsHitTestingToSourceView;
	BOOL _matchesAlpha;
	BOOL _appliesMinificationFilter;
	BOOL _allowsUserInteraction;
	BOOL _shouldTakeOwnershipOfSourceView;
	UITargetedPreview* _sourcePreview;
	_UIPortalView* _portalView;

}

@property (nonatomic,retain) _UIPortalView * portalView;                        //@synthesize portalView=_portalView - In the implementation block
@property (nonatomic,readonly) UIView * sourceView; 
@property (assign,nonatomic) BOOL shouldTakeOwnershipOfSourceView;              //@synthesize shouldTakeOwnershipOfSourceView=_shouldTakeOwnershipOfSourceView - In the implementation block
@property (assign,nonatomic) BOOL hidesSourceView;                              //@synthesize hidesSourceView=_hidesSourceView - In the implementation block
@property (assign,nonatomic) BOOL forwardsHitTestingToSourceView;               //@synthesize forwardsHitTestingToSourceView=_forwardsHitTestingToSourceView - In the implementation block
@property (assign,nonatomic) BOOL matchesAlpha;                                 //@synthesize matchesAlpha=_matchesAlpha - In the implementation block
@property (assign,nonatomic) BOOL appliesMinificationFilter;                    //@synthesize appliesMinificationFilter=_appliesMinificationFilter - In the implementation block
@property (assign,nonatomic) BOOL allowsUserInteraction;                        //@synthesize allowsUserInteraction=_allowsUserInteraction - In the implementation block
@property (nonatomic,retain) UITargetedPreview * sourcePreview;                 //@synthesize sourcePreview=_sourcePreview - In the implementation block
-(UIView *)sourceView;
-(void)setHidesSourceView:(BOOL)arg1 ;
-(void)layoutSubviews;
-(UITargetedPreview *)sourcePreview;
-(void)setAllowsUserInteraction:(BOOL)arg1 ;
-(BOOL)allowsUserInteraction;
-(void)setAppliesMinificationFilter:(BOOL)arg1 ;
-(_UIPortalView *)portalView;
-(void)setForwardsHitTestingToSourceView:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)shouldTakeOwnershipOfSourceView;
-(void)setShouldTakeOwnershipOfSourceView:(BOOL)arg1 ;
-(BOOL)forwardsHitTestingToSourceView;
-(void)_updateMinificationFilter;
-(BOOL)appliesMinificationFilter;
-(BOOL)matchesAlpha;
-(void)didMoveToWindow;
-(BOOL)hidesSourceView;
-(void)setSourcePreview:(UITargetedPreview *)arg1 ;
-(void)setMatchesAlpha:(BOOL)arg1 ;
-(void)setPortalView:(_UIPortalView *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end


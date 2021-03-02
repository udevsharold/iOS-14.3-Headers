/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UICollectionView, UICollectionViewFlowLayout, MRUControlCenterButton, MRUVisualStylingProvider;

@interface MRUControlCenterView : UIView {

	BOOL _transitioning;
	BOOL _showMoreButton;
	BOOL _showAlertView;
	UIView* _contentView;
	UIView* _alertView;
	UIView* _containerView;
	UICollectionView* _collectionView;
	UICollectionViewFlowLayout* _collectionViewLayout;
	MRUControlCenterButton* _moreButton;
	MRUVisualStylingProvider* _stylingProvider;
	long long _state;
	double _cornerRadius;
	UIView* _materialView;
	CGSize _forcedContentSize;
	CGRect _transitionFrame;

}

@property (nonatomic,retain) UIView * materialView;                                            //@synthesize materialView=_materialView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                             //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * alertView;                                               //@synthesize alertView=_alertView - In the implementation block
@property (nonatomic,readonly) UIView * containerView;                                         //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) UICollectionView * collectionView;                              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,readonly) UICollectionViewFlowLayout * collectionViewLayout;              //@synthesize collectionViewLayout=_collectionViewLayout - In the implementation block
@property (nonatomic,readonly) MRUControlCenterButton * moreButton;                            //@synthesize moreButton=_moreButton - In the implementation block
@property (nonatomic,readonly) MRUVisualStylingProvider * stylingProvider;                     //@synthesize stylingProvider=_stylingProvider - In the implementation block
@property (assign,nonatomic) long long state;                                                  //@synthesize state=_state - In the implementation block
@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning;                        //@synthesize transitioning=_transitioning - In the implementation block
@property (assign,nonatomic) CGRect transitionFrame;                                           //@synthesize transitionFrame=_transitionFrame - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                              //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) BOOL showMoreButton;                                              //@synthesize showMoreButton=_showMoreButton - In the implementation block
@property (assign,nonatomic) BOOL showAlertView;                                               //@synthesize showAlertView=_showAlertView - In the implementation block
@property (assign,nonatomic) CGSize forcedContentSize;                                         //@synthesize forcedContentSize=_forcedContentSize - In the implementation block
-(void)setTransitioning:(BOOL)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(MRUControlCenterButton *)moreButton;
-(UIView *)containerView;
-(long long)state;
-(void)layoutSubviews;
-(void)updateVisibility;
-(BOOL)showMoreButton;
-(UICollectionView *)collectionView;
-(BOOL)isTransitioning;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setMaterialView:(UIView *)arg1 ;
-(void)updateCollectionViewContentInset;
-(UICollectionViewFlowLayout *)collectionViewLayout;
-(UIView *)contentView;
-(void)setFrame:(CGRect)arg1 ;
-(UIView *)materialView;
-(void)setState:(long long)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)setStylingProvider:(MRUVisualStylingProvider *)arg1 ;
-(UIView *)alertView;
-(void)setAlertView:(UIView *)arg1 ;
-(MRUVisualStylingProvider *)stylingProvider;
-(void)setForcedContentSize:(CGSize)arg1 ;
-(void)setShowAlertView:(BOOL)arg1 ;
-(void)setShowMoreButton:(BOOL)arg1 ;
-(void)setTransitionFrame:(CGRect)arg1 ;
-(void)layoutSubviewsHorizontal;
-(void)layoutSubviewsVertical;
-(BOOL)showAlertView;
-(void)layoutSubviewsIPad;
-(CGRect)transitionFrame;
-(CGSize)forcedContentSize;
@end

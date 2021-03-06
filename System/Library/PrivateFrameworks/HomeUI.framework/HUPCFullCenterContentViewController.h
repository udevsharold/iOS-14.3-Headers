/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProxCardKit/PRXCardContentViewController.h>

@class UIView, NSLayoutConstraint, NSArray;

@interface HUPCFullCenterContentViewController : PRXCardContentViewController {

	UIView* _centerContentView;
	NSLayoutConstraint* _contentViewOptionalHeightAnchor;
	double _contentViewMaxHeight;
	NSArray* _floatingConstraintGroup;
	NSArray* _pinnedConstraintGroup;

}

@property (nonatomic,retain) UIView * centerContentView;                                        //@synthesize centerContentView=_centerContentView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * contentViewOptionalHeightAnchor;              //@synthesize contentViewOptionalHeightAnchor=_contentViewOptionalHeightAnchor - In the implementation block
@property (assign,nonatomic) double contentViewMaxHeight;                                       //@synthesize contentViewMaxHeight=_contentViewMaxHeight - In the implementation block
@property (nonatomic,retain) NSArray * floatingConstraintGroup;                                 //@synthesize floatingConstraintGroup=_floatingConstraintGroup - In the implementation block
@property (nonatomic,retain) NSArray * pinnedConstraintGroup;                                   //@synthesize pinnedConstraintGroup=_pinnedConstraintGroup - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setCenteredContentView:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)insertCenterContentView;
-(UIView *)centerContentView;
-(void)setCenterContentView:(UIView *)arg1 ;
-(void)setFloatingConstraintGroup:(NSArray *)arg1 ;
-(void)setContentViewOptionalHeightAnchor:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)contentViewOptionalHeightAnchor;
-(NSArray *)floatingConstraintGroup;
-(void)setPinnedConstraintGroup:(NSArray *)arg1 ;
-(void)recalculateLayoutForTraitCollectionChange;
-(NSArray *)pinnedConstraintGroup;
-(double)contentViewMaxHeight;
-(void)setContentViewMaxHeight:(double)arg1 ;
-(void)viewDidLoad;
@end


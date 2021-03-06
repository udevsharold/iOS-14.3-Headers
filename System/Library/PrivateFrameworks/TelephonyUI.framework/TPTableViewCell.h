/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIView, NSLayoutConstraint, UIColor;

@interface TPTableViewCell : UITableViewCell {

	BOOL _accessiblityConstraintsEnabled;
	BOOL _constraintsLoaded;
	BOOL _foregroundViewLoaded;
	UIView* _foregroundView;
	NSLayoutConstraint* _foregroundViewLeadingAnchorLayoutConstraint;
	NSLayoutConstraint* _foregroundViewTrailingAnchorLayoutConstraint;
	NSLayoutConstraint* _foregroundViewTopAnchorLayoutConstraint;
	NSLayoutConstraint* _foregroundViewBottomAnchorLayoutConstraint;

}

@property (assign,getter=isAccessiblityConstraintsEnabled,nonatomic) BOOL accessiblityConstraintsEnabled;              //@synthesize accessiblityConstraintsEnabled=_accessiblityConstraintsEnabled - In the implementation block
@property (assign,getter=isConstraintsLoaded,nonatomic) BOOL constraintsLoaded;                                        //@synthesize constraintsLoaded=_constraintsLoaded - In the implementation block
@property (assign,getter=isForegroundViewLoaded,nonatomic) BOOL foregroundViewLoaded;                                  //@synthesize foregroundViewLoaded=_foregroundViewLoaded - In the implementation block
@property (nonatomic,retain) UIView * foregroundView;                                                                  //@synthesize foregroundView=_foregroundView - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * foregroundViewLeadingAnchorLayoutConstraint;                       //@synthesize foregroundViewLeadingAnchorLayoutConstraint=_foregroundViewLeadingAnchorLayoutConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * foregroundViewTrailingAnchorLayoutConstraint;                      //@synthesize foregroundViewTrailingAnchorLayoutConstraint=_foregroundViewTrailingAnchorLayoutConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * foregroundViewTopAnchorLayoutConstraint;                           //@synthesize foregroundViewTopAnchorLayoutConstraint=_foregroundViewTopAnchorLayoutConstraint - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * foregroundViewBottomAnchorLayoutConstraint;                        //@synthesize foregroundViewBottomAnchorLayoutConstraint=_foregroundViewBottomAnchorLayoutConstraint - In the implementation block
@property (nonatomic,retain) UIColor * foregroundColor; 
@property (nonatomic,readonly) UIEdgeInsets intrinsicSeparatorInset; 
+(UIEdgeInsets)separatorInsetForContentSizeCategory:(id)arg1 ;
+(BOOL)requiresConstraintBasedLayout;
-(void)setForegroundColor:(UIColor *)arg1 ;
-(void)commonInit;
-(UIColor *)foregroundColor;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)updateConstraints;
-(BOOL)isAccessiblityConstraintsEnabled;
-(id)init;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)isConstraintsLoaded;
-(void)setConstraintsLoaded:(BOOL)arg1 ;
-(NSLayoutConstraint *)foregroundViewLeadingAnchorLayoutConstraint;
-(NSLayoutConstraint *)foregroundViewTrailingAnchorLayoutConstraint;
-(void)loadConstraints;
-(id)initWithCoder:(id)arg1 ;
-(UIView *)foregroundView;
-(void)unloadConstraints;
-(BOOL)isForegroundViewLoaded;
-(void)layoutSubviews;
-(NSLayoutConstraint *)foregroundViewBottomAnchorLayoutConstraint;
-(NSLayoutConstraint *)foregroundViewTopAnchorLayoutConstraint;
-(void)loadContentView;
-(void)setForegroundViewLoaded:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAccessiblityConstraintsEnabled:(BOOL)arg1 ;
-(void)updateFonts;
-(void)setForegroundView:(UIView *)arg1 ;
-(UIEdgeInsets)intrinsicSeparatorInset;
-(void)updateConstraintsConstants;
@end


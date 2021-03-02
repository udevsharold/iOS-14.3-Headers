/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class UILabel, NSLayoutConstraint, FMFLocation;

@interface FMFTitleView : UIView {

	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	NSLayoutConstraint* _titleBottomConstraint;
	FMFLocation* _location;

}

@property (nonatomic,retain) UILabel * titleLabel;                                    //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * subtitleLabel;                                 //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * titleBottomConstraint;              //@synthesize titleBottomConstraint=_titleBottomConstraint - In the implementation block
@property (nonatomic,retain) FMFLocation * location;                                  //@synthesize location=_location - In the implementation block
-(void)updateLocation:(id)arg1 ;
-(void)setSubtitleLabel:(UILabel *)arg1 ;
-(UILabel *)titleLabel;
-(FMFLocation *)location;
-(void)_updateLabels:(id)arg1 ;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)setLocation:(FMFLocation *)arg1 ;
-(NSLayoutConstraint *)titleBottomConstraint;
-(id)initFromNib;
-(void)setTitleBottomConstraint:(NSLayoutConstraint *)arg1 ;
@end

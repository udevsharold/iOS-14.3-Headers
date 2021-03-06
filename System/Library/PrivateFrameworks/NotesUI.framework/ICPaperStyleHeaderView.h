/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesUI/NotesUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UILabel, NSLayoutConstraint, NSString;

@interface ICPaperStyleHeaderView : UICollectionReusableView {

	UILabel* _label;
	NSLayoutConstraint* _labelConstraintLeading;
	NSLayoutConstraint* _labelConstraintTrailing;

}

@property (nonatomic,retain) UILabel * label;                                           //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelConstraintLeading;               //@synthesize labelConstraintLeading=_labelConstraintLeading - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * labelConstraintTrailing;              //@synthesize labelConstraintTrailing=_labelConstraintTrailing - In the implementation block
@property (nonatomic,retain) NSString * title; 
@property (assign,nonatomic) double titleInset; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(UILabel *)label;
-(void)contentSizeCategoryDidChange;
-(NSString *)title;
-(void)setLabelConstraintLeading:(NSLayoutConstraint *)arg1 ;
-(void)setLabelConstraintTrailing:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)labelConstraintLeading;
-(NSLayoutConstraint *)labelConstraintTrailing;
-(void)setTitleInset:(double)arg1 ;
-(double)titleInset;
@end


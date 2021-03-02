/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TipsUI.framework/TipsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TipsUI/TipsUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class NSLayoutConstraint;

@interface TPSMultilineButton : UIButton {

	NSLayoutConstraint* _labelWidthConstraint;
	NSLayoutConstraint* _labelTopConstraint;
	NSLayoutConstraint* _labelBottomConstraint;
	BOOL _needToInvalidateTitleLableIntrinsicContentSize;
	NSLayoutConstraint* _fm_workaround_height_constraint;

}

@property (nonatomic,retain) NSLayoutConstraint * fm_workaround_height_constraint;              //@synthesize fm_workaround_height_constraint=_fm_workaround_height_constraint - In the implementation block
@property (assign,nonatomic) BOOL needToInvalidateTitleLableIntrinsicContentSize;               //@synthesize needToInvalidateTitleLableIntrinsicContentSize=_needToInvalidateTitleLableIntrinsicContentSize - In the implementation block
-(void)updateConstraints;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setContentEdgeInsets:(UIEdgeInsets)arg1 ;
-(NSLayoutConstraint *)fm_workaround_height_constraint;
-(void)setFm_workaround_height_constraint:(NSLayoutConstraint *)arg1 ;
-(BOOL)needToInvalidateTitleLableIntrinsicContentSize;
-(void)setNeedToInvalidateTitleLableIntrinsicContentSize:(BOOL)arg1 ;
@end

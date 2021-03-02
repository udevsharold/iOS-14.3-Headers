/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <TextInputUI/TUICandidateBaseCell.h>

@class TIKeyboardCandidate, UIView;

@interface TUIProactiveCandidateCell : TUICandidateBaseCell {

	TIKeyboardCandidate* _candidate;
	UIView* _slotContentView;

}

@property (nonatomic,retain) UIView * slotContentView;                     //@synthesize slotContentView=_slotContentView - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * candidate;              //@synthesize candidate=_candidate - In the implementation block
+(id)reuseIdentifier;
-(void)commonInit;
-(TIKeyboardCandidate *)candidate;
-(id)initWithCoder:(id)arg1 ;
-(UIView *)slotContentView;
-(void)setSlotContentView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setCandidate:(TIKeyboardCandidate *)arg1 ;
@end

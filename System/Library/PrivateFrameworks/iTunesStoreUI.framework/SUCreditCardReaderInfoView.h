/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel;

@interface SUCreditCardReaderInfoView : UIView {

	UILabel* _addCardDetailLabel;
	UILabel* _addCardLabel;

}

@property (nonatomic,retain) UILabel * addCardDetailLabel;              //@synthesize addCardDetailLabel=_addCardDetailLabel - In the implementation block
@property (nonatomic,retain) UILabel * addCardLabel;                    //@synthesize addCardLabel=_addCardLabel - In the implementation block
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAddCardLabel:(UILabel *)arg1 ;
-(UILabel *)addCardLabel;
-(void)setAddCardDetailLabel:(UILabel *)arg1 ;
-(UILabel *)addCardDetailLabel;
@end


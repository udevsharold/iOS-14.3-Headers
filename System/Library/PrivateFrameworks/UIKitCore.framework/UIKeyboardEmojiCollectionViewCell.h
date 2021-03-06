/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UILabel, UIKeyboardEmoji, UIView;

@interface UIKeyboardEmojiCollectionViewCell : UICollectionViewCell {

	UILabel* _emojiLabel;
	BOOL _unreleasedHighlight;
	UILabel* _unreleasedBanner;
	UIKeyboardEmoji* _emoji;
	UIView* _navigationHighlightView;

}

@property (nonatomic,retain) UILabel * unreleasedBanner;                    //@synthesize unreleasedBanner=_unreleasedBanner - In the implementation block
@property (nonatomic,retain) UIView * navigationHighlightView;              //@synthesize navigationHighlightView=_navigationHighlightView - In the implementation block
@property (nonatomic,copy) UIKeyboardEmoji * emoji;                         //@synthesize emoji=_emoji - In the implementation block
@property (assign,nonatomic) long long emojiFontSize; 
@property (assign,nonatomic) BOOL unreleasedHighlight;                      //@synthesize unreleasedHighlight=_unreleasedHighlight - In the implementation block
-(UIKeyboardEmoji *)emoji;
-(void)setEmoji:(UIKeyboardEmoji *)arg1 ;
-(void)setEmojiFontSize:(long long)arg1 ;
-(void)setUnreleasedHighlight:(BOOL)arg1 ;
-(long long)emojiFontSize;
-(UILabel *)unreleasedBanner;
-(UIView *)navigationHighlightView;
-(void)setUnreleasedBanner:(UILabel *)arg1 ;
-(void)setNavigationHighlightView:(UIView *)arg1 ;
-(BOOL)unreleasedHighlight;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)debugDescription;
-(void)setSelected:(BOOL)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIImageView, NSString, NSUUID, UILabel;

@interface AVTStickerRecentsStickerCollectionViewCell : UICollectionViewCell {

	BOOL _showPrereleaseSticker;
	UIImageView* _imageView;
	NSString* _title;
	NSUUID* _displaySessionUUID;
	UILabel* _prereleaseLabel;

}

@property (nonatomic,readonly) UILabel * prereleaseLabel;              //@synthesize prereleaseLabel=_prereleaseLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSUUID * displaySessionUUID;              //@synthesize displaySessionUUID=_displaySessionUUID - In the implementation block
@property (assign,nonatomic) BOOL showPrereleaseSticker;               //@synthesize showPrereleaseSticker=_showPrereleaseSticker - In the implementation block
+(id)identifier;
-(CGRect)contentBounds;
-(void)updateWithImage:(id)arg1 ;
-(NSUUID *)displaySessionUUID;
-(void)setDisplaySessionUUID:(NSUUID *)arg1 ;
-(UIImageView *)imageView;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)updateWithDefaultImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)showPrereleaseSticker;
-(void)setShowPrereleaseSticker:(BOOL)arg1 ;
-(void)setupPrereleaseLabelIfNeeded;
-(UILabel *)prereleaseLabel;
-(NSString *)title;
@end

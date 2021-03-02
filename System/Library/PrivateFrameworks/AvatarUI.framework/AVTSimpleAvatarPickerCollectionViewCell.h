/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AvatarUI/AvatarUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSUUID, UIView, AVTUIAnimatingImageView;

@interface AVTSimpleAvatarPickerCollectionViewCell : UICollectionViewCell {

	BOOL _showSelectedState;
	NSUUID* _displaySessionUUID;
	unsigned long long _imageInsetSize;
	UIView* _selectionLayer;
	AVTUIAnimatingImageView* _imageView;

}

@property (nonatomic,readonly) UIView * selectionLayer;                          //@synthesize selectionLayer=_selectionLayer - In the implementation block
@property (nonatomic,readonly) AVTUIAnimatingImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) NSUUID * displaySessionUUID;                        //@synthesize displaySessionUUID=_displaySessionUUID - In the implementation block
@property (assign,nonatomic) unsigned long long imageInsetSize;                  //@synthesize imageInsetSize=_imageInsetSize - In the implementation block
@property (assign,nonatomic) BOOL showSelectedState;                             //@synthesize showSelectedState=_showSelectedState - In the implementation block
+(CGPathRef)selectionPathInBounds:(CGRect)arg1 ;
+(id)cellIdentifier;
+(double)imageInsetForInsetSize:(unsigned long long)arg1 ;
-(NSUUID *)displaySessionUUID;
-(void)setDisplaySessionUUID:(NSUUID *)arg1 ;
-(UIView *)selectionLayer;
-(void)updateWithImage:(id)arg1 animated:(BOOL)arg2 ;
-(AVTUIAnimatingImageView *)imageView;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(unsigned long long)imageInsetSize;
-(void)setImageInsetSize:(unsigned long long)arg1 ;
-(void)updateSelectionLayerOpacityAnimated:(BOOL)arg1 ;
-(BOOL)shouldShowSelectionLayer;
-(void)updateHighlightedState:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setShowSelectedState:(BOOL)arg1 ;
-(BOOL)showSelectedState;
-(void)setSelected:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

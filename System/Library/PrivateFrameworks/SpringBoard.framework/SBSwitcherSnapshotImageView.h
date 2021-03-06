/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UIView, UIImage;

@interface SBSwitcherSnapshotImageView : UIView {

	UIImageView* _imageView;
	UIView* _scalingView;
	double _cornerRadius;
	unsigned long long _maskedCorners;
	BOOL _usesNonuniformScaling;
	BOOL _hasOpaqueContents;
	long long _orientationForClassicLayout;

}

@property (nonatomic,retain) UIImage * image; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) unsigned long long maskedCorners; 
@property (assign,nonatomic) BOOL usesNonuniformScaling;                         //@synthesize usesNonuniformScaling=_usesNonuniformScaling - In the implementation block
@property (assign,nonatomic) BOOL hasOpaqueContents;                             //@synthesize hasOpaqueContents=_hasOpaqueContents - In the implementation block
@property (assign,nonatomic) long long orientationForClassicLayout;              //@synthesize orientationForClassicLayout=_orientationForClassicLayout - In the implementation block
-(unsigned long long)maskedCorners;
-(id)initWithImage:(id)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(UIImage *)image;
-(void)setUsesNonuniformScaling:(BOOL)arg1 ;
-(void)_updateCornerRadius;
-(void)setImage:(UIImage *)arg1 ;
-(void)setMaskedCorners:(unsigned long long)arg1 ;
-(long long)orientationForClassicLayout;
-(double)_transformVerticalScale;
-(void)setOrientationForClassicLayout:(long long)arg1 ;
-(void)layoutSubviews;
-(void)setHasOpaqueContents:(BOOL)arg1 ;
-(BOOL)_isUsingExternalClassicLayout;
-(BOOL)hasOpaqueContents;
-(CGAffineTransform)scalingTransform;
-(double)_transformScale;
-(double)_transformHorizontalScale;
-(BOOL)usesNonuniformScaling;
@end


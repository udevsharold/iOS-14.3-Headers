/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MessageUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView, UIBezierPath, UIImage, UIImageView;

@interface MFComposeDropPreviewView : UIView {

	UIView* _previewView;
	UIBezierPath* _previewClippingPath;
	UIImage* _finalImage;
	UIImageView* _imageView;

}

@property (nonatomic,retain) UIImageView * imageView;                         //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * previewView;                            //@synthesize previewView=_previewView - In the implementation block
@property (nonatomic,retain) UIBezierPath * previewClippingPath;              //@synthesize previewClippingPath=_previewClippingPath - In the implementation block
@property (nonatomic,retain) UIImage * finalImage;                            //@synthesize finalImage=_finalImage - In the implementation block
-(void)setPreviewView:(UIView *)arg1 ;
-(void)setImageView:(UIImageView *)arg1 ;
-(UIImageView *)imageView;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImage *)finalImage;
-(UIView *)previewView;
-(UIBezierPath *)previewClippingPath;
-(void)setPreviewClippingPath:(UIBezierPath *)arg1 ;
-(void)setFinalImage:(UIImage *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AuthKitUI/AKAuthorizationSubPane.h>

@class UIImageView, NSArray, UIImage;

@interface AKAuthorizationSubPaneImage : AKAuthorizationSubPane {

	UIImageView* _imageView;
	NSArray* _imageViewConstraints;

}

@property (nonatomic,readonly) UIImageView * imageView;                 //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImage * image; 
@property (nonatomic,copy) NSArray * imageViewConstraints;              //@synthesize imageViewConstraints=_imageViewConstraints - In the implementation block
+(id)_imageViewWithImage:(id)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(UIImageView *)imageView;
-(NSArray *)imageViewConstraints;
-(void)setImageViewConstraints:(NSArray *)arg1 ;
-(void)addToStackView:(id)arg1 context:(id)arg2 ;
-(void)addToConstraints:(id)arg1 context:(id)arg2 ;
@end

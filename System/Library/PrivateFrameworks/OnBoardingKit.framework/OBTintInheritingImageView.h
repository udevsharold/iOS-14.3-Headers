/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIImageView.h>

@class UIImage;

@interface OBTintInheritingImageView : UIImageView {

	UIImage* _originalImage;

}

@property (nonatomic,retain) UIImage * originalImage;              //@synthesize originalImage=_originalImage - In the implementation block
-(void)tintColorDidChange;
-(id)initWithImage:(id)arg1 highlightedImage:(id)arg2 ;
-(void)setImage:(id)arg1 ;
-(void)setOriginalImage:(UIImage *)arg1 ;
-(UIImage *)originalImage;
@end


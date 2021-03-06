/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIViewPropertyAnimator;

@interface AVVolumeWarningView : UIView {

	BOOL _stopping;
	UIViewPropertyAnimator* _animator;

}

@property (nonatomic,retain) UIViewPropertyAnimator * animator;              //@synthesize animator=_animator - In the implementation block
@property (assign,getter=isStopping,nonatomic) BOOL stopping;                //@synthesize stopping=_stopping - In the implementation block
-(UIViewPropertyAnimator *)animator;
-(void)setAnimator:(UIViewPropertyAnimator *)arg1 ;
-(BOOL)isStopping;
-(void)setStopping:(BOOL)arg1 ;
-(void)stopAnimatingAndRemoveFromSuperview;
-(void)continueAnimating;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)startAnimating;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/CKLayerDelegate.h>

@protocol CKGradientReferenceView;
@class UIView, NSArray, UIImage, CKBaseLayer, CATransformLayer;

@interface CKGradientView : UIView <CKLayerDelegate> {

	UIView*<CKGradientReferenceView> _referenceView;
	NSArray* _colors;
	UIImage* _maskImage;
	CKBaseLayer* _gradientLayer;
	CATransformLayer* _trackingLayer;
	CGRect _gradientFrame;

}

@property (nonatomic,retain) CKBaseLayer * gradientLayer;                                        //@synthesize gradientLayer=_gradientLayer - In the implementation block
@property (assign,nonatomic) CGRect gradientFrame;                                               //@synthesize gradientFrame=_gradientFrame - In the implementation block
@property (nonatomic,retain) CATransformLayer * trackingLayer;                                   //@synthesize trackingLayer=_trackingLayer - In the implementation block
@property (assign,nonatomic,__weak) UIView*<CKGradientReferenceView> referenceView;              //@synthesize referenceView=_referenceView - In the implementation block
@property (nonatomic,retain) NSArray * colors;                                                   //@synthesize colors=_colors - In the implementation block
@property (nonatomic,retain) UIImage * maskImage;                                                //@synthesize maskImage=_maskImage - In the implementation block
@property (nonatomic,readonly) UIImage * gradient; 
+(id)gradientViews;
-(CKBaseLayer *)gradientLayer;
-(void)setGradientLayer:(CKBaseLayer *)arg1 ;
-(void)_removeAllAnimations:(BOOL)arg1 ;
-(void)setColors:(NSArray *)arg1 ;
-(CGRect)gradientFrame;
-(void)dealloc;
-(void)ckLayerDidBecomeVisible:(BOOL)arg1 ;
-(void)setGradientFrame:(CGRect)arg1 ;
-(void)setMaskImage:(UIImage *)arg1 ;
-(UIView*<CKGradientReferenceView>)referenceView;
-(id)description;
-(void)layoutSubviews;
-(CATransformLayer *)trackingLayer;
-(void)setTrackingLayer:(CATransformLayer *)arg1 ;
-(void)updateAnimation;
-(void)updateGradientImage;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(NSArray *)colors;
-(UIImage *)maskImage;
-(void)setReferenceView:(UIView*<CKGradientReferenceView>)arg1 ;
-(UIImage *)gradient;
-(void)didMoveToSuperview;
@end

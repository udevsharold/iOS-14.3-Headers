/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKit/UIDropInteractionEffect.h>

@class UIColor, CAShapeLayer, NSString;

@interface _UIDropInteractionHighlightEffect : NSObject <UIDropInteractionEffect> {

	long long _visualState;
	double _highlightWidth;
	double _cornerRadius;
	double _highlightInset;
	UIColor* _highlightColor;
	CAShapeLayer* _shapeLayer;

}

@property (nonatomic,retain) CAShapeLayer * shapeLayer;              //@synthesize shapeLayer=_shapeLayer - In the implementation block
@property (assign,nonatomic) double highlightWidth;                  //@synthesize highlightWidth=_highlightWidth - In the implementation block
@property (assign,nonatomic) double cornerRadius;                    //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (assign,nonatomic) double highlightInset;                  //@synthesize highlightInset=_highlightInset - In the implementation block
@property (nonatomic,copy) UIColor * highlightColor;                 //@synthesize highlightColor=_highlightColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIColor *)highlightColor;
-(void)setHighlightColor:(UIColor *)arg1 ;
-(id)init;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(void)dealloc;
-(CAShapeLayer *)shapeLayer;
-(double)highlightWidth;
-(void)removeShapeLayer;
-(CGRect)highlightRectInView:(id)arg1 forDragInteraction:(id)arg2 withContext:(id)arg3 ;
-(CGRect)clippingRectInView:(id)arg1 forView:(id)arg2 ;
-(void)setHighlightInset:(double)arg1 ;
-(id)updateShapeLayerForFrame:(CGRect)arg1 inView:(id)arg2 ;
-(void)setHighlightWidth:(double)arg1 ;
-(void)interaction:(id)arg1 didChangeWithContext:(id)arg2 ;
-(double)highlightInset;
-(void)setShapeLayer:(CAShapeLayer *)arg1 ;
@end


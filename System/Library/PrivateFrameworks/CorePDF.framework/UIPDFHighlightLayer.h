/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <QuartzCore/CALayer.h>

@interface UIPDFHighlightLayer : CALayer {

	CGPathRef _clipPath;
	CGPathRef _borderPath;
	CGPoint offset;

}

@property (assign,nonatomic) CGPathRef clipPath; 
@property (assign,nonatomic) CGPathRef borderPath; 
@property (assign,nonatomic) CGPoint offset; 
-(CGPoint)offset;
-(void)dealloc;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPathRef)clipPath;
-(void)setClipPath:(CGPathRef)arg1 ;
-(CGPathRef)borderPath;
-(void)setBorderPath:(CGPathRef)arg1 ;
@end

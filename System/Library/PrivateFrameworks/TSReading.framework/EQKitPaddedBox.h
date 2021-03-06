/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/EQKitBox.h>

@class EQKitBox;

@interface EQKitPaddedBox : EQKitBox {

	EQKitBox* mBox;
	double mHeight;
	double mDepth;
	double mWidth;
	double mLspace;
	double mVoffset;

}

@property (nonatomic,readonly) EQKitBox * box; 
@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) double depth; 
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) double lspace; 
@property (nonatomic,readonly) double voffset; 
-(double)width;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)height;
-(void)dealloc;
-(double)depth;
-(id)description;
-(double)lspace;
-(BOOL)isEqual:(id)arg1 ;
-(EQKitBox *)box;
-(double)voffset;
-(BOOL)p_getTransform:(CGAffineTransform*)arg1 fromDescendant:(id)arg2 ;
-(double)opticalAlignWidth;
-(CGRect)erasableBounds;
-(void)renderIntoContext:(CGContextRef)arg1 offset:(CGPoint)arg2 ;
-(BOOL)appendOpticalAlignToSpec:(Spec*)arg1 offset:(CGPoint)arg2 ;
-(id)initWithBox:(id)arg1 height:(double)arg2 width:(double)arg3 depth:(double)arg4 lspace:(double)arg5 voffset:(double)arg6 ;
@end


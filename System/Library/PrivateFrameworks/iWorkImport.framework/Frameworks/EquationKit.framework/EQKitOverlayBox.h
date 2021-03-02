/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/EquationKit.framework/EquationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EquationKit/EquationKit-Structs.h>
#import <TSReading/EQKitBox.h>

@class EQKitBox;

@interface EQKitOverlayBox : EQKitBox {

	EQKitBox* mBox;
	EQKitBox* mOverlayBox;

}

@property (nonatomic,readonly) EQKitBox * box; 
@property (nonatomic,readonly) EQKitBox * overlayBox; 
-(double)width;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)height;
-(void)dealloc;
-(double)depth;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(EQKitBox *)box;
-(BOOL)p_getTransform:(CGAffineTransform*)arg1 fromDescendant:(id)arg2 ;
-(CGRect)erasableBounds;
-(void)renderIntoContext:(CGContextRef)arg1 offset:(CGPoint)arg2 ;
-(BOOL)appendOpticalAlignToSpec:(Spec*)arg1 offset:(CGPoint)arg2 ;
-(EQKitBox *)overlayBox;
-(id)initWithBox:(id)arg1 overlayBox:(id)arg2 ;
@end

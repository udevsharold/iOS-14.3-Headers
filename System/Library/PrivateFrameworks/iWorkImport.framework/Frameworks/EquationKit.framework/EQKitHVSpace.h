/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/EquationKit.framework/EquationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EquationKit/EquationKit-Structs.h>
#import <TSReading/EQKitBox.h>

@interface EQKitHVSpace : EQKitBox {

	double mWidth;
	double mHeight;
	double mDepth;

}

@property (nonatomic,readonly) double height; 
@property (nonatomic,readonly) double depth; 
@property (nonatomic,readonly) double width; 
@property (nonatomic,readonly) double layoutHeight; 
@property (nonatomic,readonly) double layoutDepth; 
-(double)width;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)height;
-(double)layoutHeight;
-(double)depth;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(double)layoutDepth;
-(BOOL)appendOpticalAlignToSpec:(Spec*)arg1 offset:(CGPoint)arg2 ;
-(id)initWithWidth:(double)arg1 height:(double)arg2 depth:(double)arg3 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:11:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/Frameworks/TSDrawables.framework/TSDrawables
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSDrawables/TSDrawables-Structs.h>
#import <TSDrawables/TSDMixing.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class TSUColor;

@interface TSDGradientStop : NSObject <TSDMixing, NSCopying, NSMutableCopying> {

	TSUColor* mColor;
	double mFraction;
	double mInflection;

}

@property (nonatomic,copy,readonly) TSUColor * color; 
@property (nonatomic,readonly) double fraction; 
@property (nonatomic,readonly) double inflection; 
+(id)gradientStopWithColor:(id)arg1 fraction:(double)arg2 ;
+(id)gradientStopWithColor:(id)arg1 fraction:(double)arg2 inflection:(double)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(TSUColor *)color;
-(double)fraction;
-(void)dealloc;
-(unsigned long long)hash;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithColor:(id)arg1 fraction:(double)arg2 ;
-(long long)mixingTypeWithObject:(id)arg1 ;
-(id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2 ;
-(double)inflection;
-(id)gradientStopWithColor:(id)arg1 ;
-(id)initWithGradientStop:(id)arg1 ;
-(void)p_setFraction:(double)arg1 ;
-(id)initWithColor:(id)arg1 fraction:(double)arg2 inflection:(double)arg3 ;
-(void)p_setColor:(id)arg1 ;
-(void)p_setInflection:(double)arg1 ;
-(id)gradientStopWithInflection:(double)arg1 ;
@end

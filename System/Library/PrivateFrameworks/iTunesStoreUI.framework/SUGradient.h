/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:50 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSLock, NSArray;

@interface SUGradient : NSObject <NSSecureCoding, NSCopying> {

	NSMutableArray* _colorStops;
	NSLock* _lock;
	SUGradientPoint _p0;
	SUGradientPoint _p1;
	BOOL _sorted;
	long long _type;

}

@property (readonly) long long gradientType; 
@property (readonly) SUGradientPoint p0; 
@property (readonly) SUGradientPoint p1; 
@property (readonly) NSArray * colorStopColors; 
@property (readonly) NSArray * colorStopOffsets; 
@property (readonly) long long numberOfColorStops; 
+(BOOL)supportsSecureCoding;
+(id)gradientWithColor:(id)arg1 ;
-(SUGradientPoint)p1;
-(SUGradientPoint)p0;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)initWithType:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(long long)gradientType;
-(CGGradientRef)copyCGGradient;
-(id)initWithPropertyList:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)addColorStopWithOffset:(double)arg1 color:(CGColorRef)arg2 ;
-(CGShadingRef)copyShading;
-(id)initWithPoint0:(SUGradientPoint)arg1 point1:(SUGradientPoint)arg2 type:(long long)arg3 ;
-(id)newPatternColorWithSize:(CGSize)arg1 opaque:(BOOL)arg2 ;
-(NSArray *)colorStopColors;
-(NSArray *)colorStopOffsets;
-(long long)numberOfColorStops;
@end


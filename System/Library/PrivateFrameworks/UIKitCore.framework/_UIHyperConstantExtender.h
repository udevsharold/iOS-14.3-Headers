/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIHyperExtender_Internal.h>
#import <UIKitCore/_UIHyperExtender.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _UIHyperConstantExtender : NSObject <_UIHyperExtender_Internal, _UIHyperExtender, NSSecureCoding, NSCopying> {

	unsigned long long __dimensions;
	double __maximumDistance;

}

@property (assign,setter=_setMaximumDistance:,nonatomic) double _maximumDistance;              //@synthesize _maximumDistance=__maximumDistance - In the implementation block
@property (nonatomic,readonly) unsigned long long _dimensions;                                 //@synthesize _dimensions=__dimensions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)keyPathsForValuesAffectingSelf;
-(unsigned long long)_dimensions;
-(id)initWithDimensions:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_setMaximumDistance:(double)arg1 ;
-(double)_maximumDistance;
-(void)_extentVector:(double*)arg1 forUnconstrainedPoint:(const double*)arg2 closestPoint:(const double*)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end


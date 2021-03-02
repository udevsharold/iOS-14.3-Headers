/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/MLFeatureValueConstraint.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, MLMultiArrayShapeConstraint;

@interface MLMultiArrayConstraint : NSObject <MLFeatureValueConstraint, NSCopying, NSSecureCoding> {

	NSArray* _shape;
	long long _dataType;
	MLMultiArrayShapeConstraint* _shapeConstraint;

}

@property (nonatomic,readonly) NSArray * shape;                                            //@synthesize shape=_shape - In the implementation block
@property (nonatomic,readonly) long long dataType;                                         //@synthesize dataType=_dataType - In the implementation block
@property (nonatomic,readonly) MLMultiArrayShapeConstraint * shapeConstraint;              //@synthesize shapeConstraint=_shapeConstraint - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)constraintWithShape:(id)arg1 dataType:(long long)arg2 shapeConstraint:(id)arg3 ;
+(id)constraintWithShape:(id)arg1 dataType:(long long)arg2 ;
-(long long)dataType;
-(BOOL)isAllowedDataType:(long long)arg1 error:(id*)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithShape:(id)arg1 dataType:(long long)arg2 shapeConstraint:(id)arg3 ;
-(NSArray *)shape;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isAllowedShape:(id)arg1 error:(id*)arg2 ;
-(MLMultiArrayShapeConstraint *)shapeConstraint;
-(BOOL)isAllowedValue:(id)arg1 isNeuralNetworkInputOrOutput:(BOOL)arg2 usingRank5Mapping:(BOOL)arg3 featureName:(id)arg4 error:(id*)arg5 ;
-(BOOL)isAllowedValue:(id)arg1 error:(id*)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

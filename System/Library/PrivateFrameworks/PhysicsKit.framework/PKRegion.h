/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PhysicsKit.framework/PhysicsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhysicsKit/PhysicsKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PKRegion : NSObject <NSCopying, NSSecureCoding> {

	int _shape;
	BOOL _isExclusive;
	vec4 _halfExtent;
	shared_ptr<PKCPathHolder>* _path;
	int _regionOp;
	int _shape2;
	vec4 _halfExtent2;
	shared_ptr<PKCPathHolder>* _path2;

}

@property (nonatomic,readonly) CGPathRef path; 
+(BOOL)supportsSecureCoding;
+(id)infiniteRegion;
-(id)initWithPath:(CGPathRef)arg1 ;
-(BOOL)isEmpty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)containsPoints:(const float*)arg1 locationStride:(long long)arg2 results:(char*)arg3 resultsStride:(long long)arg4 count:(int)arg5 ;
-(CGPathRef)path;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)containsPoint:(CGPoint)arg1 ;
-(id)initWithRadius:(float)arg1 ;
-(id)regionByUnionWithRegion:(id)arg1 ;
-(id)regionByDifferenceFromRegion:(id)arg1 ;
-(id)regionByIntersectionWithRegion:(id)arg1 ;
-(id)inverseRegion;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSize:(CGSize)arg1 ;
-(BOOL)isEqualToRegion:(id)arg1 ;
-(BOOL)isInfinite;
@end

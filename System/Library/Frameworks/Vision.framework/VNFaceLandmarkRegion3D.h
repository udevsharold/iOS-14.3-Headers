/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/Vision-Structs.h>
#import <Vision/VNFaceLandmarkRegion.h>

@interface VNFaceLandmarkRegion3D : VNFaceLandmarkRegion {

	const * _points;

}

@property (assign) const * points;              //@synthesize points=_points - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setPoints:(const *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(2)pointAtIndex:(unsigned long long)arg1 ;
-(void)dealloc;
-(id)initWithRequestRevision:(unsigned long long)arg1 faceBoundingBox:(CGRect)arg2 ;
-(id)initWithRequestRevision:(unsigned long long)arg1 faceBoundingBox:(CGRect)arg2 points:(5*)arg3 pointCount:(unsigned long long)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(const *)points;
-(void)encodeWithCoder:(id)arg1 ;
@end


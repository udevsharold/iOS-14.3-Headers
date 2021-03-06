/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ARKitCore/ARKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ARCameraParameters : NSObject <NSSecureCoding> {

	CGSize _imageResolution;
	CGPoint _focalLength;
	CGPoint _principalPoint;

}

@property (nonatomic,readonly) CGSize imageResolution;              //@synthesize imageResolution=_imageResolution - In the implementation block
@property (nonatomic,readonly) CGPoint focalLength;                 //@synthesize focalLength=_focalLength - In the implementation block
@property (nonatomic,readonly) CGPoint principalPoint;              //@synthesize principalPoint=_principalPoint - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGPoint)focalLength;
-(void)encodeWithCoder:(id)arg1 ;
-(CGSize)imageResolution;
-(CGPoint)principalPoint;
-(id)initWithFocalLength:(CGPoint)arg1 imageResolution:(CGSize)arg2 principalPoint:(CGPoint)arg3 ;
@end


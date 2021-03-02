/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ARSkeleton2D;

@interface ARBody2D : NSObject {

	ARSkeleton2D* _skeleton;

}

@property (nonatomic,readonly) ARSkeleton2D * skeleton;              //@synthesize skeleton=_skeleton - In the implementation block
+(BOOL)supportsSecureCoding;
-(ARSkeleton2D *)skeleton;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithSkeleton2D:(id)arg1 ;
@end

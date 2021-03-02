/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DrawingKit.framework/DrawingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DrawingKit/DrawingKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface DKDrawingStrokePoint : NSObject <NSCopying> {

	double _force;
	double _velocity;
	CGPoint _location;

}

@property (assign,nonatomic) CGPoint location;              //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) double force;                  //@synthesize force=_force - In the implementation block
@property (assign,nonatomic) double velocity;               //@synthesize velocity=_velocity - In the implementation block
-(void)setVelocity:(double)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)velocity;
-(void)setForce:(double)arg1 ;
-(double)force;
-(CGPoint)location;
-(id)description;
-(void)setLocation:(CGPoint)arg1 ;
@end

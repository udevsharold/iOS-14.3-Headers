/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TVRCGameControllerEvent : NSObject <NSSecureCoding> {

	BOOL _down;
	double _timestamp;
	CGPoint _joystickLocation;

}

@property (nonatomic,readonly) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (getter=isDown,nonatomic,readonly) BOOL down;               //@synthesize down=_down - In the implementation block
@property (nonatomic,readonly) CGPoint joystickLocation;              //@synthesize joystickLocation=_joystickLocation - In the implementation block
+(BOOL)supportsSecureCoding;
-(double)timestamp;
-(BOOL)isDown;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_initWithTimestamp:(double)arg1 isDown:(BOOL)arg2 joystickLocation:(CGPoint)arg3 ;
-(CGPoint)joystickLocation;
@end

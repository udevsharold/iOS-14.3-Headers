/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface SFPowerSourceLEDInfo : NSObject <NSSecureCoding> {

	int _LEDColor;
	int _LEDState;

}

@property (assign,nonatomic) int LEDColor;              //@synthesize LEDColor=_LEDColor - In the implementation block
@property (assign,nonatomic) int LEDState;              //@synthesize LEDState=_LEDState - In the implementation block
+(BOOL)supportsSecureCoding;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(int)LEDColor;
-(int)LEDState;
-(void)setLEDColor:(int)arg1 ;
-(void)setLEDState:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

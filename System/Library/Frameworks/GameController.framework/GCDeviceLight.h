/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class GCColor;

@interface GCDeviceLight : NSObject <NSSecureCoding> {

	GCColor* _color;

}

@property (nonatomic,copy) GCColor * color;              //@synthesize color=_color - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setColor:(GCColor *)arg1 ;
-(id)initWithColor:(id)arg1 ;
-(GCColor *)color;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
@end


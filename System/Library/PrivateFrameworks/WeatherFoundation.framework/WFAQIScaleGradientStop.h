/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WeatherFoundation/WeatherFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WFAQIScaleGradientStop : NSObject <NSCopying, NSSecureCoding> {

	float _location;
	NSString* _color;

}

@property (nonatomic,readonly) float location;                //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) NSString * color;              //@synthesize color=_color - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)color;
-(float)location;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithLocation:(float)arg1 color:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

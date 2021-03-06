/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface GCColor : NSObject <NSCopying, NSSecureCoding> {

	float _red;
	float _green;
	float _blue;

}

@property (readonly) float red;                //@synthesize red=_red - In the implementation block
@property (readonly) float green;              //@synthesize green=_green - In the implementation block
@property (readonly) float blue;               //@synthesize blue=_blue - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(float)blue;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(float)red;
-(float)green;
-(id)initWithRed:(float)arg1 green:(float)arg2 blue:(float)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
@end


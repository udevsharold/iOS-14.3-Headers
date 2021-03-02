/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AFAccessibilityState : NSObject <NSCopying, NSSecureCoding> {

	long long _isVoiceOverTouchEnabled;
	long long _isVibrationDisabled;

}

@property (nonatomic,readonly) long long isVoiceOverTouchEnabled;              //@synthesize isVoiceOverTouchEnabled=_isVoiceOverTouchEnabled - In the implementation block
@property (nonatomic,readonly) long long isVibrationDisabled;                  //@synthesize isVibrationDisabled=_isVibrationDisabled - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(long long)isVoiceOverTouchEnabled;
-(long long)isVibrationDisabled;
-(id)initWithIsVoiceOverTouchEnabled:(long long)arg1 isVibrationDisabled:(long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

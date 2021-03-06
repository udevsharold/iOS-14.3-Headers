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

@interface AFSpeechRecordingAlertBehavior : NSObject <NSCopying, NSSecureCoding> {

	long long _style;
	long long _beepSoundID;

}

@property (nonatomic,readonly) long long style;                    //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) long long beepSoundID;              //@synthesize beepSoundID=_beepSoundID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)beepSoundID;
-(long long)style;
-(id)initWithStyle:(long long)arg1 beepSoundID:(long long)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end


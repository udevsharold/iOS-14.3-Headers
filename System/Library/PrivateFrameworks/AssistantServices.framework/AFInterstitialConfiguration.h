/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:13 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AFInterstitialConfiguration : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isVoiceTrigger;
	BOOL _isDucking;
	BOOL _isTwoShot;
	long long _style;
	NSString* _languageCode;
	long long _gender;
	NSString* _recordRoute;
	unsigned long long _speechEndHostTime;

}

@property (nonatomic,readonly) long long style;                                   //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) NSString * languageCode;                      //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) long long gender;                                  //@synthesize gender=_gender - In the implementation block
@property (nonatomic,copy,readonly) NSString * recordRoute;                       //@synthesize recordRoute=_recordRoute - In the implementation block
@property (nonatomic,readonly) BOOL isVoiceTrigger;                               //@synthesize isVoiceTrigger=_isVoiceTrigger - In the implementation block
@property (nonatomic,readonly) BOOL isDucking;                                    //@synthesize isDucking=_isDucking - In the implementation block
@property (nonatomic,readonly) BOOL isTwoShot;                                    //@synthesize isTwoShot=_isTwoShot - In the implementation block
@property (nonatomic,readonly) unsigned long long speechEndHostTime;              //@synthesize speechEndHostTime=_speechEndHostTime - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(long long)gender;
-(NSString *)languageCode;
-(NSString *)recordRoute;
-(BOOL)isDucking;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)style;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(id)description;
-(BOOL)isTwoShot;
-(BOOL)isVoiceTrigger;
-(unsigned long long)speechEndHostTime;
-(id)initWithStyle:(long long)arg1 languageCode:(id)arg2 gender:(long long)arg3 recordRoute:(id)arg4 isVoiceTrigger:(BOOL)arg5 isDucking:(BOOL)arg6 isTwoShot:(BOOL)arg7 speechEndHostTime:(unsigned long long)arg8 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

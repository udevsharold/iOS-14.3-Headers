/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AppPredictionInternal/ATXDuetEvent.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSNumber;

@interface ATXAudioDuetEvent : ATXDuetEvent <NSSecureCoding> {

	long long _audioState;
	NSString* _deviceIdentifier;
	NSString* _portType;
	NSString* _portName;
	NSNumber* _routeChangeReason;

}

@property (nonatomic,readonly) long long audioState;                      //@synthesize audioState=_audioState - In the implementation block
@property (nonatomic,readonly) NSString * deviceIdentifier;               //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * portType;                       //@synthesize portType=_portType - In the implementation block
@property (nonatomic,readonly) NSString * portName;                       //@synthesize portName=_portName - In the implementation block
@property (nonatomic,readonly) NSNumber * routeChangeReason;              //@synthesize routeChangeReason=_routeChangeReason - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)deviceIdentifier;
-(BOOL)checkAndReportDecodingFailureIfNeededForNSInteger:(long long)arg1 key:(id)arg2 coder:(id)arg3 errorDomain:(id)arg4 errorCode:(long long)arg5 ;
-(NSString *)portType;
-(NSString *)portName;
-(id)initWithCoder:(id)arg1 ;
-(id)identifier;
-(id)description;
-(NSNumber *)routeChangeReason;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCurrentContextStoreValues;
-(id)initWithDKEvent:(id)arg1 ;
-(long long)audioState;
-(id)initWithAudioState:(long long)arg1 deviceIdentifier:(id)arg2 portType:(id)arg3 portName:(id)arg4 routeChangeReason:(id)arg5 startDate:(id)arg6 endDate:(id)arg7 ;
@end

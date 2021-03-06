/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/RCSerializable.h>

@class NSArray, NSString;

@interface RCDeviceInfo : NSObject <RCSerializable> {

	NSArray* _preferredLanguages;
	NSString* _deviceType;
	long long _utcOffset;
	long long _dstOffset;
	NSString* _appVersion;
	NSString* _osVersion;
	NSString* _countryCode;

}

@property (nonatomic,copy,readonly) NSArray * preferredLanguages;              //@synthesize preferredLanguages=_preferredLanguages - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceType;                     //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) long long utcOffset;                            //@synthesize utcOffset=_utcOffset - In the implementation block
@property (nonatomic,readonly) long long dstOffset;                            //@synthesize dstOffset=_dstOffset - In the implementation block
@property (nonatomic,copy,readonly) NSString * appVersion;                     //@synthesize appVersion=_appVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * osVersion;                      //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * countryCode;                    //@synthesize countryCode=_countryCode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultDeviceInfoWithAppVersion:(id)arg1 ;
+(id)defaultDeviceInfo;
-(long long)utcOffset;
-(NSArray *)preferredLanguages;
-(NSString *)appVersion;
-(NSString *)deviceType;
-(NSString *)osVersion;
-(id)initWithPreferredLanguages:(id)arg1 deviceType:(id)arg2 utcOffset:(long long)arg3 dstOffset:(long long)arg4 appVersion:(id)arg5 osVersion:(id)arg6 ;
-(long long)dstOffset;
-(NSString *)countryCode;
-(unsigned long long)hash;
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithPreferredLanguages:(id)arg1 deviceType:(id)arg2 utcOffset:(long long)arg3 dstOffset:(long long)arg4 appVersion:(id)arg5 osVersion:(id)arg6 countryCode:(id)arg7 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WiFiKit/WiFiKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface WFPrivateAddressConfig : NSObject <NSCopying> {

	BOOL _carrierBundleBased;
	unsigned long long _disabledReason;
	NSString* _ssid;

}

@property (assign,nonatomic) unsigned long long disabledReason;                                //@synthesize disabledReason=_disabledReason - In the implementation block
@property (assign,getter=isCarrierBundleBased,nonatomic) BOOL carrierBundleBased;              //@synthesize carrierBundleBased=_carrierBundleBased - In the implementation block
@property (nonatomic,copy) NSString * ssid;                                                    //@synthesize ssid=_ssid - In the implementation block
-(NSString *)ssid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSsid:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)disabledReason;
-(id)initWithPrivateAddressConfigDictionary:(id)arg1 ssid:(id)arg2 ;
-(void)setDisabledReason:(unsigned long long)arg1 ;
-(BOOL)isCarrierBundleBased;
-(void)setCarrierBundleBased:(BOOL)arg1 ;
@end


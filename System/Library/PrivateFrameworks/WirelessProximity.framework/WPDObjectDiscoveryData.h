/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:14 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableData;

@interface WPDObjectDiscoveryData : NSObject {

	long long _length;
	NSMutableData* _address;
	NSMutableData* _payload;

}

@property (nonatomic,retain) NSMutableData * address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) NSMutableData * payload;              //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) long long length;                     //@synthesize length=_length - In the implementation block
+(unsigned char)applyMaskToAddress:(id)arg1 ;
+(id)addressFromNearbyToken:(id)arg1 ;
+(id)objectDiscoveryReportFromAdvReport:(id)arg1 ;
+(id)addressesFromNearbyTokens:(id)arg1 ;
-(void)setAddress:(NSMutableData *)arg1 ;
-(void)setLength:(long long)arg1 ;
-(long long)length;
-(id)init;
-(NSMutableData *)address;
-(void)setPayload:(NSMutableData *)arg1 ;
-(NSMutableData *)payload;
-(id)description;
-(void)wipeout;
-(id)updateWithKey:(id)arg1 Status:(unsigned char)arg2 Reserved:(id)arg3 ;
@end


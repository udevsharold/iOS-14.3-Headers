/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:05 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString;

@interface CURangingSample : NSObject {

	int _channel;
	int _rawRSSI;
	NSData* _deviceAddress;
	NSString* _deviceModel;

}

@property (assign,nonatomic) int channel;                       //@synthesize channel=_channel - In the implementation block
@property (nonatomic,copy) NSData * deviceAddress;              //@synthesize deviceAddress=_deviceAddress - In the implementation block
@property (nonatomic,copy) NSString * deviceModel;              //@synthesize deviceModel=_deviceModel - In the implementation block
@property (assign,nonatomic) int rawRSSI;                       //@synthesize rawRSSI=_rawRSSI - In the implementation block
-(void)setChannel:(int)arg1 ;
-(NSString *)deviceModel;
-(int)channel;
-(void)setDeviceModel:(NSString *)arg1 ;
-(id)description;
-(int)rawRSSI;
-(void)setRawRSSI:(int)arg1 ;
-(NSData *)deviceAddress;
-(void)setDeviceAddress:(NSData *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface BWSensorConfiguration : NSObject {

	NSString* _portType;
	NSString* _sensorIDString;
	NSDictionary* _sensorIDDictionary;
	NSDictionary* _cameraInfo;

}

@property (nonatomic,readonly) NSString * portType;                            //@synthesize portType=_portType - In the implementation block
@property (nonatomic,readonly) NSString * sensorIDString;                      //@synthesize sensorIDString=_sensorIDString - In the implementation block
@property (nonatomic,readonly) NSDictionary * sensorIDDictionary;              //@synthesize sensorIDDictionary=_sensorIDDictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * cameraInfo;                      //@synthesize cameraInfo=_cameraInfo - In the implementation block
-(NSString *)sensorIDString;
-(NSString *)portType;
-(NSDictionary *)sensorIDDictionary;
-(void)dealloc;
-(id)initWithPortType:(id)arg1 sensorIDString:(id)arg2 sensorIDDictionary:(id)arg3 cameraInfo:(id)arg4 ;
-(id)description;
-(NSDictionary *)cameraInfo;
@end

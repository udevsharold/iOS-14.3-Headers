/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MLLayerExecutionSchedule : NSObject {

	long long _layerError;
	NSString* _layerName;
	NSString* _deviceName;

}

@property (nonatomic,copy) NSString * layerName;                //@synthesize layerName=_layerName - In the implementation block
@property (nonatomic,copy) NSString * deviceName;               //@synthesize deviceName=_deviceName - In the implementation block
@property (assign,nonatomic) long long layerError;              //@synthesize layerError=_layerError - In the implementation block
-(NSString *)deviceName;
-(void)setDeviceName:(NSString *)arg1 ;
-(NSString *)layerName;
-(id)initWithLayerError:(long long)arg1 ;
-(id)initWithScheduledDevice:(id)arg1 layerName:(id)arg2 layerError:(long long)arg3 ;
-(long long)layerError;
-(void)setLayerError:(long long)arg1 ;
-(void)setLayerName:(NSString *)arg1 ;
@end

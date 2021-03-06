/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Security.framework/Security
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface SecExperimentConfig : NSObject {

	unsigned _fleetSampleRate;
	unsigned _deviceSampleRate;
	NSString* _identifier;
	NSDictionary* _configurationData;
	NSDictionary* _config;

}

@property (retain) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSDictionary * config;                         //@synthesize config=_config - In the implementation block
@property (assign) unsigned fleetSampleRate;                      //@synthesize fleetSampleRate=_fleetSampleRate - In the implementation block
@property (assign) unsigned deviceSampleRate;                     //@synthesize deviceSampleRate=_deviceSampleRate - In the implementation block
@property (retain) NSDictionary * configurationData;              //@synthesize configurationData=_configurationData - In the implementation block
@property (readonly) BOOL isSampled; 
-(BOOL)isSampled;
-(unsigned)hostHash;
-(BOOL)shouldRunWithSamplingRate:(id)arg1 ;
-(unsigned)fleetSampleRate;
-(unsigned)deviceSampleRate;
-(void)setFleetSampleRate:(unsigned)arg1 ;
-(void)setDeviceSampleRate:(unsigned)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(NSString *)identifier;
-(void)setConfigurationData:(NSDictionary *)arg1 ;
-(void)setConfig:(NSDictionary *)arg1 ;
-(NSDictionary *)configurationData;
-(NSDictionary *)config;
@end


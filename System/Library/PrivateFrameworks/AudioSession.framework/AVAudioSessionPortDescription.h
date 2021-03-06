/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:38 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AudioSession.framework/AudioSession
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AudioSession/AudioSession-Structs.h>
@class NSString, NSArray, AVAudioSessionDataSourceDescription;

@interface AVAudioSessionPortDescription : NSObject {

	void* _impl;

}

@property (nonatomic,readonly) NSString * portType; 
@property (nonatomic,readonly) NSString * portName; 
@property (nonatomic,readonly) NSString * UID; 
@property (readonly) BOOL hasHardwareVoiceCallProcessing; 
@property (nonatomic,readonly) NSArray * channels; 
@property (nonatomic,readonly) NSArray * dataSources; 
@property (nonatomic,readonly) AVAudioSessionDataSourceDescription * selectedDataSource; 
@property (nonatomic,readonly) AVAudioSessionDataSourceDescription * preferredDataSource; 
+(id)privateCreateArray:(id)arg1 owningSession:(id)arg2 ;
-(NSString *)portType;
-(unsigned long long)endpointType;
-(BOOL)isHeadphones;
-(BOOL)isLowLatencyAirPlay;
-(void)dealloc;
-(BOOL)isLiveListenSupported;
-(NSArray *)channels;
-(NSArray *)dataSources;
-(NSString *)portName;
-(unsigned long long)hash;
-(BOOL)isEqualToPort:(id)arg1 compareStrict:(BOOL)arg2 ;
-(id)description;
-(id)initWithRawPortDescription:(id)arg1 owningSession:(id)arg2 ;
-(BOOL)hasHardwareVoiceCallProcessing;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)UID;
-(AVAudioSessionDataSourceDescription *)preferredDataSource;
-(PortDescriptionImpl*)privateGetImplementation;
-(BOOL)setPreferredDataSource:(id)arg1 error:(id*)arg2 ;
-(AVAudioSessionDataSourceDescription *)selectedDataSource;
-(void)configureChannelsAndDataSources:(id)arg1 ;
-(id)privateGetID;
-(id)initWithSession:(id)arg1 ;
@end


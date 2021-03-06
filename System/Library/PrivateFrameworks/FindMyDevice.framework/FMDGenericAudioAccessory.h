/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/FMDAudioAccessory.h>
#import <libobjc.A.dylib/FMDAccessory.h>

@class NSString, NSURL, FMDAudioAccessoryInfo, FMDAccessoryIdentifier;

@interface FMDGenericAudioAccessory : NSObject <NSSecureCoding, FMDAudioAccessory, FMDAccessory> {

	FMDAccessoryIdentifier* _accessoryIdentifier;
	NSString* _audioRoutingIdentifier;
	NSURL* _audioURL;
	FMDAudioAccessoryInfo* _audioAccessoryInfo;

}

@property (nonatomic,retain) FMDAccessoryIdentifier * accessoryIdentifier;              //@synthesize accessoryIdentifier=_accessoryIdentifier - In the implementation block
@property (nonatomic,retain) NSString * audioRoutingIdentifier;                         //@synthesize audioRoutingIdentifier=_audioRoutingIdentifier - In the implementation block
@property (nonatomic,retain) NSURL * audioURL;                                          //@synthesize audioURL=_audioURL - In the implementation block
@property (nonatomic,retain) FMDAudioAccessoryInfo * audioAccessoryInfo;                //@synthesize audioAccessoryInfo=_audioAccessoryInfo - In the implementation block
@property (nonatomic,readonly) unsigned long long audioSafetyStatus; 
@property (nonatomic,readonly) BOOL playingSound; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)copyAccessory:(id)arg1 ;
-(NSURL *)audioURL;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(BOOL)playingSound;
-(void)setAudioURL:(NSURL *)arg1 ;
-(BOOL)updateAudioAsset:(id)arg1 ;
-(BOOL)updatePlaybackChannels:(id)arg1 ;
-(unsigned long long)audioSafetyStatus;
-(NSString *)audioRoutingIdentifier;
-(FMDAudioAccessoryInfo *)audioAccessoryInfo;
-(FMDAccessoryIdentifier *)accessoryIdentifier;
-(void)setAccessoryIdentifier:(FMDAccessoryIdentifier *)arg1 ;
-(void)setAudioRoutingIdentifier:(NSString *)arg1 ;
-(void)setAudioAccessoryInfo:(FMDAudioAccessoryInfo *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end


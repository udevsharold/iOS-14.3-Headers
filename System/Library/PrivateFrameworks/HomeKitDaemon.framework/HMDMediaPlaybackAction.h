/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDAction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>

@class NSSet, NSNumber, MPPlaybackArchive, HMDHome, HMDMediaPlaybackActionAsCharacteristicWriteRequests, NSString;

@interface HMDMediaPlaybackAction : HMDAction <NSSecureCoding, HMDBackingStoreObjectProtocol> {

	BOOL _encodePlaybackArchiveForExecution;
	NSSet* _mediaProfiles;
	NSNumber* _volume;
	MPPlaybackArchive* _playbackArchive;
	long long _state;
	HMDHome* _home;
	NSSet* _profileUUIDs;

}

@property (assign,nonatomic,__weak) HMDHome * home;                                                                                //@synthesize home=_home - In the implementation block
@property (nonatomic,copy) NSSet * mediaProfiles;                                                                                  //@synthesize mediaProfiles=_mediaProfiles - In the implementation block
@property (nonatomic,retain) NSNumber * volume;                                                                                    //@synthesize volume=_volume - In the implementation block
@property (nonatomic,retain) MPPlaybackArchive * playbackArchive;                                                                  //@synthesize playbackArchive=_playbackArchive - In the implementation block
@property (assign,nonatomic) long long state;                                                                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSSet * profileUUIDs;                                                                                 //@synthesize profileUUIDs=_profileUUIDs - In the implementation block
@property (copy,readonly) HMDMediaPlaybackActionAsCharacteristicWriteRequests * convertedCharacteristicWriteRequests; 
@property (assign,nonatomic) BOOL encodePlaybackArchiveForExecution;                                                               //@synthesize encodePlaybackArchiveForExecution=_encodePlaybackArchiveForExecution - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(id)actionWithDictionaryRepresentation:(id)arg1 home:(id)arg2 ;
+(BOOL)isPlaybackActionValidWithProfiles:(id)arg1 state:(long long)arg2 volume:(id)arg3 ;
-(Class)modelClass;
-(NSNumber *)volume;
-(void)setVolume:(NSNumber *)arg1 ;
-(id)validate;
-(HMDHome *)home;
-(long long)state;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)type;
-(MPPlaybackArchive *)playbackArchive;
-(void)setHome:(HMDHome *)arg1 ;
-(id)dictionaryRepresentation;
-(NSSet *)mediaProfiles;
-(void)setMediaProfiles:(NSSet *)arg1 ;
-(void)setPlaybackArchive:(MPPlaybackArchive *)arg1 ;
-(void)setState:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)associatedAccessories;
-(BOOL)isAssociatedWithAccessory:(id)arg1 ;
-(id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 ;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(id)stateDump;
-(void)executeWithSource:(unsigned long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithModelObject:(id)arg1 parent:(id)arg2 error:(id*)arg3 ;
-(void)configureWithHome:(id)arg1 ;
-(id)modelObjectWithUpdatedMediaProfiles:(id)arg1 ;
-(HMDMediaPlaybackActionAsCharacteristicWriteRequests *)convertedCharacteristicWriteRequests;
-(BOOL)encodePlaybackArchiveForExecution;
-(id)initWithUUID:(id)arg1 mediaProfiles:(id)arg2 playbackState:(long long)arg3 volume:(id)arg4 playbackArchive:(id)arg5 actionSet:(id)arg6 ;
-(NSSet *)profileUUIDs;
-(void)_processPlaybackActionModelUpdated:(id)arg1 message:(id)arg2 ;
-(void)setProfileUUIDs:(NSSet *)arg1 ;
-(void)setEncodePlaybackArchiveForExecution:(BOOL)arg1 ;
@end


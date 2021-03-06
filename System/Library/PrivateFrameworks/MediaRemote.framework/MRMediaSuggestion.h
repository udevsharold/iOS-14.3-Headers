/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, MRArtwork, INPlayMediaIntent;

@interface MRMediaSuggestion : NSObject {

	NSString* _bundleID;
	MRArtwork* _artwork;
	INPlayMediaIntent* _intent;

}

@property (nonatomic,retain) NSString * bundleID;                     //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) MRArtwork * artwork;                     //@synthesize artwork=_artwork - In the implementation block
@property (nonatomic,retain) INPlayMediaIntent * intent;              //@synthesize intent=_intent - In the implementation block
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * artist; 
-(void)setBundleID:(NSString *)arg1 ;
-(void)setArtwork:(MRArtwork *)arg1 ;
-(id)initWithIntent:(id)arg1 ;
-(NSString *)bundleID;
-(MRArtwork *)artwork;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)description;
-(INPlayMediaIntent *)intent;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)artist;
-(void)setIntent:(INPlayMediaIntent *)arg1 ;
-(id)_callbackQueue;
-(NSString *)title;
-(id)_processedIntent;
-(void)_playIntent:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_originatedFromSystemMediaApp;
-(void)_playIntent:(id)arg1 onEndpoint:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)playWithCompletion:(/*^block*/id)arg1 ;
-(void)_playIntentRemotelyWithAirPlay:(id)arg1 destinationDevices:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_playIntentRemotelyAsPlaybackQueue:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_intentForQueuePlayback;
-(id)_identifierForQueuePlayback;
-(void)_confirmIntent:(id)arg1 intentHandler:(/*^block*/id)arg2 ;
-(void)_handleIntentWithProxy:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)playOnDeviceWithUID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)playOnEndpoint:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateActiveEndpointAndPlayIntent:(id)arg1 endpoint:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RPBroadcastControllerDelegate;
@class NSDictionary, NSString, NSURL;

@interface RPBroadcastController : NSObject {

	NSDictionary* _serviceInfo;
	id<RPBroadcastControllerDelegate> _delegate;
	NSString* _broadcastExtensionBundleID;
	NSString* _broadcastExtensionBundleIdentifier;

}

@property (nonatomic,retain) NSDictionary * serviceInfo;                                     //@synthesize serviceInfo=_serviceInfo - In the implementation block
@property (nonatomic,retain) NSURL * broadcastURL; 
@property (nonatomic,retain) NSString * broadcastExtensionBundleIdentifier;                  //@synthesize broadcastExtensionBundleIdentifier=_broadcastExtensionBundleIdentifier - In the implementation block
@property (getter=isBroadcasting,nonatomic,readonly) BOOL broadcasting; 
@property (getter=isPaused,nonatomic,readonly) BOOL paused; 
@property (assign,nonatomic,__weak) id<RPBroadcastControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * broadcastExtensionBundleID;                        //@synthesize broadcastExtensionBundleID=_broadcastExtensionBundleID - In the implementation block
-(id)init;
-(NSDictionary *)serviceInfo;
-(BOOL)isPaused;
-(void)setServiceInfo:(NSDictionary *)arg1 ;
-(void)setDelegate:(id<RPBroadcastControllerDelegate>)arg1 ;
-(id<RPBroadcastControllerDelegate>)delegate;
-(void)setBroadcastURL:(NSURL *)arg1 ;
-(void)setBroadcastExtensionBundleIdentifier:(NSString *)arg1 ;
-(void)startSystemBroadcastWithHandler:(/*^block*/id)arg1 ;
-(NSURL *)broadcastURL;
-(id)initWithExtensionBundleID:(id)arg1 broadcastURL:(id)arg2 ;
-(id)initWithCurrentSession;
-(BOOL)isBroadcasting;
-(void)startBroadcastWithHandler:(/*^block*/id)arg1 ;
-(void)pauseBroadcast;
-(void)resumeBroadcast;
-(void)finishBroadcastWithHandler:(/*^block*/id)arg1 ;
-(void)finishSystemBroadcastWithHandler:(/*^block*/id)arg1 ;
-(NSString *)broadcastExtensionBundleID;
-(NSString *)broadcastExtensionBundleIdentifier;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CUFileServer, NSObject, RPCompanionLinkClient, NSString;

@interface SNFileServer : NSObject {

	CUFileServer* _server;
	NSObject*<OS_dispatch_queue> _queue;
	RPCompanionLinkClient* _link;
	NSString* _rootDirectory;

}

@property (nonatomic,retain) CUFileServer * server;                           //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) RPCompanionLinkClient * link;                    //@synthesize link=_link - In the implementation block
@property (nonatomic,retain) NSString * rootDirectory;                        //@synthesize rootDirectory=_rootDirectory - In the implementation block
+(id)createDefaultServer;
-(void)setLink:(RPCompanionLinkClient *)arg1 ;
-(NSString *)rootDirectory;
-(CUFileServer *)server;
-(RPCompanionLinkClient *)link;
-(void)setServer:(CUFileServer *)arg1 ;
-(void)activateWithCompletion:(/*^block*/id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithRootDirectory:(id)arg1 ;
-(void)setRootDirectory:(NSString *)arg1 ;
@end

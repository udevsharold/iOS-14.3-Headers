/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXSpringBoardServerInstance/AXUIClientDelegate.h>
#import <AXSpringBoardServerInstance/AXHAServerDelegate.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSTimer, NSObject, NSString;

@interface AXSBHearingAidDeviceController : NSObject <AXUIClientDelegate, AXHAServerDelegate> {

	double _routeChangedTime;
	BOOL isShowingHearingAidControl;
	BOOL _shouldIgnoreRouteChanges;
	BOOL _hearingAidIsConnected;
	BOOL _holdingMediaForConnection;
	BOOL _holdingPhoneForConnection;
	NSDictionary* _preferredRoute;
	NSTimer* _preferredRouteTimer;
	NSObject*<OS_dispatch_queue> _mediaUpdateQueue;

}

@property (assign,nonatomic) BOOL shouldIgnoreRouteChanges;                              //@synthesize shouldIgnoreRouteChanges=_shouldIgnoreRouteChanges - In the implementation block
@property (assign,nonatomic) BOOL isShowingHearingAidControl; 
@property (assign,nonatomic) BOOL hearingAidIsConnected;                                 //@synthesize hearingAidIsConnected=_hearingAidIsConnected - In the implementation block
@property (assign,nonatomic) BOOL holdingMediaForConnection;                             //@synthesize holdingMediaForConnection=_holdingMediaForConnection - In the implementation block
@property (assign,nonatomic) BOOL holdingPhoneForConnection;                             //@synthesize holdingPhoneForConnection=_holdingPhoneForConnection - In the implementation block
@property (nonatomic,retain) NSDictionary * preferredRoute;                              //@synthesize preferredRoute=_preferredRoute - In the implementation block
@property (nonatomic,retain) NSTimer * preferredRouteTimer;                              //@synthesize preferredRouteTimer=_preferredRouteTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> mediaUpdateQueue;              //@synthesize mediaUpdateQueue=_mediaUpdateQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1 ;
-(void)startServer;
-(BOOL)holdingMediaForConnection;
-(void)setHoldingPhoneForConnection:(BOOL)arg1 ;
-(id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)holdingPhoneForConnection;
-(id)init;
-(void)setHoldingMediaForConnection:(BOOL)arg1 ;
-(void)_lockStateChanged;
-(void)dealloc;
-(void)liveListenStatusBarActivated:(id)arg1 ;
-(NSTimer *)preferredRouteTimer;
-(void)hearingServerDidDie:(id)arg1 ;
-(void)setMediaUpdateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setShouldIgnoreRouteChanges:(BOOL)arg1 ;
-(void)setIsShowingHearingAidControl:(BOOL)arg1 ;
-(id)hearingUIClient;
-(BOOL)isScreenLocked;
-(void)setPreferredRoute:(NSDictionary *)arg1 ;
-(BOOL)isShowingHearingAidControl;
-(NSObject*<OS_dispatch_queue>)mediaUpdateQueue;
-(BOOL)hearingAidIsConnected;
-(void)setHearingAidIsConnected:(BOOL)arg1 ;
-(BOOL)shouldIgnoreRouteChanges;
-(void)showHearingAidControl:(BOOL)arg1 ;
-(void)setPreferredRouteTimer:(NSTimer *)arg1 ;
-(NSDictionary *)preferredRoute;
@end


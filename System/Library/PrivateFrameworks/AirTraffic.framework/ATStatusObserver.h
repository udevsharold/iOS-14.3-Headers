/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AirTraffic.framework/AirTraffic
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATStatusObserverProtocol.h>

@protocol ATStatusObserverDelegate;
@class NSXPCConnection, NSString;

@interface ATStatusObserver : NSObject <ATStatusObserverProtocol> {

	BOOL _ATCRunning;
	BOOL _resumed;
	int _notifyToken;
	id<ATStatusObserverDelegate> _delegate;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;                              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL ATCRunning;                                           //@synthesize ATCRunning=_ATCRunning - In the implementation block
@property (assign,nonatomic) BOOL resumed;                                              //@synthesize resumed=_resumed - In the implementation block
@property (assign,nonatomic) int notifyToken;                                           //@synthesize notifyToken=_notifyToken - In the implementation block
@property (assign,nonatomic,__weak) id<ATStatusObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fetchAllStatusWithCompletion:(/*^block*/id)arg1 ;
-(void)updateWithStatus:(id)arg1 ;
-(BOOL)ATCRunning;
-(void)setATCRunning:(BOOL)arg1 ;
-(void)setResumed:(BOOL)arg1 ;
-(id)init;
-(int)notifyToken;
-(void)setNotifyToken:(int)arg1 ;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(BOOL)resumed;
-(void)setDelegate:(id<ATStatusObserverDelegate>)arg1 ;
-(void)suspend;
-(NSXPCConnection *)connection;
-(id<ATStatusObserverDelegate>)delegate;
-(void)resume;
@end

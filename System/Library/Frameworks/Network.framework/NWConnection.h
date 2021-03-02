/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, NWPath, NWConcrete_nw_connection, NWEndpoint, NWParameters;

@interface NWConnection : NSObject {

	BOOL _internalIsViable;
	BOOL _internalHasBetterPath;
	long long _internalConnectionState;
	NSError* _internalError;
	NWPath* _internalPath;
	NWConcrete_nw_connection* _internalConnection;

}

@property (assign) long long internalConnectionState;                                    //@synthesize internalConnectionState=_internalConnectionState - In the implementation block
@property (assign) BOOL internalIsViable;                                                //@synthesize internalIsViable=_internalIsViable - In the implementation block
@property (assign) BOOL internalHasBetterPath;                                           //@synthesize internalHasBetterPath=_internalHasBetterPath - In the implementation block
@property (retain) NSError * internalError;                                              //@synthesize internalError=_internalError - In the implementation block
@property (retain) NWPath * internalPath;                                                //@synthesize internalPath=_internalPath - In the implementation block
@property (nonatomic,readonly) unsigned tlsConnectionTime; 
@property (nonatomic,retain) NWConcrete_nw_connection * internalConnection;              //@synthesize internalConnection=_internalConnection - In the implementation block
@property (nonatomic,readonly) NWPath * currentPath; 
@property (nonatomic,readonly) NWEndpoint * endpoint; 
@property (nonatomic,readonly) NWParameters * parameters; 
@property (nonatomic,readonly) long long connectionState; 
@property (nonatomic,readonly) NWEndpoint * connectedLocalEndpoint; 
@property (nonatomic,readonly) NWEndpoint * connectedRemoteEndpoint; 
@property (nonatomic,readonly) NSError * error; 
@property (getter=isViable,nonatomic,readonly) BOOL viable; 
@property (nonatomic,readonly) BOOL hasBetterPath; 
+(id)connectionWithEndpoint:(id)arg1 parameters:(id)arg2 ;
+(id)connectionWithConnectedSocket:(int)arg1 ;
+(id)connectionWithInternalConnection:(id)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(NWParameters *)parameters;
-(NSError *)error;
-(NWEndpoint *)endpoint;
-(BOOL)hasBetterPath;
-(void)setInternalError:(NSError *)arg1 ;
-(NWConcrete_nw_connection *)internalConnection;
-(void)setInternalConnection:(NWConcrete_nw_connection *)arg1 ;
-(NWPath *)currentPath;
-(NWPath *)internalPath;
-(BOOL)isViable;
-(id)initWithInternalConnection:(id)arg1 ;
-(id)initWithConnectedSocket:(int)arg1 ;
-(int)getConnectedSocket;
-(void)forceCancel;
-(void)cancelCurrentEndpoint;
-(unsigned)tlsConnectionTime;
-(NWEndpoint *)connectedLocalEndpoint;
-(NWEndpoint *)connectedRemoteEndpoint;
-(id)copyCurrentPath;
-(long long)internalConnectionState;
-(void)setInternalConnectionState:(long long)arg1 ;
-(BOOL)internalIsViable;
-(void)setInternalIsViable:(BOOL)arg1 ;
-(BOOL)internalHasBetterPath;
-(void)setInternalHasBetterPath:(BOOL)arg1 ;
-(void)setInternalPath:(NWPath *)arg1 ;
-(id)description;
-(void)cancel;
-(long long)connectionState;
-(NSError *)internalError;
-(void)start;
-(id)copyError;
-(id)initWithEndpoint:(id)arg1 parameters:(id)arg2 ;
@end

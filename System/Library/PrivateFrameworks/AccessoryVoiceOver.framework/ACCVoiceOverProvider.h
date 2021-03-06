/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AccessoryVoiceOver.framework/AccessoryVoiceOver
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ACCVoiceOverProviderProtocol, ACCVoiceOverXPCServerProtocol;
@class NSString, NSXPCConnection, NSMutableDictionary;

@interface ACCVoiceOverProvider : NSObject {

	id<ACCVoiceOverProviderProtocol> _delegate;
	NSString* _providerUID;
	NSXPCConnection* _serverConnection;
	id<ACCVoiceOverXPCServerProtocol> _remoteObject;
	NSMutableDictionary* _accessories;

}

@property (nonatomic,retain) NSString * providerUID;                                        //@synthesize providerUID=_providerUID - In the implementation block
@property (nonatomic,retain) NSXPCConnection * serverConnection;                            //@synthesize serverConnection=_serverConnection - In the implementation block
@property (nonatomic,retain) id<ACCVoiceOverXPCServerProtocol> remoteObject;                //@synthesize remoteObject=_remoteObject - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * accessories;                             //@synthesize accessories=_accessories - In the implementation block
@property (assign,nonatomic,__weak) id<ACCVoiceOverProviderProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<ACCVoiceOverXPCServerProtocol>)remoteObject;
-(void)setRemoteObject:(id<ACCVoiceOverXPCServerProtocol>)arg1 ;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
-(void)setServerConnection:(NSXPCConnection *)arg1 ;
-(NSMutableDictionary *)accessories;
-(void)setAccessories:(NSMutableDictionary *)arg1 ;
-(void)setDelegate:(id<ACCVoiceOverProviderProtocol>)arg1 ;
-(NSXPCConnection *)serverConnection;
-(id<ACCVoiceOverProviderProtocol>)delegate;
-(NSString *)providerUID;
-(void)setProviderUID:(NSString *)arg1 ;
-(void)connectToServer;
-(BOOL)calculateDesiredState:(id)arg1 ;
-(void)accessoryVoiceOverAttached:(id)arg1 ;
-(void)accessoryVoiceOverDetached:(id)arg1 ;
-(void)accessoryVoiceOver:(id)arg1 setEnabled:(BOOL)arg2 ;
-(void)accessoryVoiceOver:(id)arg1 setContext:(int)arg2 ;
-(void)accessoryVoiceOver:(id)arg1 performAction:(int)arg2 parameters:(id)arg3 ;
-(void)accessoryVoiceOver:(id)arg1 requestConfiguration:(int)arg2 param:(id)arg3 ;
-(void)accessoryVoiceOverStartInformationUpdate:(id)arg1 ;
-(void)accessoryVoiceOverStopInformationUpdate:(id)arg1 ;
-(void)accessoryVoiceOverStartCursorInformationUpdate:(id)arg1 ;
-(void)accessoryVoiceOverStopCursorInformationUpdate:(id)arg1 ;
-(void)updateVoiceOverInfo:(id)arg1 ;
-(void)updateVoiceOverCursorInfo:(id)arg1 ;
@end


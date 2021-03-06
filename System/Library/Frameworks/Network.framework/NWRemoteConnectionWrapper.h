/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:04 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Network.framework/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NWConnection;

@interface NWRemoteConnectionWrapper : NSObject {

	NSUUID* _clientID;
	NWConnection* _connection;

}

@property (retain) NSUUID * clientID;                      //@synthesize clientID=_clientID - In the implementation block
@property (retain) NWConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(NSUUID *)clientID;
-(void)setClientID:(NSUUID *)arg1 ;
-(void)setConnection:(NWConnection *)arg1 ;
-(NWConnection *)connection;
@end


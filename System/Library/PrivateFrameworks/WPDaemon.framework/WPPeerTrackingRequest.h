/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WPDaemon.framework/WPDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NSDictionary;

@interface WPPeerTrackingRequest : NSObject <NSSecureCoding> {

	unsigned char _clientType;
	NSUUID* _peerUUID;
	NSDictionary* _peerTrackingDictionary;

}

@property (assign) unsigned char clientType;                           //@synthesize clientType=_clientType - In the implementation block
@property (retain) NSUUID * peerUUID;                                  //@synthesize peerUUID=_peerUUID - In the implementation block
@property (retain) NSDictionary * peerTrackingDictionary;              //@synthesize peerTrackingDictionary=_peerTrackingDictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)setClientType:(unsigned char)arg1 ;
-(unsigned char)clientType;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSUUID *)peerUUID;
-(void)setPeerUUID:(NSUUID *)arg1 ;
-(NSDictionary *)peerTrackingDictionary;
-(void)setPeerTrackingDictionary:(NSDictionary *)arg1 ;
@end


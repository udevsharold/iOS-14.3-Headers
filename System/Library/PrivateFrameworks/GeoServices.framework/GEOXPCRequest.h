/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:16 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/GEOXPCSerializable.h>

@protocol OS_xpc_object;
@class NSObject, NSError, NSString, GEOPeer, GEOMapServiceTraits, GEOApplicationAuditToken, GEODataRequestThrottlerToken, NSProgress;

@interface GEOXPCRequest : NSObject <GEOXPCSerializable> {

	unsigned char _flags;
	NSObject*<OS_xpc_object> _object;
	NSError* _error;
	NSString* _service;
	NSString* _method;
	GEOPeer* _peer;
	GEOMapServiceTraits* _traits;
	GEOApplicationAuditToken* _auditToken;
	GEODataRequestThrottlerToken* _throttleToken;
	NSProgress* _progressToMirrorOverXPC;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> object;                             //@synthesize object=_object - In the implementation block
@property (nonatomic,retain) NSString * service;                                          //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSString * method;                                           //@synthesize method=_method - In the implementation block
@property (nonatomic,retain) GEOPeer * peer;                                              //@synthesize peer=_peer - In the implementation block
@property (nonatomic,retain) GEOApplicationAuditToken * preferredAuditToken;              //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,retain) NSProgress * progress;                                       //@synthesize progressToMirrorOverXPC=_progressToMirrorOverXPC - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_xpc_object> replyDictionary; 
@property (nonatomic,readonly) unsigned char flags;                                       //@synthesize flags=_flags - In the implementation block
@property (nonatomic,readonly) GEOMapServiceTraits * traits;                              //@synthesize traits=_traits - In the implementation block
@property (nonatomic,readonly) GEODataRequestThrottlerToken * throttleToken;              //@synthesize throttleToken=_throttleToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)reportsProgress;
-(id)initWithXPCDictionary:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)setPreferredAuditToken:(GEOApplicationAuditToken *)arg1 ;
-(GEOApplicationAuditToken *)preferredAuditToken;
-(id)_createConnectionWithQueue:(id)arg1 ;
-(id)initWithMessage:(id)arg1 traits:(id)arg2 auditToken:(id)arg3 throttleToken:(id)arg4 ;
-(NSString *)service;
-(NSString *)method;
-(NSObject*<OS_xpc_object>)object;
-(void)encodeToXPCDictionary:(id)arg1 ;
-(void)setPeer:(GEOPeer *)arg1 ;
-(id)sendSync:(id)arg1 error:(id*)arg2 ;
-(NSObject*<OS_xpc_object>)replyDictionary;
-(GEODataRequestThrottlerToken *)throttleToken;
-(void)setObject:(NSObject*<OS_xpc_object>)arg1 ;
-(void)send:(id)arg1 withReply:(id)arg2 handler:(/*^block*/id)arg3 ;
-(NSString *)description;
-(void)setMethod:(NSString *)arg1 ;
-(GEOPeer *)peer;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)send:(id)arg1 ;
-(GEOMapServiceTraits *)traits;
-(NSProgress *)progress;
-(unsigned char)flags;
-(id)_prepareRequest;
-(void)setService:(NSString *)arg1 ;
@end


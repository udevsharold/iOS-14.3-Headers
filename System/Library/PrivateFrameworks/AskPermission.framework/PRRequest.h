/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:34 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AskPermission.framework/AskPermission
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary, NSNumber, NSDate;

@interface PRRequest : NSObject <NSSecureCoding> {

	BOOL _requestedOnThisDevice;
	NSString* _requestID;
	NSString* _ask;
	NSDictionary* _requestInfo;
	unsigned long long _requestStatus;
	NSNumber* _requesterDSID;
	NSNumber* _responderDSID;
	NSString* _clientIdentifier;
	NSDate* _dateAddedToLocalCache;
	NSString* _statusDescription;

}

@property (copy) NSString * requestID;                            //@synthesize requestID=_requestID - In the implementation block
@property (copy) NSString * ask;                                  //@synthesize ask=_ask - In the implementation block
@property (copy) NSDictionary * requestInfo;                      //@synthesize requestInfo=_requestInfo - In the implementation block
@property (assign) unsigned long long requestStatus;              //@synthesize requestStatus=_requestStatus - In the implementation block
@property (copy) NSNumber * requesterDSID;                        //@synthesize requesterDSID=_requesterDSID - In the implementation block
@property (copy) NSNumber * responderDSID;                        //@synthesize responderDSID=_responderDSID - In the implementation block
@property (copy) NSString * clientIdentifier;                     //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign) BOOL requestedOnThisDevice;                    //@synthesize requestedOnThisDevice=_requestedOnThisDevice - In the implementation block
@property (copy) NSDate * dateAddedToLocalCache;                  //@synthesize dateAddedToLocalCache=_dateAddedToLocalCache - In the implementation block
@property (readonly) NSString * statusDescription;                //@synthesize statusDescription=_statusDescription - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRequestID:(NSString *)arg1 ;
-(void)setClientIdentifier:(NSString *)arg1 ;
-(unsigned long long)requestStatus;
-(id)initWithCacheRepresentation:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)ask;
-(NSDictionary *)requestInfo;
-(NSString *)requestID;
-(NSString *)statusDescription;
-(void)setAsk:(NSString *)arg1 ;
-(NSString *)clientIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setRequestInfo:(NSDictionary *)arg1 ;
-(id)cacheRepresentation;
-(void)setRequestStatus:(unsigned long long)arg1 ;
-(id)initWithAsk:(id)arg1 requestInfo:(id)arg2 ;
-(NSNumber *)requesterDSID;
-(void)setRequesterDSID:(NSNumber *)arg1 ;
-(NSNumber *)responderDSID;
-(void)setResponderDSID:(NSNumber *)arg1 ;
-(BOOL)requestedOnThisDevice;
-(void)setRequestedOnThisDevice:(BOOL)arg1 ;
-(NSDate *)dateAddedToLocalCache;
-(void)setDateAddedToLocalCache:(NSDate *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:54 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreWiFi.framework/CoreWiFi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSBlockOperation.h>

@class NSUUID, CWFRequestParameters, NSDate, NSDictionary;

@interface CWFXPCRequest : NSBlockOperation {

	BOOL _didSendResponse;
	NSUUID* _UUID;
	long long _type;
	CWFRequestParameters* _requestParameters;
	NSDate* _receivedAt;
	NSDictionary* _info;
	/*^block*/id _response;

}

@property (assign) BOOL didSendResponse;                                          //@synthesize didSendResponse=_didSendResponse - In the implementation block
@property (nonatomic,copy) NSUUID * UUID;                                         //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic) long long type;                                      //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) CWFRequestParameters * requestParameters;              //@synthesize requestParameters=_requestParameters - In the implementation block
@property (nonatomic,copy) NSDate * receivedAt;                                   //@synthesize receivedAt=_receivedAt - In the implementation block
@property (nonatomic,copy) NSDictionary * info;                                   //@synthesize info=_info - In the implementation block
@property (nonatomic,copy) id response;                                           //@synthesize response=_response - In the implementation block
-(void)setUUID:(NSUUID *)arg1 ;
-(void)setInfo:(NSDictionary *)arg1 ;
-(BOOL)didSendResponse;
-(BOOL)isExecuting;
-(void)setRequestParameters:(CWFRequestParameters *)arg1 ;
-(CWFRequestParameters *)requestParameters;
-(id)init;
-(void)setReceivedAt:(NSDate *)arg1 ;
-(NSDictionary *)info;
-(NSUUID *)UUID;
-(id)response;
-(void)setType:(long long)arg1 ;
-(void)setResponse:(id)arg1 ;
-(BOOL)isFinished;
-(NSDate *)receivedAt;
-(id)description;
-(long long)type;
-(void)setDidSendResponse:(BOOL)arg1 ;
@end


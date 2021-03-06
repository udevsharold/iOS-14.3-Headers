/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:58 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface RPLegacySessionMessage : NSObject {

	NSDictionary* _message;
	NSDictionary* _options;
	NSString* _requestID;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) NSDictionary * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSDictionary * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSString * requestID;                //@synthesize requestID=_requestID - In the implementation block
@property (nonatomic,copy) id responseHandler;                  //@synthesize responseHandler=_responseHandler - In the implementation block
-(NSDictionary *)message;
-(void)setRequestID:(NSString *)arg1 ;
-(void)setMessage:(NSDictionary *)arg1 ;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(NSString *)requestID;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
@end


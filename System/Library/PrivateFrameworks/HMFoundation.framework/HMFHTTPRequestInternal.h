/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSMutableDictionary, NSURL, NSString, NSData, HMFActivity, NSDictionary;

@interface HMFHTTPRequestInternal : HMFObject {

	NSMutableDictionary* _headerFields;
	NSURL* _URL;
	NSString* _method;
	NSData* _body;
	HMFActivity* _activity;

}

@property (nonatomic,copy) NSURL * URL;                                //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * method;                          //@synthesize method=_method - In the implementation block
@property (nonatomic,retain) NSDictionary * headerFields;              //@synthesize headerFields=_headerFields - In the implementation block
@property (nonatomic,retain) NSData * body;                            //@synthesize body=_body - In the implementation block
@property (nonatomic,readonly) HMFActivity * activity;                 //@synthesize activity=_activity - In the implementation block
-(NSData *)body;
-(void)setBody:(NSData *)arg1 ;
-(HMFActivity *)activity;
-(NSDictionary *)headerFields;
-(id)init;
-(void)setURL:(NSURL *)arg1 ;
-(NSString *)method;
-(void)setMethod:(NSString *)arg1 ;
-(void)setHeaderFields:(NSDictionary *)arg1 ;
-(NSURL *)URL;
-(id)responseWithStatusCode:(long long)arg1 ;
-(void)setHeaderValue:(id)arg1 forHeaderKey:(id)arg2 ;
@end


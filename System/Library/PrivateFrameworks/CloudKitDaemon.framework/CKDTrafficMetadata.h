/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSURL, NSString, NSDictionary;

@interface CKDTrafficMetadata : NSObject <NSSecureCoding> {

	BOOL _parsingStandaloneMessage;
	NSDate* _timestamp;
	NSURL* _url;
	NSString* _method;
	long long _status;
	NSDictionary* _headers;
	NSString* _requestClassName;

}

@property (nonatomic,retain) NSDate * timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSURL * url;                                //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * method;                          //@synthesize method=_method - In the implementation block
@property (assign,nonatomic) long long status;                           //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSDictionary * headers;                     //@synthesize headers=_headers - In the implementation block
@property (nonatomic,retain) NSString * requestClassName;                //@synthesize requestClassName=_requestClassName - In the implementation block
@property (assign,nonatomic) BOOL parsingStandaloneMessage;              //@synthesize parsingStandaloneMessage=_parsingStandaloneMessage - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSString *)method;
-(void)setRequestClassName:(NSString *)arg1 ;
-(NSDictionary *)headers;
-(long long)status;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)requestClassName;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(void)setMethod:(NSString *)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSURL *)url;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)parsingStandaloneMessage;
-(void)setParsingStandaloneMessage:(BOOL)arg1 ;
@end


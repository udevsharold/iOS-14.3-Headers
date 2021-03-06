/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:35 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <RelevanceEngine/RelevanceEngine-Structs.h>
@class REHTTPRequest, NSDictionary, NSString, NSDate, NSData;

@interface REHTTPResponse : NSObject {

	REHTTPRequest* _request;
	CFHTTPMessageRef _message;
	long long _statusCode;

}

@property (nonatomic,readonly) long long statusCode;                          //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * headerFields; 
@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSData * body; 
-(long long)statusCode;
-(NSData *)body;
-(void)setBody:(NSData *)arg1 ;
-(NSDictionary *)headerFields;
-(NSDate *)date;
-(CFHTTPServerResponseRef)response;
-(void)dealloc;
-(void)setContentType:(NSString *)arg1 ;
-(NSString *)contentType;
-(void)setHeaderValue:(id)arg1 forKey:(id)arg2 ;
-(void)setDate:(NSDate *)arg1 ;
-(id)_dateFormatter;
-(id)initWithRequest:(id)arg1 statusCode:(long long)arg2 ;
-(id)headerValueForKey:(id)arg1 ;
@end


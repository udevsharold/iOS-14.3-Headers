/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:25 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/JXHTTPRequestBody.h>

@class NSData, NSString;

@interface JXHTTPJSONBody : NSObject <JXHTTPRequestBody> {

	NSData* _requestData;

}

@property (nonatomic,retain) NSData * requestData;                  //@synthesize requestData=_requestData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)withString:(id)arg1 ;
+(id)withData:(id)arg1 ;
+(id)withJSONObject:(id)arg1 ;
-(NSData *)requestData;
-(void)setRequestData:(NSData *)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)httpInputStream;
-(id)httpContentType;
-(long long)httpContentLength;
-(void)httpOperationDidFinishLoading:(id)arg1 ;
@end


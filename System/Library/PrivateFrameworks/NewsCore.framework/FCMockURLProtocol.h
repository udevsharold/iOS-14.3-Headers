/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CFNetwork/NSURLProtocol.h>

@interface FCMockURLProtocol : NSURLProtocol
+(id)URLForData:(id)arg1 mimeType:(id)arg2 ;
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(id)URLForError:(id)arg1 ;
+(id)URLForData:(id)arg1 mimeType:(id)arg2 statusCode:(unsigned long long)arg3 ;
+(BOOL)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2 ;
-(void)startLoading;
-(void)stopLoading;
@end


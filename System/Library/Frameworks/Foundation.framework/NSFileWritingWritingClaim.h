/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSFileAccessClaim.h>

@class NSURL, NSFileAccessNode;

@interface NSFileWritingWritingClaim : NSFileAccessClaim {

	NSURL* _url1;
	BOOL _url1DidChange;
	unsigned long long _options1;
	NSURL* _url2;
	BOOL _url2DidChange;
	unsigned long long _options2;
	NSFileAccessNode* _location1;
	NSFileAccessNode* _location2;

}
+(BOOL)supportsSecureCoding;
-(void)granted;
-(void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2 ;
-(BOOL)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(BOOL)arg2 ;
-(void)dealloc;
-(void)devalueSelf;
-(void)invokeClaimer;
-(id)allURLs;
-(BOOL)blocksClaim:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)forwardUsingConnection:(id)arg1 crashHandler:(/*^block*/id)arg2 ;
-(BOOL)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2 ;
-(void)resolveURLsThenContinueInvokingClaimer:(/*^block*/id)arg1 ;
-(id)initWithPurposeID:(id)arg1 url:(id)arg2 options:(unsigned long long)arg3 url:(id)arg4 options:(unsigned long long)arg5 claimer:(/*^block*/id)arg6 ;
-(void)protectFilesAgainstEviction;
-(void)encodeWithCoder:(id)arg1 ;
@end


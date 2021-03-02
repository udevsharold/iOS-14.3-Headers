/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:44 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CATHTTPMessageParserDelegate;
#import <Catalyst/Catalyst-Structs.h>
@class NSDictionary;

@interface CATHTTPMessageParser : NSObject {

	CFHTTPMessageRef mCurrentMessage;
	NSDictionary* mCurrentHeaderFields;
	unsigned long long mCurrentBytesReceived;
	id<CATHTTPMessageParserDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CATHTTPMessageParserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)encodeRequestData:(id)arg1 ;
+(id)responseHeaderForContentWithLength:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<CATHTTPMessageParserDelegate>)arg1 ;
-(BOOL)appendBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(id<CATHTTPMessageParserDelegate>)delegate;
-(void)delegateDidReceiveRequestWithURL:(id)arg1 ;
-(void)delegateDidReceiveRequestData:(id)arg1 ;
-(void)delegateDidReceiveResponseData:(id)arg1 moreComing:(BOOL)arg2 ;
@end

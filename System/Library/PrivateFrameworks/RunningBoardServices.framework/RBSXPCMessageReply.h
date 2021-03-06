/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class RBSXPCCoder, RBSXPCMessageContext;

@interface RBSXPCMessageReply : NSObject {

	RBSXPCCoder* _payload;
	RBSXPCMessageContext* _context;
	BOOL _sent;

}

@property (nonatomic,readonly) id<RBSXPCEncoding><RBSXPCDecoding> payload;              //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) RBSXPCMessageContext * context;                          //@synthesize context=_context - In the implementation block
-(void)send;
-(id<RBSXPCEncoding><RBSXPCDecoding>)payload;
-(void)prepareForHandoff;
-(void)encode:(/*^block*/id)arg1 ;
-(RBSXPCMessageContext *)context;
@end


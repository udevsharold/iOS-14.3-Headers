/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsML.framework/CoreSuggestionsML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface SGMessagePair : NSObject {

	NSString* _reply;
	NSString* _prompt;
	NSString* _handle;
	NSDate* _sentAt;

}

@property (nonatomic,retain) NSString * reply;               //@synthesize reply=_reply - In the implementation block
@property (nonatomic,retain) NSString * prompt;              //@synthesize prompt=_prompt - In the implementation block
@property (nonatomic,retain) NSString * handle;              //@synthesize handle=_handle - In the implementation block
@property (nonatomic,retain) NSDate * sentAt;                //@synthesize sentAt=_sentAt - In the implementation block
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(void)setHandle:(NSString *)arg1 ;
-(NSString *)handle;
-(NSDate *)sentAt;
-(void)setReply:(NSString *)arg1 ;
-(NSString *)reply;
-(id)initWithReply:(id)arg1 prompt:(id)arg2 handle:(id)arg3 sentAt:(id)arg4 ;
-(void)setSentAt:(NSDate *)arg1 ;
@end


/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface _MFRecipientCollection : NSObject {

	NSMutableArray* _to;
	NSMutableArray* _cc;
	NSMutableArray* _bcc;

}

@property (nonatomic,copy,readonly) NSArray * toRecipients; 
@property (nonatomic,copy,readonly) NSArray * toRecipientStrings; 
@property (nonatomic,copy,readonly) NSArray * ccRecipients; 
@property (nonatomic,copy,readonly) NSArray * ccRecipientStrings; 
@property (nonatomic,copy,readonly) NSArray * bccRecipients; 
@property (nonatomic,copy,readonly) NSArray * bccRecipientStrings; 
-(NSArray *)ccRecipients;
-(NSArray *)bccRecipients;
-(id)init;
-(void)addToRecipientWithAddress:(id)arg1 displayName:(id)arg2 ;
-(void)addCCRecipientWithAddress:(id)arg1 displayName:(id)arg2 ;
-(void)addBCCRecipientWithAddress:(id)arg1 displayName:(id)arg2 ;
-(NSArray *)toRecipientStrings;
-(NSArray *)ccRecipientStrings;
-(NSArray *)bccRecipientStrings;
-(void)addToRecipient:(id)arg1 ;
-(void)addCCRecipient:(id)arg1 ;
-(void)addBCCRecipient:(id)arg1 ;
-(NSArray *)toRecipients;
@end


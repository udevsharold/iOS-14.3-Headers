/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:12 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TUReplyWithMessageStore : NSObject
-(id)init;
-(id)_defaultRepliesForSending:(BOOL)arg1 ;
-(id)customReplies;
-(id)_cannedRepliesForSending:(BOOL)arg1 ;
-(id)cannedReplies;
-(id)defaultReplies;
-(id)cannedReplyActionSheetOptions;
-(id)cannedRepliesForSending;
-(void)setCustomReply:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)_handleMessagesStoreChanged;
-(void)dealloc;
-(int)count;
@end

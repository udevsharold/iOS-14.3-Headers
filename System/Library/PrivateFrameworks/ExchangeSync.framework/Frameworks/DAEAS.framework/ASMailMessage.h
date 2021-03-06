/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DAMailMessage.h>

@class ASEmailItem;

@interface ASMailMessage : DAMailMessage {

	ASEmailItem* _ASEmailItem;

}
+(BOOL)supportsSecureCoding;
-(id)to;
-(id)cc;
-(id)subject;
-(id)bcc;
-(id)from;
-(id)body;
-(id)preview;
-(id)attachments;
-(id)sender;
-(BOOL)isDraft;
-(BOOL)read;
-(id)date;
-(id)longID;
-(id)folderID;
-(id)messageClass;
-(BOOL)flagged;
-(id)initWithCoder:(id)arg1 ;
-(id)replyTo;
-(id)remoteID;
-(id)description;
-(int)importance;
-(BOOL)verbIsSet;
-(id)rfc822Data;
-(id)conversationId;
-(id)meetingRequestUUID;
-(BOOL)readIsSet;
-(BOOL)flaggedIsSet;
-(int)smimeType;
-(id)meetingRequestMetaData;
-(BOOL)meetingRequestIsActionable;
-(int)lastVerb;
-(int)bodySize;
-(id)displayTo;
-(int)bodyTruncated;
-(id)threadTopic;
-(id)conversationIndex;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithASEmailItem:(id)arg1 ;
@end


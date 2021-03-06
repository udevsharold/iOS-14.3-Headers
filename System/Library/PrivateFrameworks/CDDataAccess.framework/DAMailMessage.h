/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@interface DAMailMessage : NSObject <NSCoding>
-(id)to;
-(id)cc;
-(id)subject;
-(id)bcc;
-(id)from;
-(id)clientID;
-(id)body;
-(id)preview;
-(id)attachments;
-(id)sender;
-(BOOL)isDraft;
-(BOOL)read;
-(id)instanceID;
-(id)date;
-(id)longID;
-(id)folderID;
-(id)messageClass;
-(BOOL)flagged;
-(id)initWithCoder:(id)arg1 ;
-(id)replyTo;
-(id)remoteID;
-(int)importance;
-(BOOL)verbIsSet;
-(id)rfc822Data;
-(id)conversationId;
-(id)meetingRequestUUID;
-(BOOL)readIsSet;
-(BOOL)flaggedIsSet;
-(int)smimeType;
-(int)bodyType;
-(id)meetingRequestMetaData;
-(BOOL)meetingRequestIsActionable;
-(int)lastVerb;
-(int)bodySize;
-(id)serverID;
-(id)displayTo;
-(int)bodyTruncated;
-(id)threadTopic;
-(id)conversationIndex;
-(void)encodeWithCoder:(id)arg1 ;
@end


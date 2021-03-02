/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, NSDate, SAPersonAttribute, NSString, NSNumber, NSURL;

@interface SAEmailEmail : SADomainObject

@property (nonatomic,copy) NSArray * attachments; 
@property (nonatomic,copy) NSDate * dateSent; 
@property (nonatomic,retain) SAPersonAttribute * fromEmail; 
@property (nonatomic,copy) NSString * message; 
@property (nonatomic,copy) NSString * messagePreview; 
@property (nonatomic,copy) NSNumber * outgoing; 
@property (nonatomic,copy) NSArray * receivingAddresses; 
@property (nonatomic,copy) NSArray * recipientsBcc; 
@property (nonatomic,copy) NSArray * recipientsCc; 
@property (nonatomic,copy) NSArray * recipientsTo; 
@property (nonatomic,copy) NSURL * referenceId; 
@property (nonatomic,copy) NSString * subject; 
@property (nonatomic,copy) NSString * timeZoneId; 
@property (nonatomic,copy) NSString * type; 
+(id)email;
+(id)emailWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)subject;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)message;
-(NSArray *)attachments;
-(NSDate *)dateSent;
-(void)setAttachments:(NSArray *)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(NSNumber *)outgoing;
-(void)setMessage:(NSString *)arg1 ;
-(SAPersonAttribute *)fromEmail;
-(void)setDateSent:(NSDate *)arg1 ;
-(void)setFromEmail:(SAPersonAttribute *)arg1 ;
-(NSString *)messagePreview;
-(void)setMessagePreview:(NSString *)arg1 ;
-(void)setReceivingAddresses:(NSArray *)arg1 ;
-(NSArray *)recipientsBcc;
-(void)setRecipientsBcc:(NSArray *)arg1 ;
-(NSArray *)recipientsCc;
-(void)setRecipientsCc:(NSArray *)arg1 ;
-(NSURL *)referenceId;
-(void)setReferenceId:(NSURL *)arg1 ;
-(NSString *)type;
-(void)setOutgoing:(NSNumber *)arg1 ;
-(NSArray *)recipientsTo;
-(NSArray *)receivingAddresses;
-(void)setRecipientsTo:(NSArray *)arg1 ;
-(NSString *)timeZoneId;
-(id)encodedClassName;
-(void)setTimeZoneId:(NSString *)arg1 ;
@end

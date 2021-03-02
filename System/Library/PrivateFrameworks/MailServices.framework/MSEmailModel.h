/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSURL;

@interface MSEmailModel : NSObject <NSSecureCoding> {

	int _type;
	NSString* _subject;
	NSString* _sender;
	NSArray* _to;
	NSArray* _cc;
	NSArray* _bcc;
	NSString* _body;
	NSURL* _reference;

}

@property (nonatomic,copy) NSString * subject;               //@synthesize subject=_subject - In the implementation block
@property (nonatomic,copy) NSString * sender;                //@synthesize sender=_sender - In the implementation block
@property (nonatomic,copy) NSArray * to;                     //@synthesize to=_to - In the implementation block
@property (nonatomic,copy) NSArray * cc;                     //@synthesize cc=_cc - In the implementation block
@property (nonatomic,copy) NSArray * bcc;                    //@synthesize bcc=_bcc - In the implementation block
@property (nonatomic,retain) NSString * body;                //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) NSURL * reference;              //@synthesize reference=_reference - In the implementation block
@property (assign,nonatomic) int type;                       //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSArray *)to;
-(NSArray *)cc;
-(NSString *)subject;
-(NSArray *)bcc;
-(void)setSubject:(NSString *)arg1 ;
-(NSString *)body;
-(void)setBody:(NSString *)arg1 ;
-(NSString *)sender;
-(void)setReference:(NSURL *)arg1 ;
-(void)setTo:(NSArray *)arg1 ;
-(void)setSender:(NSString *)arg1 ;
-(void)setType:(int)arg1 ;
-(void)setCc:(NSArray *)arg1 ;
-(void)setBcc:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)type;
-(NSURL *)reference;
-(void)encodeWithCoder:(id)arg1 ;
@end

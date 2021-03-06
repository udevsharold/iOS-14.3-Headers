/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:26 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSString, NSArray;

@interface _MFMailComposeContentVariation : NSObject <NSSecureCoding> {

	NSMutableArray* _attachmentIdentifiers;
	BOOL _bodyIsHTML;
	NSString* _name;
	NSString* _body;

}

@property (nonatomic,copy) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * body;                              //@synthesize body=_body - In the implementation block
@property (assign,nonatomic) BOOL bodyIsHTML;                            //@synthesize bodyIsHTML=_bodyIsHTML - In the implementation block
@property (nonatomic,copy) NSArray * attachmentIdentifiers;              //@synthesize attachmentIdentifiers=_attachmentIdentifiers - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)body;
-(void)setName:(NSString *)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(BOOL)bodyIsHTML;
-(void)addAttachmentIdentifier:(id)arg1 ;
-(void)setBodyIsHTML:(BOOL)arg1 ;
-(NSArray *)attachmentIdentifiers;
-(void)setAttachmentIdentifiers:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end


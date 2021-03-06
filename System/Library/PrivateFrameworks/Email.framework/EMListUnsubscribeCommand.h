/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Email.framework/Email
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol EDReceivingAccount;
@class NSString, EMListUnsubscribeCommandMessageHeaders;

@interface EMListUnsubscribeCommand : NSObject <NSSecureCoding> {

	id<EDReceivingAccount> _account;
	NSString* _accountIdentifier;
	NSString* _address;
	NSString* _subject;
	NSString* _body;
	EMListUnsubscribeCommandMessageHeaders* _originalMessageHeaders;

}

@property (nonatomic,readonly) NSString * address;                                                           //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) NSString * subject;                                                           //@synthesize subject=_subject - In the implementation block
@property (nonatomic,readonly) NSString * body;                                                              //@synthesize body=_body - In the implementation block
@property (nonatomic,readonly) id<EDReceivingAccount> account; 
@property (nonatomic,readonly) EMListUnsubscribeCommandMessageHeaders * originalMessageHeaders;              //@synthesize originalMessageHeaders=_originalMessageHeaders - In the implementation block
+(BOOL)supportsSecureCoding;
+(/*^block*/id)accountFinderBlock;
+(void)setAccountFinderBlock:(/*^block*/id)arg1 ;
-(NSString *)subject;
-(NSString *)body;
-(id)init;
-(id)_accountWithIdentifier:(id)arg1 ;
-(id<EDReceivingAccount>)account;
-(NSString *)address;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInitWithAddress:(id)arg1 subject:(id)arg2 body:(id)arg3 ;
-(id)initWithAddress:(id)arg1 subject:(id)arg2 body:(id)arg3 account:(id)arg4 headers:(id)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
-(EMListUnsubscribeCommandMessageHeaders *)originalMessageHeaders;
-(void)encodeWithCoder:(id)arg1 ;
@end


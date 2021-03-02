/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:02 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CNUIAAfamilyMember : NSObject <NSSecureCoding> {

	BOOL _isMe;
	NSString* _appleID;
	NSString* _firstName;
	NSString* _lastName;

}

@property (nonatomic,copy) NSString * appleID;                //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,copy) NSString * firstName;              //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy) NSString * lastName;               //@synthesize lastName=_lastName - In the implementation block
@property (assign,nonatomic) BOOL isMe;                       //@synthesize isMe=_isMe - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)cnuiFamilyMemberWithAAFamilyMember:(id)arg1 ;
-(BOOL)isMe;
-(void)setLastName:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIsMe:(BOOL)arg1 ;
-(NSString *)lastName;
-(NSString *)appleID;
-(NSString *)firstName;
-(void)setAppleID:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

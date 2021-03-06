/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString, NSPersonNameComponents;

@interface CNCoreDelegateInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {

	NSNumber* _dsid;
	NSString* _altDSID;
	NSString* _appleID;
	NSString* _principalPath;
	NSPersonNameComponents* _nameComponents;
	BOOL _isMe;

}

@property (nonatomic,copy,readonly) NSNumber * dsid;                                      //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,copy,readonly) NSString * altDSID;                                   //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,copy,readonly) NSString * principalPath;                             //@synthesize principalPath=_principalPath - In the implementation block
@property (nonatomic,copy,readonly) NSString * appleID;                                   //@synthesize appleID=_appleID - In the implementation block
@property (nonatomic,copy,readonly) NSPersonNameComponents * nameComponents;              //@synthesize nameComponents=_nameComponents - In the implementation block
@property (nonatomic,readonly) BOOL isMe;                                                 //@synthesize isMe=_isMe - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)nameComponentsForFamilyMember:(id)arg1 ;
+(id)hardCodedPrincipalPathForDSID:(id)arg1 ;
-(NSNumber *)dsid;
-(BOOL)isMe;
-(NSString *)altDSID;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAltDSID:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithFamilyMember:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDSID:(id)arg1 altDSID:(id)arg2 appleID:(id)arg3 principalPath:(id)arg4 nameComponents:(id)arg5 isMe:(BOOL)arg6 ;
-(id)_hardCodedPrincipalPathForFamilyMember:(id)arg1 ;
-(NSString *)principalPath;
-(NSString *)appleID;
-(NSPersonNameComponents *)nameComponents;
-(void)encodeWithCoder:(id)arg1 ;
@end


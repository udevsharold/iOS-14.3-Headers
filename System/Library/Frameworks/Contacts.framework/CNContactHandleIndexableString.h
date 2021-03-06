/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol _CNContactHandleStringEquivalenceStrategy;
@class NSString;

@interface CNContactHandleIndexableString : NSObject <NSCopying, NSSecureCoding> {

	NSString* _indexKey;
	NSString* _stringValue;
	id<_CNContactHandleStringEquivalenceStrategy> _equivalenceStrategy;

}

@property (nonatomic,copy,readonly) NSString * stringValue;                                                    //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) id<_CNContactHandleStringEquivalenceStrategy> equivalenceStrategy;              //@synthesize equivalenceStrategy=_equivalenceStrategy - In the implementation block
@property (nonatomic,copy,readonly) NSString * indexKey;                                                       //@synthesize indexKey=_indexKey - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)equivalenceStrategyWithString:(id)arg1 ;
+(id)emailIndexKey:(id)arg1 ;
+(id)phoneNumberIndexKey:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)initWithFullString:(id)arg1 indexKey:(id)arg2 equivalenceStrategy:(id)arg3 ;
-(id<_CNContactHandleStringEquivalenceStrategy>)equivalenceStrategy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)stringValue;
-(NSString *)indexKey;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isEquivalentToString:(id)arg1 strict:(BOOL*)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
@end


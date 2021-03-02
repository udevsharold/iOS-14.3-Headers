/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CNUIFamilyMemberContactItem : NSObject <NSCopying> {

	BOOL _unreachable;
	NSString* _label;
	NSString* _detailLabel;
	NSString* _contactIdentifier;

}

@property (nonatomic,readonly) NSString * contactIdentifier;                       //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * label;                                   //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) NSString * detailLabel;                             //@synthesize detailLabel=_detailLabel - In the implementation block
@property (getter=isUnreachable,nonatomic,readonly) BOOL unreachable;              //@synthesize unreachable=_unreachable - In the implementation block
+(id)familyMemberContactItemFromCoreFamilyMemberContactItem:(id)arg1 ;
+(id)typeLabelStringFromContactType:(long long)arg1 ;
-(NSString *)contactIdentifier;
-(id)initWithLabel:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)detailLabel;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)isUnreachable;
-(id)initWithLabel:(id)arg1 detailLabel:(id)arg2 unreachable:(BOOL)arg3 ;
-(id)initWithContactIdentifier:(id)arg1 label:(id)arg2 detailLabel:(id)arg3 unreachable:(BOOL)arg4 ;
-(NSString *)label;
@end

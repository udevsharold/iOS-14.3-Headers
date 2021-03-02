/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CNContact;

@interface CNUICoreContactEdit : NSObject {

	CNContact* _original;
	CNContact* _modified;

}

@property (nonatomic,readonly) CNContact * original;                        //@synthesize original=_original - In the implementation block
@property (nonatomic,readonly) CNContact * modified;                        //@synthesize modified=_modified - In the implementation block
@property (nonatomic,readonly) BOOL originalAndModifiedDiffer; 
-(id)initWithContact:(id)arg1 ;
-(CNContact *)modified;
-(unsigned long long)hash;
-(id)description;
-(CNContact *)original;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithOriginalContact:(id)arg1 modifiedContact:(id)arg2 ;
-(id)editBySettingModifiedContact:(id)arg1 ;
-(BOOL)originalAndModifiedDiffer;
-(BOOL)modifiesContact:(id)arg1 ;
@end

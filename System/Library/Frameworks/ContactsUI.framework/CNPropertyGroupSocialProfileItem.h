/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:03 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNPropertyGroupItem.h>

@class CNSocialProfile;

@interface CNPropertyGroupSocialProfileItem : CNPropertyGroupItem

@property (nonatomic,readonly) CNSocialProfile * profile; 
+(id)emptyValueForLabel:(id)arg1 ;
-(id)defaultActionURL;
-(CNSocialProfile *)profile;
-(id)displayLabel;
-(id)displayStringForValue:(id)arg1 ;
-(BOOL)isEquivalentToItem:(id)arg1 ;
-(id)valueForDisplayString:(id)arg1 ;
-(id)editingStringValue;
@end

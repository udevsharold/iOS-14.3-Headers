/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:27 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessageUI/MFComposeRecipient.h>

@class NSArray;

@interface MFComposeRecipientGroup : MFComposeRecipient {

	NSArray* _children;

}
-(BOOL)isGroup;
-(id)displayString;
-(int)property;
-(int)recordID;
-(void*)record;
-(id)initWithChildren:(id)arg1 displayString:(id)arg2 ;
-(id)address;
-(id)sortedChildren;
-(id)children;
-(BOOL)isEqual:(id)arg1 ;
-(id)placeholderName;
-(id)childrenWithCompleteMatches;
-(BOOL)wasCompleteMatch;
-(id)completelyMatchedAttributedStrings;
-(void)_populateSortedChildren;
-(id)unlocalizedLabel;
-(id)compositeName;
-(id)commentedAddress;
-(BOOL)isRemovableFromSearchResults;
-(id)label;
@end


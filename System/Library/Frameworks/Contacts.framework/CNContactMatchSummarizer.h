/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Contacts/Contacts-Structs.h>
@interface CNContactMatchSummarizer : NSObject {

	void* _tokenList;
	CFStringTokenizerRef _tokenizer;

}
+(id)summaryProperties;
+(id)keyDescriptorForContactIdentifiers:(id)arg1 matchInfos:(id)arg2 ;
+(id)summaryPropertyForMatchInfo:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)summariesFutureForContactsIdentifiers:(id)arg1 matchInfos:(id)arg2 contactStore:(id)arg3 scheduler:(id)arg4 ;
-(id)summaryForContact:(id)arg1 matchInfo:(id)arg2 ;
-(id)attributedStringForPropertyValueString:(id)arg1 queryTerms:(id)arg2 outMatchCount:(unsigned long long*)arg3 ;
@end

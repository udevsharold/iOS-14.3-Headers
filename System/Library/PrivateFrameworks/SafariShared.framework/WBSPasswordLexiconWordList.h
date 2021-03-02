/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <SafariShared/WBSPasswordWordList.h>

@interface WBSPasswordLexiconWordList : WBSPasswordWordList {

	LXLexiconRef _lexicon;

}
+(id)lexiconWordListWithIdentifier:(id)arg1 localeIdentifier:(id)arg2 ;
-(void)enumerateEntriesForString:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(id)initWithIdentifier:(id)arg1 lexicon:(LXLexiconRef)arg2 ;
@end

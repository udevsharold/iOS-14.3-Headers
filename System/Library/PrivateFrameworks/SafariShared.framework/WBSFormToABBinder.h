/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SafariShared/SafariShared-Structs.h>
@interface WBSFormToABBinder : NSObject
+(id)specifierForLabel:(id)arg1 ;
+(id)allSynonymsForMatch:(id)arg1 formAppearsToBeChinese:(BOOL)arg2 ;
+(id)specifierForAutocompleteToken:(id)arg1 ;
+(unsigned long long)indexOfBestMatchForString:(id)arg1 inArray:(id)arg2 startingPosition:(unsigned long long*)arg3 ;
+(WBSFieldLabelPatternMatcherArrayRef)addressBookFieldLabelPatternMatchers;
+(WBSFieldLabelPatternMatcherArrayRef)emailFieldLabelPatternMatchers;
@end
